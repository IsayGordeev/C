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
CMAKE_SOURCE_DIR = /Users/isajgordeev/Desktop/C++Coding/Clion/Problems

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/isajgordeev/Desktop/C++Coding/Clion/Problems/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/equation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/equation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/equation.dir/flags.make

CMakeFiles/equation.dir/equation.cpp.o: CMakeFiles/equation.dir/flags.make
CMakeFiles/equation.dir/equation.cpp.o: ../equation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++Coding/Clion/Problems/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/equation.dir/equation.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/equation.dir/equation.cpp.o -c /Users/isajgordeev/Desktop/C++Coding/Clion/Problems/equation.cpp

CMakeFiles/equation.dir/equation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/equation.dir/equation.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Desktop/C++Coding/Clion/Problems/equation.cpp > CMakeFiles/equation.dir/equation.cpp.i

CMakeFiles/equation.dir/equation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/equation.dir/equation.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Desktop/C++Coding/Clion/Problems/equation.cpp -o CMakeFiles/equation.dir/equation.cpp.s

# Object files for target equation
equation_OBJECTS = \
"CMakeFiles/equation.dir/equation.cpp.o"

# External object files for target equation
equation_EXTERNAL_OBJECTS =

equation: CMakeFiles/equation.dir/equation.cpp.o
equation: CMakeFiles/equation.dir/build.make
equation: CMakeFiles/equation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++Coding/Clion/Problems/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable equation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/equation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/equation.dir/build: equation

.PHONY : CMakeFiles/equation.dir/build

CMakeFiles/equation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/equation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/equation.dir/clean

CMakeFiles/equation.dir/depend:
	cd /Users/isajgordeev/Desktop/C++Coding/Clion/Problems/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++Coding/Clion/Problems /Users/isajgordeev/Desktop/C++Coding/Clion/Problems /Users/isajgordeev/Desktop/C++Coding/Clion/Problems/cmake-build-debug /Users/isajgordeev/Desktop/C++Coding/Clion/Problems/cmake-build-debug /Users/isajgordeev/Desktop/C++Coding/Clion/Problems/cmake-build-debug/CMakeFiles/equation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/equation.dir/depend

