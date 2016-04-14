void print_states(NuSMVEnv_ptr env,
		  Prop_ptr prop,
		  DDMgr_ptr dd,
		  BddEnc_ptr enc,
		  const OptsHandler_ptr opts,
		  const StreamMgr_ptr streams,
		  char * header, 
		  bdd_ptr init, 
		  bdd_ptr accepted, 
		  bdd_ptr init_and_accepted);

void print_spec_only(OStream_ptr file, Prop_ptr prop, Prop_PrintFmt fmt);