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
include code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/depend.make

# Include the progress variables for this target.
include code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/progress.make

# Include the compile flags for this target's objects.
include code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/flags.make

code/nusmv/core/parser/ord/ord_grammar.c: ../code/nusmv/core/parser/ord/ord_grammar.y
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[BISON][nusmv_core_ord_parser] Building parser with bison 3.0.4"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/parser/ord && /usr/bin/bison -d -p parser_ord_ -d -o /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord/ord_grammar.c ord_grammar.y

code/nusmv/core/parser/ord/ord_grammar.h: code/nusmv/core/parser/ord/ord_grammar.c
	@$(CMAKE_COMMAND) -E touch_nocreate code/nusmv/core/parser/ord/ord_grammar.h

code/nusmv/core/parser/ord/ord_input.c: ../code/nusmv/core/parser/ord/ord_input.l
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "[FLEX][nusmv_core_ord_lexer] Building scanner with flex 2.6.4"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/parser/ord && /usr/bin/flex -o/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord/ord_input.c ord_input.l

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.o: code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/flags.make
code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.o: ../code/nusmv/core/parser/ord/ParserOrd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/parser/ord/ParserOrd.c

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/parser/ord/ParserOrd.c > CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.i

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/parser/ord/ParserOrd.c -o CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.s

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.o: code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/flags.make
code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.o: code/nusmv/core/parser/ord/ord_grammar.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord/ord_grammar.c

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord/ord_grammar.c > CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.i

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord/ord_grammar.c -o CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.s

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.o: code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/flags.make
code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.o: code/nusmv/core/parser/ord/ord_input.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.o"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.o   -c /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord/ord_input.c

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.i"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord/ord_input.c > CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.i

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.s"
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord/ord_input.c -o CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.s

code_nusmv_core_parser_ord: code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ParserOrd.c.o
code_nusmv_core_parser_ord: code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_grammar.c.o
code_nusmv_core_parser_ord: code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/ord_input.c.o
code_nusmv_core_parser_ord: code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/build.make

.PHONY : code_nusmv_core_parser_ord

# Rule to build all files generated by this target.
code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/build: code_nusmv_core_parser_ord

.PHONY : code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/build

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/clean:
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord && $(CMAKE_COMMAND) -P CMakeFiles/code_nusmv_core_parser_ord.dir/cmake_clean.cmake
.PHONY : code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/clean

code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/depend: code/nusmv/core/parser/ord/ord_grammar.c
code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/depend: code/nusmv/core/parser/ord/ord_grammar.h
code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/depend: code/nusmv/core/parser/ord/ord_input.c
	cd /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/parser/ord /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : code/nusmv/core/parser/ord/CMakeFiles/code_nusmv_core_parser_ord.dir/depend

