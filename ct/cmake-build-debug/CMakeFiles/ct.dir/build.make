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
CMAKE_SOURCE_DIR = /Users/marcel.ghisi/Projects/ELU/S2/ct

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marcel.ghisi/Projects/ELU/S2/ct/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ct.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ct.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ct.dir/flags.make

CMakeFiles/ct.dir/main.c.o: CMakeFiles/ct.dir/flags.make
CMakeFiles/ct.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/ct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ct.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ct.dir/main.c.o -c /Users/marcel.ghisi/Projects/ELU/S2/ct/main.c

CMakeFiles/ct.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ct.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marcel.ghisi/Projects/ELU/S2/ct/main.c > CMakeFiles/ct.dir/main.c.i

CMakeFiles/ct.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ct.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marcel.ghisi/Projects/ELU/S2/ct/main.c -o CMakeFiles/ct.dir/main.c.s

# Object files for target ct
ct_OBJECTS = \
"CMakeFiles/ct.dir/main.c.o"

# External object files for target ct
ct_EXTERNAL_OBJECTS =

ct: CMakeFiles/ct.dir/main.c.o
ct: CMakeFiles/ct.dir/build.make
ct: CMakeFiles/ct.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/marcel.ghisi/Projects/ELU/S2/ct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ct"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ct.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ct.dir/build: ct
.PHONY : CMakeFiles/ct.dir/build

CMakeFiles/ct.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ct.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ct.dir/clean

CMakeFiles/ct.dir/depend:
	cd /Users/marcel.ghisi/Projects/ELU/S2/ct/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marcel.ghisi/Projects/ELU/S2/ct /Users/marcel.ghisi/Projects/ELU/S2/ct /Users/marcel.ghisi/Projects/ELU/S2/ct/cmake-build-debug /Users/marcel.ghisi/Projects/ELU/S2/ct/cmake-build-debug /Users/marcel.ghisi/Projects/ELU/S2/ct/cmake-build-debug/CMakeFiles/ct.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ct.dir/depend

