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
CMAKE_SOURCE_DIR = "D:\c programs\160a"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\c programs\160a\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/160a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/160a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/160a.dir/flags.make

CMakeFiles/160a.dir/main.cpp.obj: CMakeFiles/160a.dir/flags.make
CMakeFiles/160a.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\c programs\160a\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/160a.dir/main.cpp.obj"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\160a.dir\main.cpp.obj -c "D:\c programs\160a\main.cpp"

CMakeFiles/160a.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/160a.dir/main.cpp.i"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\c programs\160a\main.cpp" > CMakeFiles\160a.dir\main.cpp.i

CMakeFiles/160a.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/160a.dir/main.cpp.s"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\c programs\160a\main.cpp" -o CMakeFiles\160a.dir\main.cpp.s

# Object files for target 160a
160a_OBJECTS = \
"CMakeFiles/160a.dir/main.cpp.obj"

# External object files for target 160a
160a_EXTERNAL_OBJECTS =

160a.exe: CMakeFiles/160a.dir/main.cpp.obj
160a.exe: CMakeFiles/160a.dir/build.make
160a.exe: CMakeFiles/160a.dir/linklibs.rsp
160a.exe: CMakeFiles/160a.dir/objects1.rsp
160a.exe: CMakeFiles/160a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\c programs\160a\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 160a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\160a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/160a.dir/build: 160a.exe

.PHONY : CMakeFiles/160a.dir/build

CMakeFiles/160a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\160a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/160a.dir/clean

CMakeFiles/160a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\c programs\160a" "D:\c programs\160a" "D:\c programs\160a\cmake-build-debug" "D:\c programs\160a\cmake-build-debug" "D:\c programs\160a\cmake-build-debug\CMakeFiles\160a.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/160a.dir/depend

