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
CMAKE_COMMAND = /home/hs/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.5728.100/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/hs/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.5728.100/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hs/CLionProjects/cpp-primer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hs/CLionProjects/cpp-primer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/exercises/4-31.cc.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/exercises/4-31.cc.o: ../exercises/4-31.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hs/CLionProjects/cpp-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/exercises/4-31.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/exercises/4-31.cc.o -c /home/hs/CLionProjects/cpp-primer/exercises/4-31.cc

CMakeFiles/main.dir/exercises/4-31.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/exercises/4-31.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hs/CLionProjects/cpp-primer/exercises/4-31.cc > CMakeFiles/main.dir/exercises/4-31.cc.i

CMakeFiles/main.dir/exercises/4-31.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/exercises/4-31.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hs/CLionProjects/cpp-primer/exercises/4-31.cc -o CMakeFiles/main.dir/exercises/4-31.cc.s

CMakeFiles/main.dir/exercises/4-37.cc.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/exercises/4-37.cc.o: ../exercises/4-37.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hs/CLionProjects/cpp-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/exercises/4-37.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/exercises/4-37.cc.o -c /home/hs/CLionProjects/cpp-primer/exercises/4-37.cc

CMakeFiles/main.dir/exercises/4-37.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/exercises/4-37.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hs/CLionProjects/cpp-primer/exercises/4-37.cc > CMakeFiles/main.dir/exercises/4-37.cc.i

CMakeFiles/main.dir/exercises/4-37.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/exercises/4-37.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hs/CLionProjects/cpp-primer/exercises/4-37.cc -o CMakeFiles/main.dir/exercises/4-37.cc.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/exercises/4-31.cc.o" \
"CMakeFiles/main.dir/exercises/4-37.cc.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/exercises/4-31.cc.o
main: CMakeFiles/main.dir/exercises/4-37.cc.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hs/CLionProjects/cpp-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/hs/CLionProjects/cpp-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hs/CLionProjects/cpp-primer /home/hs/CLionProjects/cpp-primer /home/hs/CLionProjects/cpp-primer/cmake-build-debug /home/hs/CLionProjects/cpp-primer/cmake-build-debug /home/hs/CLionProjects/cpp-primer/cmake-build-debug/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

