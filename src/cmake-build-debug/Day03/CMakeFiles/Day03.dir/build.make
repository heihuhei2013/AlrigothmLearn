# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "/Users/mac/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/mac/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac/Documents/GitHub/AlgorithmLearn/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug

# Include any dependencies generated for this target.
include Day03/CMakeFiles/Day03.dir/depend.make

# Include the progress variables for this target.
include Day03/CMakeFiles/Day03.dir/progress.make

# Include the compile flags for this target's objects.
include Day03/CMakeFiles/Day03.dir/flags.make

Day03/CMakeFiles/Day03.dir/main.cpp.o: Day03/CMakeFiles/Day03.dir/flags.make
Day03/CMakeFiles/Day03.dir/main.cpp.o: ../Day03/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Day03/CMakeFiles/Day03.dir/main.cpp.o"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/Day03 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Day03.dir/main.cpp.o -c /Users/mac/Documents/GitHub/AlgorithmLearn/src/Day03/main.cpp

Day03/CMakeFiles/Day03.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day03.dir/main.cpp.i"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/Day03 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/GitHub/AlgorithmLearn/src/Day03/main.cpp > CMakeFiles/Day03.dir/main.cpp.i

Day03/CMakeFiles/Day03.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day03.dir/main.cpp.s"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/Day03 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/GitHub/AlgorithmLearn/src/Day03/main.cpp -o CMakeFiles/Day03.dir/main.cpp.s

# Object files for target Day03
Day03_OBJECTS = \
"CMakeFiles/Day03.dir/main.cpp.o"

# External object files for target Day03
Day03_EXTERNAL_OBJECTS =

Day03/Day03: Day03/CMakeFiles/Day03.dir/main.cpp.o
Day03/Day03: Day03/CMakeFiles/Day03.dir/build.make
Day03/Day03: Day03/CMakeFiles/Day03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Day03"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/Day03 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Day03.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Day03/CMakeFiles/Day03.dir/build: Day03/Day03

.PHONY : Day03/CMakeFiles/Day03.dir/build

Day03/CMakeFiles/Day03.dir/clean:
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/Day03 && $(CMAKE_COMMAND) -P CMakeFiles/Day03.dir/cmake_clean.cmake
.PHONY : Day03/CMakeFiles/Day03.dir/clean

Day03/CMakeFiles/Day03.dir/depend:
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Documents/GitHub/AlgorithmLearn/src /Users/mac/Documents/GitHub/AlgorithmLearn/src/Day03 /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/Day03 /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/Day03/CMakeFiles/Day03.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Day03/CMakeFiles/Day03.dir/depend

