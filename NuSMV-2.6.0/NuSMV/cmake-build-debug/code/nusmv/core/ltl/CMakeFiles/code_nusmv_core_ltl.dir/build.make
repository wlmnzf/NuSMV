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
include code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/depend.make

# Include the progress variables for this target.
include code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/progress.make

# Include the compile flags for this target's objects.
include code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/flags.make

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.o: code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/flags.make
code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.o: ../code/nusmv/core/ltl/ltl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl/ltl.c

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl/ltl.c > CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.i

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl/ltl.c -o CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.s

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.o: code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/flags.make
code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.o: ../code/nusmv/core/ltl/ltlCompassion.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl/ltlCompassion.c

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl/ltlCompassion.c > CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.i

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl/ltlCompassion.c -o CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.s

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.o: code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/flags.make
code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.o: ../code/nusmv/core/ltl/ltl2smv/ltl2smv.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl/ltl2smv/ltl2smv.c

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl/ltl2smv/ltl2smv.c > CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.i

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl/ltl2smv/ltl2smv.c -o CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.s

code_nusmv_core_ltl: code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl.c.o
code_nusmv_core_ltl: code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltlCompassion.c.o
code_nusmv_core_ltl: code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/ltl2smv/ltl2smv.c.o
code_nusmv_core_ltl: code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/build.make

.PHONY : code_nusmv_core_ltl

# Rule to build all files generated by this target.
code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/build: code_nusmv_core_ltl

.PHONY : code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/build

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/clean:
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl && $(CMAKE_COMMAND) -P CMakeFiles/code_nusmv_core_ltl.dir/cmake_clean.cmake
.PHONY : code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/clean

code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/depend:
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/ltl /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : code/nusmv/core/ltl/CMakeFiles/code_nusmv_core_ltl.dir/depend

