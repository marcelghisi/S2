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
CMAKE_SOURCE_DIR = /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/my_zsh_medium.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/my_zsh_medium.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_zsh_medium.dir/flags.make

CMakeFiles/my_zsh_medium.dir/main.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/my_zsh_medium.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/main.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/main.c

CMakeFiles/my_zsh_medium.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/main.c > CMakeFiles/my_zsh_medium.dir/main.c.i

CMakeFiles/my_zsh_medium.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/main.c -o CMakeFiles/my_zsh_medium.dir/main.c.s

CMakeFiles/my_zsh_medium.dir/my_token.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/my_token.c.o: ../my_token.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/my_zsh_medium.dir/my_token.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/my_token.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_token.c

CMakeFiles/my_zsh_medium.dir/my_token.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/my_token.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_token.c > CMakeFiles/my_zsh_medium.dir/my_token.c.i

CMakeFiles/my_zsh_medium.dir/my_token.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/my_token.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_token.c -o CMakeFiles/my_zsh_medium.dir/my_token.c.s

CMakeFiles/my_zsh_medium.dir/my_lexer.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/my_lexer.c.o: ../my_lexer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/my_zsh_medium.dir/my_lexer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/my_lexer.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_lexer.c

CMakeFiles/my_zsh_medium.dir/my_lexer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/my_lexer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_lexer.c > CMakeFiles/my_zsh_medium.dir/my_lexer.c.i

CMakeFiles/my_zsh_medium.dir/my_lexer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/my_lexer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_lexer.c -o CMakeFiles/my_zsh_medium.dir/my_lexer.c.s

CMakeFiles/my_zsh_medium.dir/parser.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/parser.c.o: ../parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/my_zsh_medium.dir/parser.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/parser.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/parser.c

CMakeFiles/my_zsh_medium.dir/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/parser.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/parser.c > CMakeFiles/my_zsh_medium.dir/parser.c.i

CMakeFiles/my_zsh_medium.dir/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/parser.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/parser.c -o CMakeFiles/my_zsh_medium.dir/parser.c.s

CMakeFiles/my_zsh_medium.dir/my_readline.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/my_readline.c.o: ../my_readline.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/my_zsh_medium.dir/my_readline.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/my_readline.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_readline.c

CMakeFiles/my_zsh_medium.dir/my_readline.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/my_readline.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_readline.c > CMakeFiles/my_zsh_medium.dir/my_readline.c.i

CMakeFiles/my_zsh_medium.dir/my_readline.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/my_readline.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_readline.c -o CMakeFiles/my_zsh_medium.dir/my_readline.c.s

CMakeFiles/my_zsh_medium.dir/utils.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/utils.c.o: ../utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/my_zsh_medium.dir/utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/utils.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/utils.c

CMakeFiles/my_zsh_medium.dir/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/utils.c > CMakeFiles/my_zsh_medium.dir/utils.c.i

CMakeFiles/my_zsh_medium.dir/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/utils.c -o CMakeFiles/my_zsh_medium.dir/utils.c.s

CMakeFiles/my_zsh_medium.dir/my_split.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/my_split.c.o: ../my_split.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/my_zsh_medium.dir/my_split.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/my_split.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_split.c

CMakeFiles/my_zsh_medium.dir/my_split.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/my_split.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_split.c > CMakeFiles/my_zsh_medium.dir/my_split.c.i

CMakeFiles/my_zsh_medium.dir/my_split.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/my_split.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/my_split.c -o CMakeFiles/my_zsh_medium.dir/my_split.c.s

CMakeFiles/my_zsh_medium.dir/nodes.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/nodes.c.o: ../nodes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/my_zsh_medium.dir/nodes.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/nodes.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/nodes.c

CMakeFiles/my_zsh_medium.dir/nodes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/nodes.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/nodes.c > CMakeFiles/my_zsh_medium.dir/nodes.c.i

CMakeFiles/my_zsh_medium.dir/nodes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/nodes.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/nodes.c -o CMakeFiles/my_zsh_medium.dir/nodes.c.s

CMakeFiles/my_zsh_medium.dir/source.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/source.c.o: ../source.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/my_zsh_medium.dir/source.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/source.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/source.c

CMakeFiles/my_zsh_medium.dir/source.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/source.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/source.c > CMakeFiles/my_zsh_medium.dir/source.c.i

CMakeFiles/my_zsh_medium.dir/source.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/source.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/source.c -o CMakeFiles/my_zsh_medium.dir/source.c.s

CMakeFiles/my_zsh_medium.dir/prompt.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/prompt.c.o: ../prompt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/my_zsh_medium.dir/prompt.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/prompt.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/prompt.c

CMakeFiles/my_zsh_medium.dir/prompt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/prompt.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/prompt.c > CMakeFiles/my_zsh_medium.dir/prompt.c.i

CMakeFiles/my_zsh_medium.dir/prompt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/prompt.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/prompt.c -o CMakeFiles/my_zsh_medium.dir/prompt.c.s

CMakeFiles/my_zsh_medium.dir/scanner.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/scanner.c.o: ../scanner.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/my_zsh_medium.dir/scanner.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/scanner.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/scanner.c

CMakeFiles/my_zsh_medium.dir/scanner.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/scanner.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/scanner.c > CMakeFiles/my_zsh_medium.dir/scanner.c.i

CMakeFiles/my_zsh_medium.dir/scanner.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/scanner.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/scanner.c -o CMakeFiles/my_zsh_medium.dir/scanner.c.s

CMakeFiles/my_zsh_medium.dir/executor.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/executor.c.o: ../executor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/my_zsh_medium.dir/executor.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/executor.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/executor.c

CMakeFiles/my_zsh_medium.dir/executor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/executor.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/executor.c > CMakeFiles/my_zsh_medium.dir/executor.c.i

CMakeFiles/my_zsh_medium.dir/executor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/executor.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/executor.c -o CMakeFiles/my_zsh_medium.dir/executor.c.s

CMakeFiles/my_zsh_medium.dir/symtab.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/symtab.c.o: ../symtab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/my_zsh_medium.dir/symtab.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/symtab.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/symtab.c

CMakeFiles/my_zsh_medium.dir/symtab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/symtab.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/symtab.c > CMakeFiles/my_zsh_medium.dir/symtab.c.i

CMakeFiles/my_zsh_medium.dir/symtab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/symtab.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/symtab.c -o CMakeFiles/my_zsh_medium.dir/symtab.c.s

CMakeFiles/my_zsh_medium.dir/initsh.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/initsh.c.o: ../initsh.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/my_zsh_medium.dir/initsh.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/initsh.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/initsh.c

CMakeFiles/my_zsh_medium.dir/initsh.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/initsh.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/initsh.c > CMakeFiles/my_zsh_medium.dir/initsh.c.i

CMakeFiles/my_zsh_medium.dir/initsh.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/initsh.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/initsh.c -o CMakeFiles/my_zsh_medium.dir/initsh.c.s

CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.o: ../builtins/builtins.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/builtins.c

CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/builtins.c > CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.i

CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/builtins.c -o CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.s

CMakeFiles/my_zsh_medium.dir/builtins/dump.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/builtins/dump.c.o: ../builtins/dump.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/my_zsh_medium.dir/builtins/dump.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/builtins/dump.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/dump.c

CMakeFiles/my_zsh_medium.dir/builtins/dump.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/builtins/dump.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/dump.c > CMakeFiles/my_zsh_medium.dir/builtins/dump.c.i

CMakeFiles/my_zsh_medium.dir/builtins/dump.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/builtins/dump.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/dump.c -o CMakeFiles/my_zsh_medium.dir/builtins/dump.c.s

CMakeFiles/my_zsh_medium.dir/builtins/exit.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/builtins/exit.c.o: ../builtins/exit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/my_zsh_medium.dir/builtins/exit.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/builtins/exit.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/exit.c

CMakeFiles/my_zsh_medium.dir/builtins/exit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/builtins/exit.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/exit.c > CMakeFiles/my_zsh_medium.dir/builtins/exit.c.i

CMakeFiles/my_zsh_medium.dir/builtins/exit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/builtins/exit.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/exit.c -o CMakeFiles/my_zsh_medium.dir/builtins/exit.c.s

CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.o: ../builtins/setenv.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/setenv.c

CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/setenv.c > CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.i

CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/setenv.c -o CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.s

CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.o: ../builtins/unsetenv.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/unsetenv.c

CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/unsetenv.c > CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.i

CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/unsetenv.c -o CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.s

CMakeFiles/my_zsh_medium.dir/builtins/cd.c.o: CMakeFiles/my_zsh_medium.dir/flags.make
CMakeFiles/my_zsh_medium.dir/builtins/cd.c.o: ../builtins/cd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/my_zsh_medium.dir/builtins/cd.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_zsh_medium.dir/builtins/cd.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/cd.c

CMakeFiles/my_zsh_medium.dir/builtins/cd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_zsh_medium.dir/builtins/cd.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/cd.c > CMakeFiles/my_zsh_medium.dir/builtins/cd.c.i

CMakeFiles/my_zsh_medium.dir/builtins/cd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_zsh_medium.dir/builtins/cd.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/builtins/cd.c -o CMakeFiles/my_zsh_medium.dir/builtins/cd.c.s

# Object files for target my_zsh_medium
my_zsh_medium_OBJECTS = \
"CMakeFiles/my_zsh_medium.dir/main.c.o" \
"CMakeFiles/my_zsh_medium.dir/my_token.c.o" \
"CMakeFiles/my_zsh_medium.dir/my_lexer.c.o" \
"CMakeFiles/my_zsh_medium.dir/parser.c.o" \
"CMakeFiles/my_zsh_medium.dir/my_readline.c.o" \
"CMakeFiles/my_zsh_medium.dir/utils.c.o" \
"CMakeFiles/my_zsh_medium.dir/my_split.c.o" \
"CMakeFiles/my_zsh_medium.dir/nodes.c.o" \
"CMakeFiles/my_zsh_medium.dir/source.c.o" \
"CMakeFiles/my_zsh_medium.dir/prompt.c.o" \
"CMakeFiles/my_zsh_medium.dir/scanner.c.o" \
"CMakeFiles/my_zsh_medium.dir/executor.c.o" \
"CMakeFiles/my_zsh_medium.dir/symtab.c.o" \
"CMakeFiles/my_zsh_medium.dir/initsh.c.o" \
"CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.o" \
"CMakeFiles/my_zsh_medium.dir/builtins/dump.c.o" \
"CMakeFiles/my_zsh_medium.dir/builtins/exit.c.o" \
"CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.o" \
"CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.o" \
"CMakeFiles/my_zsh_medium.dir/builtins/cd.c.o"

# External object files for target my_zsh_medium
my_zsh_medium_EXTERNAL_OBJECTS =

my_zsh_medium: CMakeFiles/my_zsh_medium.dir/main.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/my_token.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/my_lexer.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/parser.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/my_readline.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/utils.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/my_split.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/nodes.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/source.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/prompt.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/scanner.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/executor.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/symtab.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/initsh.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/builtins/builtins.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/builtins/dump.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/builtins/exit.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/builtins/setenv.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/builtins/unsetenv.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/builtins/cd.c.o
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/build.make
my_zsh_medium: CMakeFiles/my_zsh_medium.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Linking C executable my_zsh_medium"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_zsh_medium.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_zsh_medium.dir/build: my_zsh_medium
.PHONY : CMakeFiles/my_zsh_medium.dir/build

CMakeFiles/my_zsh_medium.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_zsh_medium.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_zsh_medium.dir/clean

CMakeFiles/my_zsh_medium.dir/depend:
	cd /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug /Users/marcel.ghisi/Projects/ELU/S2/my_zsh_medium/cmake-build-debug/CMakeFiles/my_zsh_medium.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_zsh_medium.dir/depend
