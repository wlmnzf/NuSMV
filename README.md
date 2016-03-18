
### Build from source:


1. /NuSMV/mkdir build
2. /NuSMV/build/cmake ..
3. /NuSMV/build/make

 

### Interesting files and functions:

To add a new command line option to NuSMV check
  * [./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinit.h](./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinit.h)
  
  Check the comments and understand the arguments for `NuSMVCore_add_command_line_option` and `NuSMVCore_add_env_command_line_option`
  
  What does `check_and_apply` in step 4) do?
  
  
  * [./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitData.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitData.c)
  
  In particular the function `NuSMVCore_add_command_line_option`
  


* `grep -rnw "." -e "Mc_CheckCTLSpec"`
  * [NuSMV-2.6.0/NuSMV/code/nusmv/core/prop/Prop.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/prop/Prop.c)

      
### Interesting files and functions:

* [NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mc.h](./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mc.h)
      
  * eval_ctl_spec (BddFsm_ptr, BddEnc_ptr enc, node_ptr, node_ptr)

* [NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c)

  * s0 = eval_ctl_spec(fsm, enc, spec, Nil);
  
     s0 is a BDD that represents the set of states satisfying a CTL property.


  * s0 = BddFsm_get_init(fsm);

     s0 is a BDD that represents the set of initial states.


* [NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/BddFsmPrint.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/BddFsmPrint.c)

  * void BddFsm_print_reachable_states_info(...)
                                        
     for printing a BDD in human readable format


  * BddEnc_print_set_of_states(...);

     for printing a BDD in human readable format


* NuSMV/code/nusmv/shell/mc/mcCmd.c

  * Cmd_CommandAdd(env, "check_ctlspec", CommandCheckCtlSpec, 0, true);

     an example for adding a command flag to the shell






