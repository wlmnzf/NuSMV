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
include code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/depend.make

# Include the progress variables for this target.
include code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/progress.make

# Include the compile flags for this target's objects.
include code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/flags.make

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.o: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/flags.make
code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.o: ../code/nusmv/addons_core/compass/compassPkg.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compassPkg.c

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compassPkg.c > CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.i

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compassPkg.c -o CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.s

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.o: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/flags.make
code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.o: ../code/nusmv/addons_core/compass/compile/ProbAssign.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compile/ProbAssign.c

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compile/ProbAssign.c > CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.i

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compile/ProbAssign.c -o CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.s

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.o: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/flags.make
code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.o: ../code/nusmv/addons_core/compass/compile/compile.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compile/compile.c

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compile/compile.c > CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.i

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compile/compile.c -o CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.s

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.o: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/flags.make
code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.o: ../code/nusmv/addons_core/compass/sigref/sigrefWrite.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/sigref/sigrefWrite.c

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/sigref/sigrefWrite.c > CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.i

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/sigref/sigrefWrite.c -o CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.s

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.o: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/flags.make
code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.o: ../code/nusmv/addons_core/compass/compass.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compass.c

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compass.c > CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.i

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compass.c -o CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.s

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.o: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/flags.make
code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.o: ../code/nusmv/addons_core/compass/compassCmd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compassCmd.c

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compassCmd.c > CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.i

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass/compassCmd.c -o CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.s

code_nusmv_addons_core_compass: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassPkg.c.o
code_nusmv_addons_core_compass: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/ProbAssign.c.o
code_nusmv_addons_core_compass: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compile/compile.c.o
code_nusmv_addons_core_compass: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/sigref/sigrefWrite.c.o
code_nusmv_addons_core_compass: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compass.c.o
code_nusmv_addons_core_compass: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/compassCmd.c.o
code_nusmv_addons_core_compass: code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/build.make

.PHONY : code_nusmv_addons_core_compass

# Rule to build all files generated by this target.
code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/build: code_nusmv_addons_core_compass

.PHONY : code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/build

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/clean:
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass && $(CMAKE_COMMAND) -P CMakeFiles/code_nusmv_addons_core_compass.dir/cmake_clean.cmake
.PHONY : code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/clean

code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/depend:
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/addons_core/compass /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : code/nusmv/addons_core/compass/CMakeFiles/code_nusmv_addons_core_compass.dir/depend

