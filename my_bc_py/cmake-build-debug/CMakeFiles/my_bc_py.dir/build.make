# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/my_bc_py.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/my_bc_py.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_bc_py.dir/flags.make

CMakeFiles/my_bc_py.dir/main.c.o: CMakeFiles/my_bc_py.dir/flags.make
CMakeFiles/my_bc_py.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/my_bc_py.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_bc_py.dir/main.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/main.c

CMakeFiles/my_bc_py.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_bc_py.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/main.c > CMakeFiles/my_bc_py.dir/main.c.i

CMakeFiles/my_bc_py.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_bc_py.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/main.c -o CMakeFiles/my_bc_py.dir/main.c.s

CMakeFiles/my_bc_py.dir/my_lexer.c.o: CMakeFiles/my_bc_py.dir/flags.make
CMakeFiles/my_bc_py.dir/my_lexer.c.o: ../my_lexer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/my_bc_py.dir/my_lexer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_bc_py.dir/my_lexer.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/my_lexer.c

CMakeFiles/my_bc_py.dir/my_lexer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_bc_py.dir/my_lexer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/my_lexer.c > CMakeFiles/my_bc_py.dir/my_lexer.c.i

CMakeFiles/my_bc_py.dir/my_lexer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_bc_py.dir/my_lexer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/my_lexer.c -o CMakeFiles/my_bc_py.dir/my_lexer.c.s

CMakeFiles/my_bc_py.dir/my_token.c.o: CMakeFiles/my_bc_py.dir/flags.make
CMakeFiles/my_bc_py.dir/my_token.c.o: ../my_token.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/my_bc_py.dir/my_token.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_bc_py.dir/my_token.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/my_token.c

CMakeFiles/my_bc_py.dir/my_token.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_bc_py.dir/my_token.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/my_token.c > CMakeFiles/my_bc_py.dir/my_token.c.i

CMakeFiles/my_bc_py.dir/my_token.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_bc_py.dir/my_token.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/my_token.c -o CMakeFiles/my_bc_py.dir/my_token.c.s

CMakeFiles/my_bc_py.dir/nodes.c.o: CMakeFiles/my_bc_py.dir/flags.make
CMakeFiles/my_bc_py.dir/nodes.c.o: ../nodes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/my_bc_py.dir/nodes.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_bc_py.dir/nodes.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/nodes.c

CMakeFiles/my_bc_py.dir/nodes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_bc_py.dir/nodes.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/nodes.c > CMakeFiles/my_bc_py.dir/nodes.c.i

CMakeFiles/my_bc_py.dir/nodes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_bc_py.dir/nodes.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/nodes.c -o CMakeFiles/my_bc_py.dir/nodes.c.s

CMakeFiles/my_bc_py.dir/parser.c.o: CMakeFiles/my_bc_py.dir/flags.make
CMakeFiles/my_bc_py.dir/parser.c.o: ../parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/my_bc_py.dir/parser.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_bc_py.dir/parser.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/parser.c

CMakeFiles/my_bc_py.dir/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_bc_py.dir/parser.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/parser.c > CMakeFiles/my_bc_py.dir/parser.c.i

CMakeFiles/my_bc_py.dir/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_bc_py.dir/parser.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/parser.c -o CMakeFiles/my_bc_py.dir/parser.c.s

# Object files for target my_bc_py
my_bc_py_OBJECTS = \
"CMakeFiles/my_bc_py.dir/main.c.o" \
"CMakeFiles/my_bc_py.dir/my_lexer.c.o" \
"CMakeFiles/my_bc_py.dir/my_token.c.o" \
"CMakeFiles/my_bc_py.dir/nodes.c.o" \
"CMakeFiles/my_bc_py.dir/parser.c.o"

# External object files for target my_bc_py
my_bc_py_EXTERNAL_OBJECTS =

my_bc_py: CMakeFiles/my_bc_py.dir/main.c.o
my_bc_py: CMakeFiles/my_bc_py.dir/my_lexer.c.o
my_bc_py: CMakeFiles/my_bc_py.dir/my_token.c.o
my_bc_py: CMakeFiles/my_bc_py.dir/nodes.c.o
my_bc_py: CMakeFiles/my_bc_py.dir/parser.c.o
my_bc_py: CMakeFiles/my_bc_py.dir/build.make
my_bc_py: CMakeFiles/my_bc_py.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable my_bc_py"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_bc_py.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_bc_py.dir/build: my_bc_py
.PHONY : CMakeFiles/my_bc_py.dir/build

CMakeFiles/my_bc_py.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_bc_py.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_bc_py.dir/clean

CMakeFiles/my_bc_py.dir/depend:
	cd /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug /Users/marcel.ghisi/Projects/ELU/S2/my_bc_py/cmake-build-debug/CMakeFiles/my_bc_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_bc_py.dir/depend

