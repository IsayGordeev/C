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
CMAKE_SOURCE_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cumtest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cumtest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cumtest.dir/flags.make

CMakeFiles/cumtest.dir/A.cpp.o: CMakeFiles/cumtest.dir/flags.make
CMakeFiles/cumtest.dir/A.cpp.o: ../A.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cumtest.dir/A.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cumtest.dir/A.cpp.o -c /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/A.cpp

CMakeFiles/cumtest.dir/A.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cumtest.dir/A.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/A.cpp > CMakeFiles/cumtest.dir/A.cpp.i

CMakeFiles/cumtest.dir/A.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cumtest.dir/A.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/A.cpp -o CMakeFiles/cumtest.dir/A.cpp.s

# Object files for target cumtest
cumtest_OBJECTS = \
"CMakeFiles/cumtest.dir/A.cpp.o"

# External object files for target cumtest
cumtest_EXTERNAL_OBJECTS =

cumtest: CMakeFiles/cumtest.dir/A.cpp.o
cumtest: CMakeFiles/cumtest.dir/build.make
cumtest: CMakeFiles/cumtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cumtest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cumtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cumtest.dir/build: cumtest

.PHONY : CMakeFiles/cumtest.dir/build

CMakeFiles/cumtest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cumtest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cumtest.dir/clean

CMakeFiles/cumtest.dir/depend:
	cd /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/cumtest/cmake-build-debug/CMakeFiles/cumtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cumtest.dir/depend
