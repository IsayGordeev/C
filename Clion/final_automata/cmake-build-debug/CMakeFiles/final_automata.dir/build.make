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
CMAKE_SOURCE_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/final_automata.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/final_automata.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/final_automata.dir/flags.make

CMakeFiles/final_automata.dir/fin_auto.cpp.o: CMakeFiles/final_automata.dir/flags.make
CMakeFiles/final_automata.dir/fin_auto.cpp.o: ../fin_auto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/final_automata.dir/fin_auto.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/final_automata.dir/fin_auto.cpp.o -c /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/fin_auto.cpp

CMakeFiles/final_automata.dir/fin_auto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/final_automata.dir/fin_auto.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/fin_auto.cpp > CMakeFiles/final_automata.dir/fin_auto.cpp.i

CMakeFiles/final_automata.dir/fin_auto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/final_automata.dir/fin_auto.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/fin_auto.cpp -o CMakeFiles/final_automata.dir/fin_auto.cpp.s

# Object files for target final_automata
final_automata_OBJECTS = \
"CMakeFiles/final_automata.dir/fin_auto.cpp.o"

# External object files for target final_automata
final_automata_EXTERNAL_OBJECTS =

final_automata: CMakeFiles/final_automata.dir/fin_auto.cpp.o
final_automata: CMakeFiles/final_automata.dir/build.make
final_automata: CMakeFiles/final_automata.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable final_automata"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/final_automata.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/final_automata.dir/build: final_automata

.PHONY : CMakeFiles/final_automata.dir/build

CMakeFiles/final_automata.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/final_automata.dir/cmake_clean.cmake
.PHONY : CMakeFiles/final_automata.dir/clean

CMakeFiles/final_automata.dir/depend:
	cd /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/cmake-build-debug /Users/isajgordeev/Desktop/C++_Coding/Clion/final_automata/cmake-build-debug/CMakeFiles/final_automata.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/final_automata.dir/depend

