# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/uavteam2/QUT_EGH450/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/uavteam2/QUT_EGH450/build

# Include any dependencies generated for this target.
include qutas_lab_450/CMakeFiles/area_map.dir/depend.make

# Include the progress variables for this target.
include qutas_lab_450/CMakeFiles/area_map.dir/progress.make

# Include the compile flags for this target's objects.
include qutas_lab_450/CMakeFiles/area_map.dir/flags.make

qutas_lab_450/CMakeFiles/area_map.dir/src/area_map/area_map.cpp.o: qutas_lab_450/CMakeFiles/area_map.dir/flags.make
qutas_lab_450/CMakeFiles/area_map.dir/src/area_map/area_map.cpp.o: /home/uavteam2/QUT_EGH450/src/qutas_lab_450/src/area_map/area_map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uavteam2/QUT_EGH450/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object qutas_lab_450/CMakeFiles/area_map.dir/src/area_map/area_map.cpp.o"
	cd /home/uavteam2/QUT_EGH450/build/qutas_lab_450 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/area_map.dir/src/area_map/area_map.cpp.o -c /home/uavteam2/QUT_EGH450/src/qutas_lab_450/src/area_map/area_map.cpp

qutas_lab_450/CMakeFiles/area_map.dir/src/area_map/area_map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/area_map.dir/src/area_map/area_map.cpp.i"
	cd /home/uavteam2/QUT_EGH450/build/qutas_lab_450 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uavteam2/QUT_EGH450/src/qutas_lab_450/src/area_map/area_map.cpp > CMakeFiles/area_map.dir/src/area_map/area_map.cpp.i

qutas_lab_450/CMakeFiles/area_map.dir/src/area_map/area_map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/area_map.dir/src/area_map/area_map.cpp.s"
	cd /home/uavteam2/QUT_EGH450/build/qutas_lab_450 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uavteam2/QUT_EGH450/src/qutas_lab_450/src/area_map/area_map.cpp -o CMakeFiles/area_map.dir/src/area_map/area_map.cpp.s

# Object files for target area_map
area_map_OBJECTS = \
"CMakeFiles/area_map.dir/src/area_map/area_map.cpp.o"

# External object files for target area_map
area_map_EXTERNAL_OBJECTS =

/home/uavteam2/QUT_EGH450/devel/lib/libarea_map.so: qutas_lab_450/CMakeFiles/area_map.dir/src/area_map/area_map.cpp.o
/home/uavteam2/QUT_EGH450/devel/lib/libarea_map.so: qutas_lab_450/CMakeFiles/area_map.dir/build.make
/home/uavteam2/QUT_EGH450/devel/lib/libarea_map.so: qutas_lab_450/CMakeFiles/area_map.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uavteam2/QUT_EGH450/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/uavteam2/QUT_EGH450/devel/lib/libarea_map.so"
	cd /home/uavteam2/QUT_EGH450/build/qutas_lab_450 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/area_map.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
qutas_lab_450/CMakeFiles/area_map.dir/build: /home/uavteam2/QUT_EGH450/devel/lib/libarea_map.so

.PHONY : qutas_lab_450/CMakeFiles/area_map.dir/build

qutas_lab_450/CMakeFiles/area_map.dir/clean:
	cd /home/uavteam2/QUT_EGH450/build/qutas_lab_450 && $(CMAKE_COMMAND) -P CMakeFiles/area_map.dir/cmake_clean.cmake
.PHONY : qutas_lab_450/CMakeFiles/area_map.dir/clean

qutas_lab_450/CMakeFiles/area_map.dir/depend:
	cd /home/uavteam2/QUT_EGH450/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uavteam2/QUT_EGH450/src /home/uavteam2/QUT_EGH450/src/qutas_lab_450 /home/uavteam2/QUT_EGH450/build /home/uavteam2/QUT_EGH450/build/qutas_lab_450 /home/uavteam2/QUT_EGH450/build/qutas_lab_450/CMakeFiles/area_map.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : qutas_lab_450/CMakeFiles/area_map.dir/depend
