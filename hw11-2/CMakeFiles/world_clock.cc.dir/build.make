# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/2019_ITE1015_2019079907/hw11-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/2019_ITE1015_2019079907/hw11-2

# Include any dependencies generated for this target.
include CMakeFiles/world_clock.cc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/world_clock.cc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/world_clock.cc.dir/flags.make

CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o: CMakeFiles/world_clock.cc.dir/flags.make
CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o: world_clock_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/2019_ITE1015_2019079907/hw11-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o -c /home/ubuntu/2019_ITE1015_2019079907/hw11-2/world_clock_main.cc

CMakeFiles/world_clock.cc.dir/world_clock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/world_clock.cc.dir/world_clock_main.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/2019_ITE1015_2019079907/hw11-2/world_clock_main.cc > CMakeFiles/world_clock.cc.dir/world_clock_main.cc.i

CMakeFiles/world_clock.cc.dir/world_clock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/world_clock.cc.dir/world_clock_main.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/2019_ITE1015_2019079907/hw11-2/world_clock_main.cc -o CMakeFiles/world_clock.cc.dir/world_clock_main.cc.s

CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o.requires:

.PHONY : CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o.requires

CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o.provides: CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o.requires
	$(MAKE) -f CMakeFiles/world_clock.cc.dir/build.make CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o.provides.build
.PHONY : CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o.provides

CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o.provides.build: CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o


# Object files for target world_clock.cc
world_clock_cc_OBJECTS = \
"CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o"

# External object files for target world_clock.cc
world_clock_cc_EXTERNAL_OBJECTS =

world_clock.cc: CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o
world_clock.cc: CMakeFiles/world_clock.cc.dir/build.make
world_clock.cc: CMakeFiles/world_clock.cc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/2019_ITE1015_2019079907/hw11-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable world_clock.cc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/world_clock.cc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/world_clock.cc.dir/build: world_clock.cc

.PHONY : CMakeFiles/world_clock.cc.dir/build

CMakeFiles/world_clock.cc.dir/requires: CMakeFiles/world_clock.cc.dir/world_clock_main.cc.o.requires

.PHONY : CMakeFiles/world_clock.cc.dir/requires

CMakeFiles/world_clock.cc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/world_clock.cc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/world_clock.cc.dir/clean

CMakeFiles/world_clock.cc.dir/depend:
	cd /home/ubuntu/2019_ITE1015_2019079907/hw11-2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/2019_ITE1015_2019079907/hw11-2 /home/ubuntu/2019_ITE1015_2019079907/hw11-2 /home/ubuntu/2019_ITE1015_2019079907/hw11-2 /home/ubuntu/2019_ITE1015_2019079907/hw11-2 /home/ubuntu/2019_ITE1015_2019079907/hw11-2/CMakeFiles/world_clock.cc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/world_clock.cc.dir/depend

