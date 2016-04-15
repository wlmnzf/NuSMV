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
//     dd_dump_factored_form(dd, 1, &init, inames, onames, out);
//     StreamMgr_print_output(streams, "\n");
    BddFsm_print_interesting_states_info(diagram, ini, false, false, true, stream, dd, init, inames, onames, out);
//     StreamMgr_print_output(streams, "\n");

    onames[0] = "Accepting States";
//     dd_dump_factored_form(dd, 1, &accepted, inames, onames, out);
//     StreamMgr_print_output(streams, "\n");
    BddFsm_print_interesting_states_info(diagram, acci, false, false, true, stream, dd, accepted, inames, onames, out);
//     StreamMgr_print_output(streams, "\n");
    
    onames[0] = "Initial and Accepting States";
//     dd_dump_factored_form(dd, 1, &init_and_accepted, inames, onames, out);
//     StreamMgr_print_output(streams, "\n");
    BddFsm_print_interesting_states_info(diagram, iniacci, false, false, true, stream, dd, init_and_accepted, inames, onames, out);
//     StreamMgr_print_output(streams, "\n");        
  }
  
  // TODO hier auch mit dd_dump_factored_form arbeiten
  else {
    txt_file_name = ALLOC(char, max_len);
    chars = snprintf(txt_file_name, max_len, file_name);
//     chars = snprintf(txt_file_name, max_len, "%s.txt", file_name);
    SNPRINTF_CHECK(chars, max_len);
    if (index_of_spec != 0){
      txt_output = OStream_create_file(txt_file_name, true);
    }
    else{
     txt_output = OStream_create_file(txt_file_name, false); 
    }
    out = fopen(txt_file_name, "a");
//     out = OStream_get_stream(txt_output);
    print_spec_only(txt_output, prop, get_prop_print_method(opts));
    OStream_printf(txt_output, "\n");
    OStream_flush(txt_output);
//     
//     onames[0] = "INIT: \t\t";
//     dd_dump_factored_form(dd, 1, &init, inames, onames, out);
//     fprintf(out, "\n");
    
//     txt_output = OStream_get_stream(txt_file_name);
//     fprintf(out, "\n");
    onames[0] = "INIT: \t\t";
//     OStream_printf(txt_output, "\n");
    dd_dump_factored_form(dd, 1, &init, inames, onames, out);
    fprintf(out, "\n");
//     BddFsm_print_interesting_states_info(diagram, ini, false, false, true, txt_output, dd, init, inames, onames, out);     
//     OStream_printf(txt_output, "\n");
    
    onames[0] = "ACCEPTING: \t";
    dd_dump_factored_form(dd, 1, &accepted, inames, onames, out);
    fprintf(out, "\n");
//     BddFsm_print_interesting_states_info(diagram, ini, false, false, true, txt_output, dd, accepted, inames, onames, out); 
//     OStream_printf(txt_output, "\n");
    
    onames[0] = "INITACCEPTING: \t";
    dd_dump_factored_form(dd, 1, &init_and_accepted, inames, onames, out);
    fprintf(out, "\n\n");
//     BddFsm_print_interesting_states_info(diagram, ini, false, false, true, txt_output, dd, init_and_accepted, inames, onames, out); 
//     OStream_printf(txt_output, "\n");
//     BddFsm_print_interesting_states_info(diagram, acci, false, false, true, txt_output);
//   
//     OStream_printf(txt_output, "INITACCEPTING: \t");
//     BddFsm_print_interesting_states_info(diagram, iniacci, false, false, true, txt_output);
//     OStream_printf(txt_output, "\n");
    
//     fclose(out);
//     OStream_flush(txt_output);
//     OStream_destroy(txt_output);
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
