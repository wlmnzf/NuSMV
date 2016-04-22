### All files created or changed for extension print accepting states

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitBatch.c`

- Added error message for option `-a`: if only one filename is given, the error message will be "Filename for option -a is (null). You must set the filename before." instead of "Input file is (null). You must set the input file before."

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/cinit/cinitData.c`

- Added command line option `-a` for printing initial, accepting and initial accepting states to the command line or a file specified by the user.

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/dd/CMakeLists.txt`

- Added `ddAc.c` to sources and `ddAc.h` to headers.

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/dd/ddAc.c`

- Created file `ddAc.c` which holds the functions for printing a bdd as a factored formula, based on `Cudd_DumpFactoredForm` from the Cudd-Package.

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/dd/ddAc.h`

- Created file `ddAc.h`, the header file for `ddAc.c`.

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/CMakeLists.txt`

- Added `mcPrint.c` to source files and `mcPrint.h` to header files.

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcMc.c`

- Added: in `Mc_CheckCTLSpec`, the initial states and accepting states are stored in bdd_ptr's.
- Added: calls `print_accepting_states` function if commandline option `-a` is set.

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcPrint.c`

- Created file `mcPrint.c` which computes the initial accepting states and prints initial, accepting and initial accepting states to the standard output or to a file specified by the user.

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/mc/mcPrint.h`

- Created file `mcPrint.h`, the header file for `mcPrint.c`

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/opt.c`

- Added functions for print accepting states option: `set_print_accepting` sets the file name, `get_print_accepting` returns the file name specified by the user, `reset_print_accepting` resets the filename to default (`(char*) NULL`).

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/opt.h`

- Added environment variable for the file name to be used with the option `-a`.
- Added default value for the option `-a`.
- Added function declarations for functions defined in `opt.c` (`set_print_accepting`, `get_print_accepting`, `reset_print_accepting`).

#### `NuSMV-2.6.0/NuSMV/code/nusmv/core/opt/optPkg.c`

- Registered command line option `-a` as a generic option.

#### `NuSMV-2.6.0/NuSMV/code/nusmv/shell/mc/mcCmd.c`

- Added support for option `-a`.

