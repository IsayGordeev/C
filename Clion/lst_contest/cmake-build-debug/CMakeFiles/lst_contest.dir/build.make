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
CMAKE_SOURCE_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lst_contest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lst_contest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lst_contest.dir/flags.make

CMakeFiles/lst_contest.dir/A.cpp.o: CMakeFiles/lst_contest.dir/flags.make
CMakeFiles/lst_contest.dir/A.cpp.o: ../A.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lst_contest.dir/A.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lst_contest.dir/A.cpp.o -c /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/A.cpp

CMakeFiles/lst_contest.dir/A.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lst_contest.dir/A.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/A.cpp > CMakeFiles/lst_contest.dir/A.cpp.i

CMakeFiles/lst_contest.dir/A.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lst_contest.dir/A.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/A.cpp -o CMakeFiles/lst_contest.dir/A.cpp.s

# Object files for target lst_contest
lst_contest_OBJECTS = \
"CMakeFiles/lst_contest.dir/A.cpp.o"

# External object files for target lst_contest
lst_contest_EXTERNAL_OBJECTS =

lst_contest: CMakeFiles/lst_contest.dir/A.cpp.o
lst_contest: CMakeFiles/lst_contest.dir/build.make
lst_contest: CMakeFiles/lst_contest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lst_contest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lst_contest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lst_contest.dir/build: lst_contest

.PHONY : CMakeFiles/lst_contest.dir/build

CMakeFiles/lst_contest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lst_contest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lst_contest.dir/clean

CMakeFiles/lst_contest.dir/depend:
	cd /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/lst_contest/cmake-build-debug/CMakeFiles/lst_contest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lst_contest.dir/depend
