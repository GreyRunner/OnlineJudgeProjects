# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/oliveryang/ClionProjects/BistuOJ/P2840

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/oliveryang/ClionProjects/BistuOJ/P2840/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/P2840.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P2840.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P2840.dir/flags.make

CMakeFiles/P2840.dir/main.cpp.o: CMakeFiles/P2840.dir/flags.make
CMakeFiles/P2840.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oliveryang/ClionProjects/BistuOJ/P2840/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P2840.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/P2840.dir/main.cpp.o -c /Users/oliveryang/ClionProjects/BistuOJ/P2840/main.cpp

CMakeFiles/P2840.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P2840.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oliveryang/ClionProjects/BistuOJ/P2840/main.cpp > CMakeFiles/P2840.dir/main.cpp.i

CMakeFiles/P2840.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P2840.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oliveryang/ClionProjects/BistuOJ/P2840/main.cpp -o CMakeFiles/P2840.dir/main.cpp.s

# Object files for target P2840
P2840_OBJECTS = \
"CMakeFiles/P2840.dir/main.cpp.o"

# External object files for target P2840
P2840_EXTERNAL_OBJECTS =

P2840: CMakeFiles/P2840.dir/main.cpp.o
P2840: CMakeFiles/P2840.dir/build.make
P2840: CMakeFiles/P2840.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/oliveryang/ClionProjects/BistuOJ/P2840/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P2840"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/P2840.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P2840.dir/build: P2840

.PHONY : CMakeFiles/P2840.dir/build

CMakeFiles/P2840.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/P2840.dir/cmake_clean.cmake
.PHONY : CMakeFiles/P2840.dir/clean

CMakeFiles/P2840.dir/depend:
	cd /Users/oliveryang/ClionProjects/BistuOJ/P2840/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/oliveryang/ClionProjects/BistuOJ/P2840 /Users/oliveryang/ClionProjects/BistuOJ/P2840 /Users/oliveryang/ClionProjects/BistuOJ/P2840/cmake-build-debug /Users/oliveryang/ClionProjects/BistuOJ/P2840/cmake-build-debug /Users/oliveryang/ClionProjects/BistuOJ/P2840/cmake-build-debug/CMakeFiles/P2840.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/P2840.dir/depend

