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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac/Documents/GitHub/AlgorithmLearn/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug

# Include any dependencies generated for this target.
include day01/CMakeFiles/day01.dir/depend.make

# Include the progress variables for this target.
include day01/CMakeFiles/day01.dir/progress.make

# Include the compile flags for this target's objects.
include day01/CMakeFiles/day01.dir/flags.make

day01/CMakeFiles/day01.dir/main.cpp.o: day01/CMakeFiles/day01.dir/flags.make
day01/CMakeFiles/day01.dir/main.cpp.o: ../day01/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object day01/CMakeFiles/day01.dir/main.cpp.o"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/day01.dir/main.cpp.o -c /Users/mac/Documents/GitHub/AlgorithmLearn/src/day01/main.cpp

day01/CMakeFiles/day01.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/day01.dir/main.cpp.i"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/GitHub/AlgorithmLearn/src/day01/main.cpp > CMakeFiles/day01.dir/main.cpp.i

day01/CMakeFiles/day01.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/day01.dir/main.cpp.s"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/GitHub/AlgorithmLearn/src/day01/main.cpp -o CMakeFiles/day01.dir/main.cpp.s

day01/CMakeFiles/day01.dir/Student.cpp.o: day01/CMakeFiles/day01.dir/flags.make
day01/CMakeFiles/day01.dir/Student.cpp.o: ../day01/Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object day01/CMakeFiles/day01.dir/Student.cpp.o"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/day01.dir/Student.cpp.o -c /Users/mac/Documents/GitHub/AlgorithmLearn/src/day01/Student.cpp

day01/CMakeFiles/day01.dir/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/day01.dir/Student.cpp.i"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/GitHub/AlgorithmLearn/src/day01/Student.cpp > CMakeFiles/day01.dir/Student.cpp.i

day01/CMakeFiles/day01.dir/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/day01.dir/Student.cpp.s"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/GitHub/AlgorithmLearn/src/day01/Student.cpp -o CMakeFiles/day01.dir/Student.cpp.s

# Object files for target day01
day01_OBJECTS = \
"CMakeFiles/day01.dir/main.cpp.o" \
"CMakeFiles/day01.dir/Student.cpp.o"

# External object files for target day01
day01_EXTERNAL_OBJECTS =

day01/day01: day01/CMakeFiles/day01.dir/main.cpp.o
day01/day01: day01/CMakeFiles/day01.dir/Student.cpp.o
day01/day01: day01/CMakeFiles/day01.dir/build.make
day01/day01: day01/CMakeFiles/day01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable day01"
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/day01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
day01/CMakeFiles/day01.dir/build: day01/day01

.PHONY : day01/CMakeFiles/day01.dir/build

day01/CMakeFiles/day01.dir/clean:
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01 && $(CMAKE_COMMAND) -P CMakeFiles/day01.dir/cmake_clean.cmake
.PHONY : day01/CMakeFiles/day01.dir/clean

day01/CMakeFiles/day01.dir/depend:
	cd /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Documents/GitHub/AlgorithmLearn/src /Users/mac/Documents/GitHub/AlgorithmLearn/src/day01 /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01 /Users/mac/Documents/GitHub/AlgorithmLearn/src/cmake-build-debug/day01/CMakeFiles/day01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : day01/CMakeFiles/day01.dir/depend

