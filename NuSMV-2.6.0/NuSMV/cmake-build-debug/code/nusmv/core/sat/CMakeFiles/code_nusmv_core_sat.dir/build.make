# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/william/Downloads/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/william/Downloads/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug

# Include any dependencies generated for this target.
include code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/depend.make

# Include the progress variables for this target.
include code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/progress.make

# Include the compile flags for this target's objects.
include code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/flags.make

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.o: code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/flags.make
code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.o: ../code/nusmv/core/sat/satUtils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/satUtils.c

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/satUtils.c > CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.i

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/satUtils.c -o CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.s

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.o: code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/flags.make
code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.o: ../code/nusmv/core/sat/SatSolver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/SatSolver.c

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/SatSolver.c > CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.i

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/SatSolver.c -o CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.s

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.o: code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/flags.make
code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.o: ../code/nusmv/core/sat/SatIncSolver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/SatIncSolver.c

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/SatIncSolver.c > CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.i

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/SatIncSolver.c -o CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.s

code_nusmv_core_sat: code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/satUtils.c.o
code_nusmv_core_sat: code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatSolver.c.o
code_nusmv_core_sat: code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/SatIncSolver.c.o
code_nusmv_core_sat: code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/build.make

.PHONY : code_nusmv_core_sat

# Rule to build all files generated by this target.
code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/build: code_nusmv_core_sat

.PHONY : code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/build

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/clean:
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat && $(CMAKE_COMMAND) -P CMakeFiles/code_nusmv_core_sat.dir/cmake_clean.cmake
.PHONY : code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/clean

code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/depend:
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : code/nusmv/core/sat/CMakeFiles/code_nusmv_core_sat.dir/depend

