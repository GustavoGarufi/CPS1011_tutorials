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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/q3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/q3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/q3.dir/flags.make

CMakeFiles/q3.dir/q3.c.obj: CMakeFiles/q3.dir/flags.make
CMakeFiles/q3.dir/q3.c.obj: ../q3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/q3.dir/q3.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\q3.dir\q3.c.obj   -c "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro\q3.c"

CMakeFiles/q3.dir/q3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/q3.dir/q3.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro\q3.c" > CMakeFiles\q3.dir\q3.c.i

CMakeFiles/q3.dir/q3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/q3.dir/q3.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro\q3.c" -o CMakeFiles\q3.dir\q3.c.s

# Object files for target q3
q3_OBJECTS = \
"CMakeFiles/q3.dir/q3.c.obj"

# External object files for target q3
q3_EXTERNAL_OBJECTS =

q3.exe: CMakeFiles/q3.dir/q3.c.obj
q3.exe: CMakeFiles/q3.dir/build.make
q3.exe: CMakeFiles/q3.dir/linklibs.rsp
q3.exe: CMakeFiles/q3.dir/objects1.rsp
q3.exe: CMakeFiles/q3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable q3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\q3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/q3.dir/build: q3.exe

.PHONY : CMakeFiles/q3.dir/build

CMakeFiles/q3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\q3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/q3.dir/clean

CMakeFiles/q3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro" "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro" "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro\cmake-build-debug" "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro\cmake-build-debug" "C:\Users\gusga\OneDrive\Documentos\university\Coding Projects\CPS1011_tutorials\intro\cmake-build-debug\CMakeFiles\q3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/q3.dir/depend

