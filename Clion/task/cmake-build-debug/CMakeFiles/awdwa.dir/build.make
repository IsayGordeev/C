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
CMAKE_SOURCE_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/task

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/task/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/awdwa.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/awdwa.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/awdwa.dir/flags.make

CMakeFiles/awdwa.dir/awdwa.cpp.o: CMakeFiles/awdwa.dir/flags.make
CMakeFiles/awdwa.dir/awdwa.cpp.o: ../awdwa.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/task/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/awdwa.dir/awdwa.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/awdwa.dir/awdwa.cpp.o -c /Users/isajgordeev/Desktop/C++_Coding/Clion/task/awdwa.cpp

CMakeFiles/awdwa.dir/awdwa.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/awdwa.dir/awdwa.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Desktop/C++_Coding/Clion/task/awdwa.cpp > CMakeFiles/awdwa.dir/awdwa.cpp.i

CMakeFiles/awdwa.dir/awdwa.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/awdwa.dir/awdwa.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Desktop/C++_Coding/Clion/task/awdwa.cpp -o CMakeFiles/awdwa.dir/awdwa.cpp.s

# Object files for target awdwa
awdwa_OBJECTS = \
"CMakeFiles/awdwa.dir/awdwa.cpp.o"

# External object files for target awdwa
awdwa_EXTERNAL_OBJECTS =

awdwa: CMakeFiles/awdwa.dir/awdwa.cpp.o
awdwa: CMakeFiles/awdwa.dir/build.make
awdwa: CMakeFiles/awdwa.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/task/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable awdwa"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/awdwa.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/awdwa.dir/build: awdwa

.PHONY : CMakeFiles/awdwa.dir/build

CMakeFiles/awdwa.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/awdwa.dir/cmake_clean.cmake
.PHONY : CMakeFiles/awdwa.dir/clean

CMakeFiles/awdwa.dir/depend:
	cd /Users/isajgordeev/Desktop/C++_Coding/Clion/task/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++_Coding/Clion/task /Users/isajgordeev/Desktop/C++_Coding/Clion/task /Users/isajgordeev/Desktop/C++_Coding/Clion/task/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/task/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/task/cmake-build-debug/CMakeFiles/awdwa.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/awdwa.dir/depend

