# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vector-s-main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vector-s-main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vector-s-main.dir/flags.make

CMakeFiles/vector-s-main.dir/vector-s-main.cpp.o: CMakeFiles/vector-s-main.dir/flags.make
CMakeFiles/vector-s-main.dir/vector-s-main.cpp.o: ../vector-s-main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vector-s-main.dir/vector-s-main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vector-s-main.dir/vector-s-main.cpp.o -c /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/vector-s-main.cpp

CMakeFiles/vector-s-main.dir/vector-s-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector-s-main.dir/vector-s-main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/vector-s-main.cpp > CMakeFiles/vector-s-main.dir/vector-s-main.cpp.i

CMakeFiles/vector-s-main.dir/vector-s-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector-s-main.dir/vector-s-main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/vector-s-main.cpp -o CMakeFiles/vector-s-main.dir/vector-s-main.cpp.s

# Object files for target vector-s-main
vector__s__main_OBJECTS = \
"CMakeFiles/vector-s-main.dir/vector-s-main.cpp.o"

# External object files for target vector-s-main
vector__s__main_EXTERNAL_OBJECTS =

vector-s-main: CMakeFiles/vector-s-main.dir/vector-s-main.cpp.o
vector-s-main: CMakeFiles/vector-s-main.dir/build.make
vector-s-main: CMakeFiles/vector-s-main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vector-s-main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector-s-main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vector-s-main.dir/build: vector-s-main

.PHONY : CMakeFiles/vector-s-main.dir/build

CMakeFiles/vector-s-main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vector-s-main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vector-s-main.dir/clean

CMakeFiles/vector-s-main.dir/depend:
	cd /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug/CMakeFiles/vector-s-main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vector-s-main.dir/depend

