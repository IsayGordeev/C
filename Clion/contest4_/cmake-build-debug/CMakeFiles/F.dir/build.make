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
CMAKE_SOURCE_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/F.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/F.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/F.dir/flags.make

CMakeFiles/F.dir/F.cpp.o: CMakeFiles/F.dir/flags.make
CMakeFiles/F.dir/F.cpp.o: ../F.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/F.dir/F.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/F.dir/F.cpp.o -c /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/F.cpp

CMakeFiles/F.dir/F.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/F.dir/F.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/F.cpp > CMakeFiles/F.dir/F.cpp.i

CMakeFiles/F.dir/F.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/F.dir/F.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/F.cpp -o CMakeFiles/F.dir/F.cpp.s

# Object files for target F
F_OBJECTS = \
"CMakeFiles/F.dir/F.cpp.o"

# External object files for target F
F_EXTERNAL_OBJECTS =

F : CMakeFiles/F.dir/F.cpp.o
F : CMakeFiles/F.dir/build.make
F : CMakeFiles/F.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable F"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/F.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/F.dir/build: F

.PHONY : CMakeFiles/F.dir/build

CMakeFiles/F.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/F.dir/cmake_clean.cmake
.PHONY : CMakeFiles/F.dir/clean

CMakeFiles/F.dir/depend:
	cd /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_ /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_ /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/contest4_/cmake-build-debug/CMakeFiles/F.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/F.dir/depend

