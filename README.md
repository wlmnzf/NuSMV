
### Source rekursiv durchsuchen

`grep -rn "Prop_get_status" "."`

### Links zu Dateien

 - [nusmv/core/mc/mcMc.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c)
 - [nusmv/core/mc/mcPrint.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcPrint.c)
 - [nusmv/core/dd/ddAc.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/dd/ddAc.c)
 - [nusmv/core/fsm/bdd/BddFsmPrint.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/BddFsmPrint.c)


### Unterschied zwischen zwei Versionen Anzeigen

https://github.com/hklarner/SWP2016/compare


### Build from source:


1. `/NuSMV/mkdir build`
2. `/NuSMV/build/cmake ..`
3. `/NuSMV/build/make`


### Ergänzungen für die Shell
#### Command hinzufügen

[./NuSMV-2.6.0/NuSMV/code/nusmv/shell/mc/mcCmd.c](./NuSMV-2.6.0/NuSMV/code/nusmv/shell/mc/mcCmd.c)

`Cmd_CommandAdd(env, "check_ctlspec", CommandCheckCtlSpec, 0, true)`

Ein Beispiel das zeigt wie man einen Befehl zur Shell hinzufügt.


#### Accepting states speichern

[./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mc.h](./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mc.h)
      
eval_ctl_spec (BddFsm_ptr, BddEnc_ptr enc, node_ptr, node_ptr)

[NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c)

s0 = eval_ctl_spec(fsm, enc, spec, Nil);
  
s0 is a BDD that represents the set of states satisfying a CTL property.


s0 = BddFsm_get_init(fsm);

s0 is a BDD that represents the set of initial states.











