#include "nusmv/core/bmc/sbmc/sbmcGen.h"
#include "nusmv/core/dd/ddAc.h"

void print_accepting_states(NuSMVEnv_ptr env,
		  Prop_ptr prop,
		  DDMgr_ptr dd,
		  BddEnc_ptr enc,
		  const OptsHandler_ptr opts,
		  const StreamMgr_ptr streams,
		  bdd_ptr init, 
		  bdd_ptr accepted)
{
  
  const MasterPrinter_ptr wffprint =
    MASTER_PRINTER(NuSMVEnv_get_value(env, ENV_WFF_PRINTER));
  OStream_ptr stream = StreamMgr_get_output_ostream(streams);
  OStream_ptr txt_output; 
//   DdManager mgr = dd->dd;
  
  
  int index_of_spec = Prop_get_index(prop);
  char * file_name = get_print_accepting(opts);
  char * txt_file_name = NIL(char);
  int max_len = sizeof(char) * 32;
  int chars;
  
  const char** inames;
  int lev;
  
  FILE * out = StreamMgr_get_output_stream(streams);
  const int dd_size = dd_get_size(dd);
  
  bdd_ptr init_and_accepted = bdd_dup(init);
  bdd_and_accumulate(dd, &init_and_accepted, accepted);
    
    
  
  
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
  
  if(strcmp(file_name, "print") == 0) {
    
    StreamMgr_print_output(streams, "Initial States: ");
    Cudd_DumpFormula_modified(dd, 1, &init, inames, out);
    print_bdd_size(enc, init, stream);
    StreamMgr_print_output(streams, "\n");

    StreamMgr_print_output(streams, "Accepting States: ");
    Cudd_DumpFormula_modified(dd, 1, &accepted, inames, out);
    print_bdd_size(enc, accepted, stream);
    StreamMgr_print_output(streams, "\n");
    
    StreamMgr_print_output(streams, "Initial and Accepting States: ");
    Cudd_DumpFormula_modified(dd, 1, &init_and_accepted, inames, out);
    print_bdd_size(enc, init_and_accepted, stream);
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

    OStream_printf(txt_output, "CTLSPEC:       ");
    Prop_print(prop, txt_output, get_prop_print_method(opts));
    OStream_printf(txt_output, "\n");

    fprintf(out, "INIT:          ");
    Cudd_DumpFormula_modified(dd, 1, &init, inames, out);
    fprintf(out, "\n");
    
    fprintf(out, "ACCEPTING:     ");
    Cudd_DumpFormula_modified(dd, 1, &accepted, inames, out);
    fprintf(out, "\n");
    
    fprintf(out, "INITACCEPTING: ");
    Cudd_DumpFormula_modified(dd, 1, &init_and_accepted, inames, out);
    fprintf(out, "\n");
    
    if (Prop_get_status(prop) == Prop_True) {
      fprintf(out, "ANSWER:        TRUE\n\n");
    }
    else{
      fprintf(out, "ANSWER:        FALSE\n\n");
    }

    OStream_destroy(txt_output);
    FREE(txt_file_name);
    fclose(out);
    
  }
  
  bdd_free(dd,init_and_accepted);
  
  /* aufraeumen */
  {
    int i;
    /* free inames */
    for( i=0; i < dd_size; ++i) {
      if( (const char*) NULL != inames[i]) { free( inames[i]); }
    }
    FREE(inames);
  }
  
}


void print_bdd_size(BddEnc_ptr enc,
		    bdd_ptr states,
		    OStream_ptr file)
{ 
  double size;
  size = BddEnc_count_states_of_bdd(enc, states);
  OStream_printf(file, "\n");
  OStream_printf(file, "number of states: %g", size);
}



