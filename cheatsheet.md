

### How to list the file names that changed between two commits?

`git diff --name-only SHA1 SHA2`

wobei `SHA1` und `SHA2` jeweil der _secure hash_ eines commits ist.
Findet man in github rechts bei den commits.
Für eingeschränkte Dateiendungen z.B. `-- '*.c'` dranhängen.

c Dateien im Folder NuSMV/code die wir seit dem ersten bis zum commit 156 geändert haben:

```
NuSMV-2.6.0/NuSMV/code/nusmv$ git diff --name-only ff5cb851788acaf73e4b1661f323f6efe99561a7 0eb2d131e29b3d904dea3cbe1b7a395f12a644cd -- '*.c'

NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitBatch.c
NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitData.c
NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitVers.c
NuSMV-2.6.0/NuSMV/code/nusmv/core/dd/dd.c
NuSMV-2.6.0/NuSMV/code/nusmv/core/dd/ddAc.c
NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c
NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcPrint.c
NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/opt.c
NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/optPkg.c
NuSMV-2.6.0/NuSMV/code/nusmv/shell/mc/mcCmd.c
```

### Source rekursiv durchsuchen

`grep -rn "Prop_get_status" "."`

### Links zu Dateien

 - [nusmv/core/mc/mcMc.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c)
 - [nusmv/core/mc/mcPrint.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcPrint.c)
 - [nusmv/core/dd/ddAc.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/dd/ddAc.c)
 - [nusmv/core/fsm/bdd/BddFsmPrint.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/BddFsmPrint.c)


### Unterschied zwischen zwei Versionen online Anzeigen

https://github.com/hklarner/SWP2016/compare


### Build from source:


1. `/NuSMV/mkdir build`
2. `/NuSMV/build/cmake ..`
3. `/NuSMV/build/make`


### Ergänzungen für die Shell

#### Ausführen interaktiver Modus

```
./NuSMV-2.6.0/NuSMV/build/bin/NuSMV -int
NuSMV > read_model -i raf_network.smv
NuSMV > go
NuSMV > check_ctlspec -p "EF(Mek)"
```



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











