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
include CMakeFiles/deyksr_algorythm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/deyksr_algorythm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/deyksr_algorythm.dir/flags.make

CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.o: CMakeFiles/deyksr_algorythm.dir/flags.make
CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.o: ../deyksr_algorythm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.o -c /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/deyksr_algorythm.cpp

CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/deyksr_algorythm.cpp > CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.i

CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/deyksr_algorythm.cpp -o CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.s

# Object files for target deyksr_algorythm
deyksr_algorythm_OBJECTS = \
"CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.o"

# External object files for target deyksr_algorythm
deyksr_algorythm_EXTERNAL_OBJECTS =

deyksr_algorythm: CMakeFiles/deyksr_algorythm.dir/deyksr_algorythm.cpp.o
deyksr_algorythm: CMakeFiles/deyksr_algorythm.dir/build.make
deyksr_algorythm: CMakeFiles/deyksr_algorythm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable deyksr_algorythm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/deyksr_algorythm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/deyksr_algorythm.dir/build: deyksr_algorythm

.PHONY : CMakeFiles/deyksr_algorythm.dir/build

CMakeFiles/deyksr_algorythm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/deyksr_algorythm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/deyksr_algorythm.dir/clean

CMakeFiles/deyksr_algorythm.dir/depend:
	cd /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1 /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1 /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/3problems_1/cmake-build-debug/CMakeFiles/deyksr_algorythm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/deyksr_algorythm.dir/depend

