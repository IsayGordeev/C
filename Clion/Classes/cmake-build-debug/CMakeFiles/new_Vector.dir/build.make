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
include CMakeFiles/new_Vector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/new_Vector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/new_Vector.dir/flags.make

CMakeFiles/new_Vector.dir/new_Vector.cpp.o: CMakeFiles/new_Vector.dir/flags.make
CMakeFiles/new_Vector.dir/new_Vector.cpp.o: ../new_Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/new_Vector.dir/new_Vector.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/new_Vector.dir/new_Vector.cpp.o -c /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/new_Vector.cpp

CMakeFiles/new_Vector.dir/new_Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_Vector.dir/new_Vector.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/new_Vector.cpp > CMakeFiles/new_Vector.dir/new_Vector.cpp.i

CMakeFiles/new_Vector.dir/new_Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_Vector.dir/new_Vector.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/new_Vector.cpp -o CMakeFiles/new_Vector.dir/new_Vector.cpp.s

# Object files for target new_Vector
new_Vector_OBJECTS = \
"CMakeFiles/new_Vector.dir/new_Vector.cpp.o"

# External object files for target new_Vector
new_Vector_EXTERNAL_OBJECTS =

new_Vector: CMakeFiles/new_Vector.dir/new_Vector.cpp.o
new_Vector: CMakeFiles/new_Vector.dir/build.make
new_Vector: CMakeFiles/new_Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable new_Vector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/new_Vector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/new_Vector.dir/build: new_Vector

.PHONY : CMakeFiles/new_Vector.dir/build

CMakeFiles/new_Vector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/new_Vector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/new_Vector.dir/clean

CMakeFiles/new_Vector.dir/depend:
	cd /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/Classes/cmake-build-debug/CMakeFiles/new_Vector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/new_Vector.dir/depend

