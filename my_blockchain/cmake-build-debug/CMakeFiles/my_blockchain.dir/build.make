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
CMAKE_SOURCE_DIR = /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/my_blockchain.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/my_blockchain.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_blockchain.dir/flags.make

CMakeFiles/my_blockchain.dir/main.c.o: CMakeFiles/my_blockchain.dir/flags.make
CMakeFiles/my_blockchain.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/my_blockchain.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_blockchain.dir/main.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/main.c

CMakeFiles/my_blockchain.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_blockchain.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/main.c > CMakeFiles/my_blockchain.dir/main.c.i

CMakeFiles/my_blockchain.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_blockchain.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/main.c -o CMakeFiles/my_blockchain.dir/main.c.s

CMakeFiles/my_blockchain.dir/run_functions.c.o: CMakeFiles/my_blockchain.dir/flags.make
CMakeFiles/my_blockchain.dir/run_functions.c.o: ../run_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/my_blockchain.dir/run_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_blockchain.dir/run_functions.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/run_functions.c

CMakeFiles/my_blockchain.dir/run_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_blockchain.dir/run_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/run_functions.c > CMakeFiles/my_blockchain.dir/run_functions.c.i

CMakeFiles/my_blockchain.dir/run_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_blockchain.dir/run_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/run_functions.c -o CMakeFiles/my_blockchain.dir/run_functions.c.s

CMakeFiles/my_blockchain.dir/cmd_functions.c.o: CMakeFiles/my_blockchain.dir/flags.make
CMakeFiles/my_blockchain.dir/cmd_functions.c.o: ../cmd_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/my_blockchain.dir/cmd_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_blockchain.dir/cmd_functions.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmd_functions.c

CMakeFiles/my_blockchain.dir/cmd_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_blockchain.dir/cmd_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmd_functions.c > CMakeFiles/my_blockchain.dir/cmd_functions.c.i

CMakeFiles/my_blockchain.dir/cmd_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_blockchain.dir/cmd_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmd_functions.c -o CMakeFiles/my_blockchain.dir/cmd_functions.c.s

CMakeFiles/my_blockchain.dir/my_own_functions.c.o: CMakeFiles/my_blockchain.dir/flags.make
CMakeFiles/my_blockchain.dir/my_own_functions.c.o: ../my_own_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/my_blockchain.dir/my_own_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/my_blockchain.dir/my_own_functions.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/my_own_functions.c

CMakeFiles/my_blockchain.dir/my_own_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_blockchain.dir/my_own_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/my_own_functions.c > CMakeFiles/my_blockchain.dir/my_own_functions.c.i

CMakeFiles/my_blockchain.dir/my_own_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_blockchain.dir/my_own_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/my_own_functions.c -o CMakeFiles/my_blockchain.dir/my_own_functions.c.s

# Object files for target my_blockchain
my_blockchain_OBJECTS = \
"CMakeFiles/my_blockchain.dir/main.c.o" \
"CMakeFiles/my_blockchain.dir/run_functions.c.o" \
"CMakeFiles/my_blockchain.dir/cmd_functions.c.o" \
"CMakeFiles/my_blockchain.dir/my_own_functions.c.o"

# External object files for target my_blockchain
my_blockchain_EXTERNAL_OBJECTS =

my_blockchain: CMakeFiles/my_blockchain.dir/main.c.o
my_blockchain: CMakeFiles/my_blockchain.dir/run_functions.c.o
my_blockchain: CMakeFiles/my_blockchain.dir/cmd_functions.c.o
my_blockchain: CMakeFiles/my_blockchain.dir/my_own_functions.c.o
my_blockchain: CMakeFiles/my_blockchain.dir/build.make
my_blockchain: CMakeFiles/my_blockchain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable my_blockchain"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_blockchain.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_blockchain.dir/build: my_blockchain
.PHONY : CMakeFiles/my_blockchain.dir/build

CMakeFiles/my_blockchain.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_blockchain.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_blockchain.dir/clean

CMakeFiles/my_blockchain.dir/depend:
	cd /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug /Users/marcel.ghisi/Projects/ELU/S2/my_blockchain/cmake-build-debug/CMakeFiles/my_blockchain.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_blockchain.dir/depend
