# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\losto\myrepo\lab5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\losto\myrepo\lab5\build

# Include any dependencies generated for this target.
include CMakeFiles/lab3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab3.dir/flags.make

CMakeFiles/lab3.dir/main.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/main.cpp.obj: C:/Users/losto/myrepo/lab5/main.cpp
CMakeFiles/lab3.dir/main.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab3.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/main.cpp.obj -MF CMakeFiles\lab3.dir\main.cpp.obj.d -o CMakeFiles\lab3.dir\main.cpp.obj -c C:\Users\losto\myrepo\lab5\main.cpp

CMakeFiles/lab3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\main.cpp > CMakeFiles\lab3.dir\main.cpp.i

CMakeFiles/lab3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\main.cpp -o CMakeFiles\lab3.dir\main.cpp.s

CMakeFiles/lab3.dir/player.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/player.cpp.obj: C:/Users/losto/myrepo/lab5/player.cpp
CMakeFiles/lab3.dir/player.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab3.dir/player.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/player.cpp.obj -MF CMakeFiles\lab3.dir\player.cpp.obj.d -o CMakeFiles\lab3.dir\player.cpp.obj -c C:\Users\losto\myrepo\lab5\player.cpp

CMakeFiles/lab3.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/player.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\player.cpp > CMakeFiles\lab3.dir\player.cpp.i

CMakeFiles/lab3.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/player.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\player.cpp -o CMakeFiles\lab3.dir\player.cpp.s

CMakeFiles/lab3.dir/playercontroller.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/playercontroller.cpp.obj: C:/Users/losto/myrepo/lab5/playercontroller.cpp
CMakeFiles/lab3.dir/playercontroller.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab3.dir/playercontroller.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/playercontroller.cpp.obj -MF CMakeFiles\lab3.dir\playercontroller.cpp.obj.d -o CMakeFiles\lab3.dir\playercontroller.cpp.obj -c C:\Users\losto\myrepo\lab5\playercontroller.cpp

CMakeFiles/lab3.dir/playercontroller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/playercontroller.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\playercontroller.cpp > CMakeFiles\lab3.dir\playercontroller.cpp.i

CMakeFiles/lab3.dir/playercontroller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/playercontroller.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\playercontroller.cpp -o CMakeFiles\lab3.dir\playercontroller.cpp.s

CMakeFiles/lab3.dir/Field/cell.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/Field/cell.cpp.obj: C:/Users/losto/myrepo/lab5/Field/cell.cpp
CMakeFiles/lab3.dir/Field/cell.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab3.dir/Field/cell.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/Field/cell.cpp.obj -MF CMakeFiles\lab3.dir\Field\cell.cpp.obj.d -o CMakeFiles\lab3.dir\Field\cell.cpp.obj -c C:\Users\losto\myrepo\lab5\Field\cell.cpp

CMakeFiles/lab3.dir/Field/cell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/Field/cell.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\Field\cell.cpp > CMakeFiles\lab3.dir\Field\cell.cpp.i

CMakeFiles/lab3.dir/Field/cell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/Field/cell.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\Field\cell.cpp -o CMakeFiles\lab3.dir\Field\cell.cpp.s

CMakeFiles/lab3.dir/Field/gamefield.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/Field/gamefield.cpp.obj: C:/Users/losto/myrepo/lab5/Field/gamefield.cpp
CMakeFiles/lab3.dir/Field/gamefield.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lab3.dir/Field/gamefield.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/Field/gamefield.cpp.obj -MF CMakeFiles\lab3.dir\Field\gamefield.cpp.obj.d -o CMakeFiles\lab3.dir\Field\gamefield.cpp.obj -c C:\Users\losto\myrepo\lab5\Field\gamefield.cpp

CMakeFiles/lab3.dir/Field/gamefield.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/Field/gamefield.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\Field\gamefield.cpp > CMakeFiles\lab3.dir\Field\gamefield.cpp.i

CMakeFiles/lab3.dir/Field/gamefield.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/Field/gamefield.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\Field\gamefield.cpp -o CMakeFiles\lab3.dir\Field\gamefield.cpp.s

CMakeFiles/lab3.dir/events/HealEvent.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/events/HealEvent.cpp.obj: C:/Users/losto/myrepo/lab5/events/HealEvent.cpp
CMakeFiles/lab3.dir/events/HealEvent.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/lab3.dir/events/HealEvent.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/events/HealEvent.cpp.obj -MF CMakeFiles\lab3.dir\events\HealEvent.cpp.obj.d -o CMakeFiles\lab3.dir\events\HealEvent.cpp.obj -c C:\Users\losto\myrepo\lab5\events\HealEvent.cpp

CMakeFiles/lab3.dir/events/HealEvent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/events/HealEvent.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\events\HealEvent.cpp > CMakeFiles\lab3.dir\events\HealEvent.cpp.i

CMakeFiles/lab3.dir/events/HealEvent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/events/HealEvent.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\events\HealEvent.cpp -o CMakeFiles\lab3.dir\events\HealEvent.cpp.s

CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.obj: C:/Users/losto/myrepo/lab5/Field/FieldBuilder.cpp
CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.obj -MF CMakeFiles\lab3.dir\Field\FieldBuilder.cpp.obj.d -o CMakeFiles\lab3.dir\Field\FieldBuilder.cpp.obj -c C:\Users\losto\myrepo\lab5\Field\FieldBuilder.cpp

CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\Field\FieldBuilder.cpp > CMakeFiles\lab3.dir\Field\FieldBuilder.cpp.i

CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\Field\FieldBuilder.cpp -o CMakeFiles\lab3.dir\Field\FieldBuilder.cpp.s

CMakeFiles/lab3.dir/Field/PrintField.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/Field/PrintField.cpp.obj: C:/Users/losto/myrepo/lab5/Field/PrintField.cpp
CMakeFiles/lab3.dir/Field/PrintField.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/lab3.dir/Field/PrintField.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/Field/PrintField.cpp.obj -MF CMakeFiles\lab3.dir\Field\PrintField.cpp.obj.d -o CMakeFiles\lab3.dir\Field\PrintField.cpp.obj -c C:\Users\losto\myrepo\lab5\Field\PrintField.cpp

CMakeFiles/lab3.dir/Field/PrintField.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/Field/PrintField.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\Field\PrintField.cpp > CMakeFiles\lab3.dir\Field\PrintField.cpp.i

CMakeFiles/lab3.dir/Field/PrintField.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/Field/PrintField.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\Field\PrintField.cpp -o CMakeFiles\lab3.dir\Field\PrintField.cpp.s

CMakeFiles/lab3.dir/events/PlayerEvent.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/events/PlayerEvent.cpp.obj: C:/Users/losto/myrepo/lab5/events/PlayerEvent.cpp
CMakeFiles/lab3.dir/events/PlayerEvent.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/lab3.dir/events/PlayerEvent.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/events/PlayerEvent.cpp.obj -MF CMakeFiles\lab3.dir\events\PlayerEvent.cpp.obj.d -o CMakeFiles\lab3.dir\events\PlayerEvent.cpp.obj -c C:\Users\losto\myrepo\lab5\events\PlayerEvent.cpp

CMakeFiles/lab3.dir/events/PlayerEvent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/events/PlayerEvent.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\events\PlayerEvent.cpp > CMakeFiles\lab3.dir\events\PlayerEvent.cpp.i

CMakeFiles/lab3.dir/events/PlayerEvent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/events/PlayerEvent.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\events\PlayerEvent.cpp -o CMakeFiles\lab3.dir\events\PlayerEvent.cpp.s

CMakeFiles/lab3.dir/events/Score.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/events/Score.cpp.obj: C:/Users/losto/myrepo/lab5/events/Score.cpp
CMakeFiles/lab3.dir/events/Score.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/lab3.dir/events/Score.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/events/Score.cpp.obj -MF CMakeFiles\lab3.dir\events\Score.cpp.obj.d -o CMakeFiles\lab3.dir\events\Score.cpp.obj -c C:\Users\losto\myrepo\lab5\events\Score.cpp

CMakeFiles/lab3.dir/events/Score.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/events/Score.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\events\Score.cpp > CMakeFiles\lab3.dir\events\Score.cpp.i

CMakeFiles/lab3.dir/events/Score.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/events/Score.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\events\Score.cpp -o CMakeFiles\lab3.dir\events\Score.cpp.s

CMakeFiles/lab3.dir/events/Enemy.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/events/Enemy.cpp.obj: C:/Users/losto/myrepo/lab5/events/Enemy.cpp
CMakeFiles/lab3.dir/events/Enemy.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/lab3.dir/events/Enemy.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/events/Enemy.cpp.obj -MF CMakeFiles\lab3.dir\events\Enemy.cpp.obj.d -o CMakeFiles\lab3.dir\events\Enemy.cpp.obj -c C:\Users\losto\myrepo\lab5\events\Enemy.cpp

CMakeFiles/lab3.dir/events/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/events/Enemy.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\events\Enemy.cpp > CMakeFiles\lab3.dir\events\Enemy.cpp.i

CMakeFiles/lab3.dir/events/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/events/Enemy.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\events\Enemy.cpp -o CMakeFiles\lab3.dir\events\Enemy.cpp.s

CMakeFiles/lab3.dir/events/Teleport.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/events/Teleport.cpp.obj: C:/Users/losto/myrepo/lab5/events/Teleport.cpp
CMakeFiles/lab3.dir/events/Teleport.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/lab3.dir/events/Teleport.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/events/Teleport.cpp.obj -MF CMakeFiles\lab3.dir\events\Teleport.cpp.obj.d -o CMakeFiles\lab3.dir\events\Teleport.cpp.obj -c C:\Users\losto\myrepo\lab5\events\Teleport.cpp

CMakeFiles/lab3.dir/events/Teleport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/events/Teleport.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\events\Teleport.cpp > CMakeFiles\lab3.dir\events\Teleport.cpp.i

CMakeFiles/lab3.dir/events/Teleport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/events/Teleport.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\events\Teleport.cpp -o CMakeFiles\lab3.dir\events\Teleport.cpp.s

CMakeFiles/lab3.dir/events/FieldEvent.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/events/FieldEvent.cpp.obj: C:/Users/losto/myrepo/lab5/events/FieldEvent.cpp
CMakeFiles/lab3.dir/events/FieldEvent.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/lab3.dir/events/FieldEvent.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/events/FieldEvent.cpp.obj -MF CMakeFiles\lab3.dir\events\FieldEvent.cpp.obj.d -o CMakeFiles\lab3.dir\events\FieldEvent.cpp.obj -c C:\Users\losto\myrepo\lab5\events\FieldEvent.cpp

CMakeFiles/lab3.dir/events/FieldEvent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/events/FieldEvent.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\events\FieldEvent.cpp > CMakeFiles\lab3.dir\events\FieldEvent.cpp.i

CMakeFiles/lab3.dir/events/FieldEvent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/events/FieldEvent.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\events\FieldEvent.cpp -o CMakeFiles\lab3.dir\events\FieldEvent.cpp.s

CMakeFiles/lab3.dir/events/Win.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/events/Win.cpp.obj: C:/Users/losto/myrepo/lab5/events/Win.cpp
CMakeFiles/lab3.dir/events/Win.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/lab3.dir/events/Win.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/events/Win.cpp.obj -MF CMakeFiles\lab3.dir\events\Win.cpp.obj.d -o CMakeFiles\lab3.dir\events\Win.cpp.obj -c C:\Users\losto\myrepo\lab5\events\Win.cpp

CMakeFiles/lab3.dir/events/Win.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/events/Win.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\events\Win.cpp > CMakeFiles\lab3.dir\events\Win.cpp.i

CMakeFiles/lab3.dir/events/Win.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/events/Win.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\events\Win.cpp -o CMakeFiles\lab3.dir\events\Win.cpp.s

CMakeFiles/lab3.dir/events/Lose.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/events/Lose.cpp.obj: C:/Users/losto/myrepo/lab5/events/Lose.cpp
CMakeFiles/lab3.dir/events/Lose.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/lab3.dir/events/Lose.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/events/Lose.cpp.obj -MF CMakeFiles\lab3.dir\events\Lose.cpp.obj.d -o CMakeFiles\lab3.dir\events\Lose.cpp.obj -c C:\Users\losto\myrepo\lab5\events\Lose.cpp

CMakeFiles/lab3.dir/events/Lose.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/events/Lose.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\events\Lose.cpp > CMakeFiles\lab3.dir\events\Lose.cpp.i

CMakeFiles/lab3.dir/events/Lose.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/events/Lose.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\events\Lose.cpp -o CMakeFiles\lab3.dir\events\Lose.cpp.s

CMakeFiles/lab3.dir/Game/Game.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/Game/Game.cpp.obj: C:/Users/losto/myrepo/lab5/Game/Game.cpp
CMakeFiles/lab3.dir/Game/Game.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/lab3.dir/Game/Game.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/Game/Game.cpp.obj -MF CMakeFiles\lab3.dir\Game\Game.cpp.obj.d -o CMakeFiles\lab3.dir\Game\Game.cpp.obj -c C:\Users\losto\myrepo\lab5\Game\Game.cpp

CMakeFiles/lab3.dir/Game/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/Game/Game.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\Game\Game.cpp > CMakeFiles\lab3.dir\Game\Game.cpp.i

CMakeFiles/lab3.dir/Game/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/Game/Game.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\Game\Game.cpp -o CMakeFiles\lab3.dir\Game\Game.cpp.s

CMakeFiles/lab3.dir/Game/Input.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/Game/Input.cpp.obj: C:/Users/losto/myrepo/lab5/Game/Input.cpp
CMakeFiles/lab3.dir/Game/Input.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/lab3.dir/Game/Input.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/Game/Input.cpp.obj -MF CMakeFiles\lab3.dir\Game\Input.cpp.obj.d -o CMakeFiles\lab3.dir\Game\Input.cpp.obj -c C:\Users\losto\myrepo\lab5\Game\Input.cpp

CMakeFiles/lab3.dir/Game/Input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/Game/Input.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\Game\Input.cpp > CMakeFiles\lab3.dir\Game\Input.cpp.i

CMakeFiles/lab3.dir/Game/Input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/Game/Input.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\Game\Input.cpp -o CMakeFiles\lab3.dir\Game\Input.cpp.s

CMakeFiles/lab3.dir/View/GameObserver.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/View/GameObserver.cpp.obj: C:/Users/losto/myrepo/lab5/View/GameObserver.cpp
CMakeFiles/lab3.dir/View/GameObserver.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/lab3.dir/View/GameObserver.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/View/GameObserver.cpp.obj -MF CMakeFiles\lab3.dir\View\GameObserver.cpp.obj.d -o CMakeFiles\lab3.dir\View\GameObserver.cpp.obj -c C:\Users\losto\myrepo\lab5\View\GameObserver.cpp

CMakeFiles/lab3.dir/View/GameObserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/View/GameObserver.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\View\GameObserver.cpp > CMakeFiles\lab3.dir\View\GameObserver.cpp.i

CMakeFiles/lab3.dir/View/GameObserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/View/GameObserver.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\View\GameObserver.cpp -o CMakeFiles\lab3.dir\View\GameObserver.cpp.s

CMakeFiles/lab3.dir/View/ConsoleView.cpp.obj: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/View/ConsoleView.cpp.obj: C:/Users/losto/myrepo/lab5/View/ConsoleView.cpp
CMakeFiles/lab3.dir/View/ConsoleView.cpp.obj: CMakeFiles/lab3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/lab3.dir/View/ConsoleView.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab3.dir/View/ConsoleView.cpp.obj -MF CMakeFiles\lab3.dir\View\ConsoleView.cpp.obj.d -o CMakeFiles\lab3.dir\View\ConsoleView.cpp.obj -c C:\Users\losto\myrepo\lab5\View\ConsoleView.cpp

CMakeFiles/lab3.dir/View/ConsoleView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/View/ConsoleView.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\losto\myrepo\lab5\View\ConsoleView.cpp > CMakeFiles\lab3.dir\View\ConsoleView.cpp.i

CMakeFiles/lab3.dir/View/ConsoleView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/View/ConsoleView.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\losto\myrepo\lab5\View\ConsoleView.cpp -o CMakeFiles\lab3.dir\View\ConsoleView.cpp.s

# Object files for target lab3
lab3_OBJECTS = \
"CMakeFiles/lab3.dir/main.cpp.obj" \
"CMakeFiles/lab3.dir/player.cpp.obj" \
"CMakeFiles/lab3.dir/playercontroller.cpp.obj" \
"CMakeFiles/lab3.dir/Field/cell.cpp.obj" \
"CMakeFiles/lab3.dir/Field/gamefield.cpp.obj" \
"CMakeFiles/lab3.dir/events/HealEvent.cpp.obj" \
"CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.obj" \
"CMakeFiles/lab3.dir/Field/PrintField.cpp.obj" \
"CMakeFiles/lab3.dir/events/PlayerEvent.cpp.obj" \
"CMakeFiles/lab3.dir/events/Score.cpp.obj" \
"CMakeFiles/lab3.dir/events/Enemy.cpp.obj" \
"CMakeFiles/lab3.dir/events/Teleport.cpp.obj" \
"CMakeFiles/lab3.dir/events/FieldEvent.cpp.obj" \
"CMakeFiles/lab3.dir/events/Win.cpp.obj" \
"CMakeFiles/lab3.dir/events/Lose.cpp.obj" \
"CMakeFiles/lab3.dir/Game/Game.cpp.obj" \
"CMakeFiles/lab3.dir/Game/Input.cpp.obj" \
"CMakeFiles/lab3.dir/View/GameObserver.cpp.obj" \
"CMakeFiles/lab3.dir/View/ConsoleView.cpp.obj"

# External object files for target lab3
lab3_EXTERNAL_OBJECTS =

lab3.exe: CMakeFiles/lab3.dir/main.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/player.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/playercontroller.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/Field/cell.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/Field/gamefield.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/events/HealEvent.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/Field/FieldBuilder.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/Field/PrintField.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/events/PlayerEvent.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/events/Score.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/events/Enemy.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/events/Teleport.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/events/FieldEvent.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/events/Win.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/events/Lose.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/Game/Game.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/Game/Input.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/View/GameObserver.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/View/ConsoleView.cpp.obj
lab3.exe: CMakeFiles/lab3.dir/build.make
lab3.exe: CMakeFiles/lab3.dir/linkLibs.rsp
lab3.exe: CMakeFiles/lab3.dir/objects1
lab3.exe: CMakeFiles/lab3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\losto\myrepo\lab5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Linking CXX executable lab3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab3.dir/build: lab3.exe
.PHONY : CMakeFiles/lab3.dir/build

CMakeFiles/lab3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab3.dir/clean

CMakeFiles/lab3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\losto\myrepo\lab5 C:\Users\losto\myrepo\lab5 C:\Users\losto\myrepo\lab5\build C:\Users\losto\myrepo\lab5\build C:\Users\losto\myrepo\lab5\build\CMakeFiles\lab3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab3.dir/depend

