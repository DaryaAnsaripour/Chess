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
CMAKE_SOURCE_DIR = /home/darya/Documents/AP/project/phase2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/darya/Documents/AP/project/phase2

# Include any dependencies generated for this target.
include CMakeFiles/phase2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/phase2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/phase2.dir/flags.make

CMakeFiles/phase2.dir/src/main.cpp.o: CMakeFiles/phase2.dir/flags.make
CMakeFiles/phase2.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/phase2.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phase2.dir/src/main.cpp.o -c /home/darya/Documents/AP/project/phase2/src/main.cpp

CMakeFiles/phase2.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phase2.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Documents/AP/project/phase2/src/main.cpp > CMakeFiles/phase2.dir/src/main.cpp.i

CMakeFiles/phase2.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phase2.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Documents/AP/project/phase2/src/main.cpp -o CMakeFiles/phase2.dir/src/main.cpp.s

CMakeFiles/phase2.dir/src/piece.cpp.o: CMakeFiles/phase2.dir/flags.make
CMakeFiles/phase2.dir/src/piece.cpp.o: src/piece.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/phase2.dir/src/piece.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phase2.dir/src/piece.cpp.o -c /home/darya/Documents/AP/project/phase2/src/piece.cpp

CMakeFiles/phase2.dir/src/piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phase2.dir/src/piece.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Documents/AP/project/phase2/src/piece.cpp > CMakeFiles/phase2.dir/src/piece.cpp.i

CMakeFiles/phase2.dir/src/piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phase2.dir/src/piece.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Documents/AP/project/phase2/src/piece.cpp -o CMakeFiles/phase2.dir/src/piece.cpp.s

CMakeFiles/phase2.dir/src/chessBoard.cpp.o: CMakeFiles/phase2.dir/flags.make
CMakeFiles/phase2.dir/src/chessBoard.cpp.o: src/chessBoard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/phase2.dir/src/chessBoard.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phase2.dir/src/chessBoard.cpp.o -c /home/darya/Documents/AP/project/phase2/src/chessBoard.cpp

CMakeFiles/phase2.dir/src/chessBoard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phase2.dir/src/chessBoard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Documents/AP/project/phase2/src/chessBoard.cpp > CMakeFiles/phase2.dir/src/chessBoard.cpp.i

CMakeFiles/phase2.dir/src/chessBoard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phase2.dir/src/chessBoard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Documents/AP/project/phase2/src/chessBoard.cpp -o CMakeFiles/phase2.dir/src/chessBoard.cpp.s

CMakeFiles/phase2.dir/src/king.cpp.o: CMakeFiles/phase2.dir/flags.make
CMakeFiles/phase2.dir/src/king.cpp.o: src/king.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/phase2.dir/src/king.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phase2.dir/src/king.cpp.o -c /home/darya/Documents/AP/project/phase2/src/king.cpp

CMakeFiles/phase2.dir/src/king.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phase2.dir/src/king.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Documents/AP/project/phase2/src/king.cpp > CMakeFiles/phase2.dir/src/king.cpp.i

CMakeFiles/phase2.dir/src/king.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phase2.dir/src/king.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Documents/AP/project/phase2/src/king.cpp -o CMakeFiles/phase2.dir/src/king.cpp.s

CMakeFiles/phase2.dir/src/queen.cpp.o: CMakeFiles/phase2.dir/flags.make
CMakeFiles/phase2.dir/src/queen.cpp.o: src/queen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/phase2.dir/src/queen.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phase2.dir/src/queen.cpp.o -c /home/darya/Documents/AP/project/phase2/src/queen.cpp

CMakeFiles/phase2.dir/src/queen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phase2.dir/src/queen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Documents/AP/project/phase2/src/queen.cpp > CMakeFiles/phase2.dir/src/queen.cpp.i

CMakeFiles/phase2.dir/src/queen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phase2.dir/src/queen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Documents/AP/project/phase2/src/queen.cpp -o CMakeFiles/phase2.dir/src/queen.cpp.s

CMakeFiles/phase2.dir/src/knight.cpp.o: CMakeFiles/phase2.dir/flags.make
CMakeFiles/phase2.dir/src/knight.cpp.o: src/knight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/phase2.dir/src/knight.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phase2.dir/src/knight.cpp.o -c /home/darya/Documents/AP/project/phase2/src/knight.cpp

CMakeFiles/phase2.dir/src/knight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phase2.dir/src/knight.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Documents/AP/project/phase2/src/knight.cpp > CMakeFiles/phase2.dir/src/knight.cpp.i

CMakeFiles/phase2.dir/src/knight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phase2.dir/src/knight.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Documents/AP/project/phase2/src/knight.cpp -o CMakeFiles/phase2.dir/src/knight.cpp.s

CMakeFiles/phase2.dir/src/bishop.cpp.o: CMakeFiles/phase2.dir/flags.make
CMakeFiles/phase2.dir/src/bishop.cpp.o: src/bishop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/phase2.dir/src/bishop.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phase2.dir/src/bishop.cpp.o -c /home/darya/Documents/AP/project/phase2/src/bishop.cpp

CMakeFiles/phase2.dir/src/bishop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phase2.dir/src/bishop.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Documents/AP/project/phase2/src/bishop.cpp > CMakeFiles/phase2.dir/src/bishop.cpp.i

CMakeFiles/phase2.dir/src/bishop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phase2.dir/src/bishop.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Documents/AP/project/phase2/src/bishop.cpp -o CMakeFiles/phase2.dir/src/bishop.cpp.s

CMakeFiles/phase2.dir/src/rook.cpp.o: CMakeFiles/phase2.dir/flags.make
CMakeFiles/phase2.dir/src/rook.cpp.o: src/rook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/phase2.dir/src/rook.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phase2.dir/src/rook.cpp.o -c /home/darya/Documents/AP/project/phase2/src/rook.cpp

CMakeFiles/phase2.dir/src/rook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phase2.dir/src/rook.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Documents/AP/project/phase2/src/rook.cpp > CMakeFiles/phase2.dir/src/rook.cpp.i

CMakeFiles/phase2.dir/src/rook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phase2.dir/src/rook.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Documents/AP/project/phase2/src/rook.cpp -o CMakeFiles/phase2.dir/src/rook.cpp.s

CMakeFiles/phase2.dir/src/pawn.cpp.o: CMakeFiles/phase2.dir/flags.make
CMakeFiles/phase2.dir/src/pawn.cpp.o: src/pawn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/phase2.dir/src/pawn.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/phase2.dir/src/pawn.cpp.o -c /home/darya/Documents/AP/project/phase2/src/pawn.cpp

CMakeFiles/phase2.dir/src/pawn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/phase2.dir/src/pawn.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Documents/AP/project/phase2/src/pawn.cpp > CMakeFiles/phase2.dir/src/pawn.cpp.i

CMakeFiles/phase2.dir/src/pawn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/phase2.dir/src/pawn.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Documents/AP/project/phase2/src/pawn.cpp -o CMakeFiles/phase2.dir/src/pawn.cpp.s

# Object files for target phase2
phase2_OBJECTS = \
"CMakeFiles/phase2.dir/src/main.cpp.o" \
"CMakeFiles/phase2.dir/src/piece.cpp.o" \
"CMakeFiles/phase2.dir/src/chessBoard.cpp.o" \
"CMakeFiles/phase2.dir/src/king.cpp.o" \
"CMakeFiles/phase2.dir/src/queen.cpp.o" \
"CMakeFiles/phase2.dir/src/knight.cpp.o" \
"CMakeFiles/phase2.dir/src/bishop.cpp.o" \
"CMakeFiles/phase2.dir/src/rook.cpp.o" \
"CMakeFiles/phase2.dir/src/pawn.cpp.o"

# External object files for target phase2
phase2_EXTERNAL_OBJECTS =

phase2: CMakeFiles/phase2.dir/src/main.cpp.o
phase2: CMakeFiles/phase2.dir/src/piece.cpp.o
phase2: CMakeFiles/phase2.dir/src/chessBoard.cpp.o
phase2: CMakeFiles/phase2.dir/src/king.cpp.o
phase2: CMakeFiles/phase2.dir/src/queen.cpp.o
phase2: CMakeFiles/phase2.dir/src/knight.cpp.o
phase2: CMakeFiles/phase2.dir/src/bishop.cpp.o
phase2: CMakeFiles/phase2.dir/src/rook.cpp.o
phase2: CMakeFiles/phase2.dir/src/pawn.cpp.o
phase2: CMakeFiles/phase2.dir/build.make
phase2: CMakeFiles/phase2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/darya/Documents/AP/project/phase2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable phase2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/phase2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/phase2.dir/build: phase2

.PHONY : CMakeFiles/phase2.dir/build

CMakeFiles/phase2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/phase2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/phase2.dir/clean

CMakeFiles/phase2.dir/depend:
	cd /home/darya/Documents/AP/project/phase2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/darya/Documents/AP/project/phase2 /home/darya/Documents/AP/project/phase2 /home/darya/Documents/AP/project/phase2 /home/darya/Documents/AP/project/phase2 /home/darya/Documents/AP/project/phase2/CMakeFiles/phase2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/phase2.dir/depend

