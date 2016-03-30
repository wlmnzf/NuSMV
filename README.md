
### Unterschied zwischen zwei Versionen Anzeigen

https://github.com/hklarner/SWP2016/compare


### Build from source:


1. `/NuSMV/mkdir build`
2. `/NuSMV/build/cmake ..`
3. `/NuSMV/build/make`

 
### Command line options zu NuSMV hinzufügen

[./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinit.h](./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinit.h)
  
Die Kommentare und Optionen zu `NuSMVCore_add_command_line_option` und `NuSMVCore_add_env_command_line_option` sehen interessant aus.
  
Was ist der Unterschied zwischen den beiden Funktionen?
  
Welche Rolle spielt die Funktion `check_and_apply(..)` in Schritt 4) ?
  
  
[./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitData.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitData.c)
    
`NuSMVCore_add_command_line_option(..)`
  
  
Beipiel: Wie wird die Option `-v` mit dem zusätzlichen Parameter `vl` (Zeile 747) definiert?
Erzeugt die "environment variable" `VERBOSE_LEVEL`. Wo und wie wird die verwendet?

Suchen mit grep.

`grep -rnw "." -e "VERBOSE_LEVEL"`. In vier Dateien:

* [./NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/opt.h](./NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/opt.h)
* [./NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/opt.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/opt.c)
* [./NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/optPkg.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/optPkg.c)
* [./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitData.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitData.c)


Interessante Funktionen:
* `set_verbose_level`
* `get_verbose_level`
* `OptsHandler_get_string_option_value(opt, PROGRAM_NAME)` für string Parameter
* `OptsHandler_get_int_option_value(opt, VERBOSE_LEVEL)` für integer Parameter


      
### Die accepting states speichern

[./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c)

Hier gibt's die Funktion `Mc_CheckCTLSpec`



[./NuSMV-2.6.0/NuSMV/code/nusmv/core/prop/Prop.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/prop/Prop.c)

`void prop_verify` (Zeile 1489)

Hier wird `Mc_CheckCTLSpec` aufgerufen.

Hier gibt's ein Beispiel, wie man aus `env` den "Optionen-Handler" erzeugt:

`const OptsHandler_ptr opts = OPTS_HANDLER(NuSMVEnv_get_value(env, ENV_OPTS_HANDLER));`



Bereits vorhandende Funktionen zur Ausgabe von BDDs:
 
[NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/BddFsmPrint.c](./NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/BddFsmPrint.c)

`BddFsm_print_reachable_states_info(...)`
                                        
`BddEnc_print_set_of_states(...)`




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











