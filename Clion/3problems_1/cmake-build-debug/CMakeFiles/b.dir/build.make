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
CMAKE_SOURCE_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/b.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/b.dir/flags.make

CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.o: CMakeFiles/b.dir/flags.make
CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.o: /Users/isajgordeev/Downloads/b.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.o -c /Users/isajgordeev/Downloads/b.cpp

CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Downloads/b.cpp > CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.i

CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Downloads/b.cpp -o CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.s

# Object files for target b
b_OBJECTS = \
"CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.o"

# External object files for target b
b_EXTERNAL_OBJECTS =

b : CMakeFiles/b.dir/Users/isajgordeev/Downloads/b.cpp.o
b : CMakeFiles/b.dir/build.make
b : CMakeFiles/b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable b"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/b.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/b.dir/build: b

.PHONY : CMakeFiles/b.dir/build

CMakeFiles/b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/b.dir/cmake_clean.cmake
.PHONY : CMakeFiles/b.dir/clean

CMakeFiles/b.dir/depend:
	cd /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1 /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1 /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug/CMakeFiles/b.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/b.dir/depend

