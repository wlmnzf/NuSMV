#include "nusmv/core/mc/mcInt.h"
#include "nusmv/core/mc/mc.h"
#include "../enc/bdd/BddEnc.h"

#include "nusmv/core/utils/OStream.h"
#include "nusmv/core/utils/StreamMgr.h"
#include "nusmv/core/utils/Logger.h"
#include "nusmv/core/utils/ErrorMgr.h"
#include "nusmv/core/utils/error.h"
#include "nusmv/core/utils/utils_io.h"

#include "nusmv/core/trace/Trace.h"
#include "nusmv/core/trace/TraceMgr.h"

#include "nusmv/core/bmc/bmc.h"
#include "nusmv/core/bmc/sbmc/sbmcGen.h"

#include "nusmv/core/fsm/bdd/FairnessList.h"
#include "nusmv/core/parser/symbols.h"
#include "nusmv/core/enc/enc.h"
#include "nusmv/core/prop/propPkg.h"

#include "nusmv/core/fsm/bdd/BddFsm.h"
#include "nusmv/core/fsm/bdd/BddFsm_private.h"
#include "nusmv/core/dd/ddAc.h"

void print_states(NuSMVEnv_ptr env,
		  Prop_ptr prop,
		  DDMgr_ptr dd,
		  BddEnc_ptr enc,
		  const OptsHandler_ptr opts,
		  const StreamMgr_ptr streams,
		  char * header, 
		  bdd_ptr init, 
		  bdd_ptr accepted, 
		  bdd_ptr init_and_accepted)
{
  
  // TODO welche Variablen brauchen wir wirklich?
  const BddFsm_ptr diagram = BDD_FSM(NuSMVEnv_get_value(env, ENV_BDD_FSM));
  const MasterPrinter_ptr wffprint =
    MASTER_PRINTER(NuSMVEnv_get_value(env, ENV_WFF_PRINTER));
  OStream_ptr stream = StreamMgr_get_output_ostream(streams);
  OStream_ptr txt_output; 
  BddStates ini, acci, iniacci;
  int index_of_spec = Prop_get_index(prop);
  char * file_name = get_print_accepting(opts);
  char * def = "print";
  char * txt_file_name = NIL(char);
  int max_len = sizeof(char) * 32;
  int chars;
  
  const char** inames;
  const char** onames;
  int lev;
  
  FILE * out = StreamMgr_get_output_stream(streams);
  const int dd_size = dd_get_size(dd);
  
  ini = init;
  acci = accepted;
  iniacci = init_and_accepted;
  bdd_ref((bdd_ptr) ini);
  bdd_ref((bdd_ptr) acci);
  bdd_ref((bdd_ptr) iniacci);
  
  
  /* get input names */
  inames = ALLOC( const char*, dd_size);
  nusmv_assert((const char**) NULL != inames);
  
  for(lev = 0; lev < dd_size; ++lev) {
    int index = dd_get_index_at_level(dd, lev);
    if(BddEnc_has_var_at_index(enc, index)) {
      inames[lev] = (const char*) sprint_node(wffprint,
                      BddEnc_get_var_name_from_index(enc, index));
    }
    else {
      inames[lev] = (const char*) NULL;
    }
  }
  /* set output names */
  onames = ALLOC( const char*, 1);
  nusmv_assert((const char**) NULL != onames);

  
  if(strcmp(file_name, def) == 0) {
    
    onames[0] = "Initial States";
    dd_dump_factored_form(dd, 1, &init, inames, onames, out);
    StreamMgr_print_output(streams, "\n");

    onames[0] = "Accepting States";
    dd_dump_factored_form(dd, 1, &accepted, inames, onames, out);
    StreamMgr_print_output(streams, "\n");
    
    onames[0] = "Initial and Accepting States";
    dd_dump_factored_form(dd, 1, &init_and_accepted, inames, onames, out);
    StreamMgr_print_output(streams, "\n\n");
  }
  
  else {
    txt_file_name = ALLOC(char, max_len);
    chars = snprintf(txt_file_name, max_len, file_name);
    SNPRINTF_CHECK(chars, max_len);
    if (index_of_spec != 0){
      txt_output = OStream_create_file(txt_file_name, true);
    }
    else{
     txt_output = OStream_create_file(txt_file_name, false); 
    }
    out = fopen(txt_file_name, "a");
    print_spec_only(txt_output, prop, get_prop_print_method(opts));
    OStream_printf(txt_output, "\n");
    OStream_flush(txt_output);

    onames[0] = "INIT: \t\t";
    dd_dump_factored_form(dd, 1, &init, inames, onames, out);
    fprintf(out, "\n");
    
    onames[0] = "ACCEPTING: \t";
    dd_dump_factored_form(dd, 1, &accepted, inames, onames, out);
    fprintf(out, "\n");
    
    onames[0] = "INITACCEPTING: \t";
    dd_dump_factored_form(dd, 1, &init_and_accepted, inames, onames, out);
    fprintf(out, "\n\n");

    OStream_destroy(txt_output);
    FREE(txt_file_name);
    fclose(out);
    
  }
  
    /* aufraeumen */
  {
    int i;
    /* free inames */
    for( i=0; i < dd_size; ++i) {
      if( (const char*) NULL != inames[i]) { free( inames[i]); }
    }
    FREE(inames);
    FREE(onames);
  }
  
}

/* TODO Comments*/
void print_spec_only(OStream_ptr file, Prop_ptr prop, Prop_PrintFmt fmt)
{
  OStream_printf(file, "CTLSPEC: \t");
  Prop_print(prop, file, fmt);
  OStream_printf(file, " ");
}



void Bdd_size(const BddFsm_ptr self, 
					bdd_ptr interesting_states,
                                        const boolean print_states,
                                        const boolean print_defines,
                                        const boolean print_formula,
                                        OStream_ptr file,
					DDMgr_ptr dd,
					dd_ptr * states,
					const char ** inames,
					const char ** onames,
					FILE * output)
{
  bdd_ptr reachable;
  bdd_ptr mask;
  double reached_cardinality;
  double search_space_cardinality;

  BDD_FSM_CHECK_INSTANCE(self);

  mask = BddEnc_get_state_frozen_vars_mask_bdd(self->enc);

  reachable = interesting_states;

  bdd_and_accumulate(self->dd, &reachable, mask);
  
  reached_cardinality = BddEnc_count_states_of_bdd(self->enc, reachable);
  search_space_cardinality = BddEnc_count_states_of_bdd(self->enc, mask);
  bdd_free(self->dd, mask);


  /* one of these flags can be enabled, not both */
  nusmv_assert(!print_states || !print_formula);
  if (print_states) {
    BddEnc_print_set_of_states(self->enc, reachable, false, print_defines,
                               (VPFBEFNNV) NULL, file, NULL);
  }
  
  // TODO hier stattdessen dump_factored_form verwenden?
  
  else if (print_formula) {
//     BoolEnc_ptr benc = BoolEncClient_get_bool_enc(BOOL_ENC_CLIENT(self->enc));
// 
//     const array_t* layer_names =
//       BaseEnc_get_committed_layer_names(BASE_ENC(self->enc));
// 
//     SymbTable_ptr st = BaseEnc_get_symb_table(BASE_ENC(self->enc));
//     NodeList_ptr all_vars = SymbTable_get_layers_sf_vars(st, layer_names);
//     NodeList_ptr scalar_vars = NodeList_create();
//     ListIter_ptr iter;
// 
//     /* encoding variables are not allowed in the wff printer */
//     NODE_LIST_FOREACH(all_vars, iter) {
//       node_ptr v = NodeList_get_elem_at(all_vars, iter);
//       if (BoolEnc_is_var_bit(benc, v)) continue;
//       NodeList_append(scalar_vars, v);
//     }
//     NodeList_destroy(all_vars);
// 
//     BddEnc_print_bdd_wff(self->enc, reachable, scalar_vars,
//                          false, false, 0, file);
// 
//     NodeList_destroy(scalar_vars);
    
    /* print formula */
    dd_dump_factored_form(dd, 1, &states, inames, onames, output);
    
    
     /* If we have diameter info, print it. Otherwise, we can only print
     the number of reachable states (ie. We do not have onion rings
     informations. For example, reachable states have been computed
     with Guided Reachability  */
    OStream_printf(file, "\nsystem diameter: %d\n", BddFsm_get_diameter(self));
  
    OStream_printf(file, "reachable states: %g (2^%g) out of %g (2^%g)\n",
          reached_cardinality, log(reached_cardinality)/log(2.0),
          search_space_cardinality, log(search_space_cardinality)/log(2.0));
    OStream_printf(file, "\n");
  }

  bdd_free(self->dd, reachable);
}
