
Build from source:
==================

(1) /NuSMV/mkdir build
(2) /NuSMV/build/cmake ..
(3) /NuSMV/build/make

synaptic:
 - readline-dev 
 
Insights into NuSMV2
--------------------

to search all c files use
   grep -rnw "./NuSMV/code/nusmv" -e "check_ctlspec"



NuSMV/code/nusmv/core/mc/mc.h
   eval_ctl_spec (BddFsm_ptr, BddEnc_ptr enc, node_ptr, node_ptr)
      
      
      
      
Interesting Files:
==================

NuSMV/code/nusmv7core/mc/mcMc.c
*******************************
s0 = eval_ctl_spec(fsm, enc, spec, Nil);
----------------------------------------
s0 is a BDD that represents the set of states satisfying a CTL property.


s0 = BddFsm_get_init(fsm);
--------------------------
s0 is a BDD that represents the set of initial states.


NuSMV/code/nusmv/core/fsm/bdd/BddFsmPrint.c
*******************************************
void BddFsm_print_reachable_states_info(const BddFsm_ptr self,
                                        const boolean print_states,
                                        const boolean print_defines,
                                        const boolean print_formula,
                                        OStream_ptr file)
--------------------------------------------------------------------
for printing a BDD in human readable format


BddEnc_print_set_of_states(self->enc, reachable, false, print_defines,
                               (VPFBEFNNV) NULL, file, NULL);
----------------------------------------------------------------------
for printing a BDD in human readable format


NuSMV/code/nusmv/shell/mc/mcCmd.c
*********************************
Cmd_CommandAdd(env, "check_ctlspec", CommandCheckCtlSpec, 0, true);
-------------------------------------------------------------------
an example for adding a command flag to the shell






