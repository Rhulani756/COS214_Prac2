# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Prac2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Prac2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Prac2.dir/flags.make

CMakeFiles/Prac2.dir/main.cpp.o: CMakeFiles/Prac2.dir/flags.make
CMakeFiles/Prac2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Prac2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Prac2.dir/main.cpp.o -c "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/main.cpp"

CMakeFiles/Prac2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Prac2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/main.cpp" > CMakeFiles/Prac2.dir/main.cpp.i

CMakeFiles/Prac2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Prac2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/main.cpp" -o CMakeFiles/Prac2.dir/main.cpp.s

CMakeFiles/Prac2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Prac2.dir/main.cpp.o.requires

CMakeFiles/Prac2.dir/main.cpp.o.provides: CMakeFiles/Prac2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Prac2.dir/build.make CMakeFiles/Prac2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Prac2.dir/main.cpp.o.provides

CMakeFiles/Prac2.dir/main.cpp.o.provides.build: CMakeFiles/Prac2.dir/main.cpp.o


# Object files for target Prac2
Prac2_OBJECTS = \
"CMakeFiles/Prac2.dir/main.cpp.o"

# External object files for target Prac2
Prac2_EXTERNAL_OBJECTS =

Prac2: CMakeFiles/Prac2.dir/main.cpp.o
Prac2: CMakeFiles/Prac2.dir/build.make
Prac2: CMakeFiles/Prac2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Prac2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Prac2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Prac2.dir/build: Prac2

.PHONY : CMakeFiles/Prac2.dir/build

CMakeFiles/Prac2.dir/requires: CMakeFiles/Prac2.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Prac2.dir/requires

CMakeFiles/Prac2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Prac2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Prac2.dir/clean

CMakeFiles/Prac2.dir/depend:
	cd "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2" "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2" "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/cmake-build-debug" "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/cmake-build-debug" "/mnt/c/Users/Rhulani Matiane/Desktop/Rhulani/Computer Science Resources/Semester 2/COS214/Practicals/Prac2/cmake-build-debug/CMakeFiles/Prac2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Prac2.dir/depend

