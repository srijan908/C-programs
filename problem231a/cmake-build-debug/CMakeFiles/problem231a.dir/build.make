# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\c programs\problem231a"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\c programs\problem231a\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/problem231a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/problem231a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/problem231a.dir/flags.make

CMakeFiles/problem231a.dir/main.cpp.obj: CMakeFiles/problem231a.dir/flags.make
CMakeFiles/problem231a.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\c programs\problem231a\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/problem231a.dir/main.cpp.obj"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\problem231a.dir\main.cpp.obj -c "D:\c programs\problem231a\main.cpp"

CMakeFiles/problem231a.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/problem231a.dir/main.cpp.i"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\c programs\problem231a\main.cpp" > CMakeFiles\problem231a.dir\main.cpp.i

CMakeFiles/problem231a.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/problem231a.dir/main.cpp.s"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\c programs\problem231a\main.cpp" -o CMakeFiles\problem231a.dir\main.cpp.s

# Object files for target problem231a
problem231a_OBJECTS = \
"CMakeFiles/problem231a.dir/main.cpp.obj"

# External object files for target problem231a
problem231a_EXTERNAL_OBJECTS =

problem231a.exe: CMakeFiles/problem231a.dir/main.cpp.obj
problem231a.exe: CMakeFiles/problem231a.dir/build.make
problem231a.exe: CMakeFiles/problem231a.dir/linklibs.rsp
problem231a.exe: CMakeFiles/problem231a.dir/objects1.rsp
problem231a.exe: CMakeFiles/problem231a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\c programs\problem231a\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable problem231a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\problem231a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/problem231a.dir/build: problem231a.exe

.PHONY : CMakeFiles/problem231a.dir/build

CMakeFiles/problem231a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\problem231a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/problem231a.dir/clean

CMakeFiles/problem231a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\c programs\problem231a" "D:\c programs\problem231a" "D:\c programs\problem231a\cmake-build-debug" "D:\c programs\problem231a\cmake-build-debug" "D:\c programs\problem231a\cmake-build-debug\CMakeFiles\problem231a.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/problem231a.dir/depend
