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
CMAKE_COMMAND = /snap/clion/112/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/112/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/abodi/CLionProjects/wargame-a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abodi/CLionProjects/wargame-a/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/wargame-a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/wargame-a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/wargame-a.dir/flags.make

CMakeFiles/wargame-a.dir/Test.cpp.o: CMakeFiles/wargame-a.dir/flags.make
CMakeFiles/wargame-a.dir/Test.cpp.o: ../Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/wargame-a.dir/Test.cpp.o"
	/usr/bin/clang++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wargame-a.dir/Test.cpp.o -c /home/abodi/CLionProjects/wargame-a/Test.cpp

CMakeFiles/wargame-a.dir/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wargame-a.dir/Test.cpp.i"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abodi/CLionProjects/wargame-a/Test.cpp > CMakeFiles/wargame-a.dir/Test.cpp.i

CMakeFiles/wargame-a.dir/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wargame-a.dir/Test.cpp.s"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abodi/CLionProjects/wargame-a/Test.cpp -o CMakeFiles/wargame-a.dir/Test.cpp.s

CMakeFiles/wargame-a.dir/Board.cpp.o: CMakeFiles/wargame-a.dir/flags.make
CMakeFiles/wargame-a.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/wargame-a.dir/Board.cpp.o"
	/usr/bin/clang++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wargame-a.dir/Board.cpp.o -c /home/abodi/CLionProjects/wargame-a/Board.cpp

CMakeFiles/wargame-a.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wargame-a.dir/Board.cpp.i"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abodi/CLionProjects/wargame-a/Board.cpp > CMakeFiles/wargame-a.dir/Board.cpp.i

CMakeFiles/wargame-a.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wargame-a.dir/Board.cpp.s"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abodi/CLionProjects/wargame-a/Board.cpp -o CMakeFiles/wargame-a.dir/Board.cpp.s

CMakeFiles/wargame-a.dir/FootCommander.cpp.o: CMakeFiles/wargame-a.dir/flags.make
CMakeFiles/wargame-a.dir/FootCommander.cpp.o: ../FootCommander.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/wargame-a.dir/FootCommander.cpp.o"
	/usr/bin/clang++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wargame-a.dir/FootCommander.cpp.o -c /home/abodi/CLionProjects/wargame-a/FootCommander.cpp

CMakeFiles/wargame-a.dir/FootCommander.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wargame-a.dir/FootCommander.cpp.i"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abodi/CLionProjects/wargame-a/FootCommander.cpp > CMakeFiles/wargame-a.dir/FootCommander.cpp.i

CMakeFiles/wargame-a.dir/FootCommander.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wargame-a.dir/FootCommander.cpp.s"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abodi/CLionProjects/wargame-a/FootCommander.cpp -o CMakeFiles/wargame-a.dir/FootCommander.cpp.s

CMakeFiles/wargame-a.dir/FootSoldier.cpp.o: CMakeFiles/wargame-a.dir/flags.make
CMakeFiles/wargame-a.dir/FootSoldier.cpp.o: ../FootSoldier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/wargame-a.dir/FootSoldier.cpp.o"
	/usr/bin/clang++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wargame-a.dir/FootSoldier.cpp.o -c /home/abodi/CLionProjects/wargame-a/FootSoldier.cpp

CMakeFiles/wargame-a.dir/FootSoldier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wargame-a.dir/FootSoldier.cpp.i"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abodi/CLionProjects/wargame-a/FootSoldier.cpp > CMakeFiles/wargame-a.dir/FootSoldier.cpp.i

CMakeFiles/wargame-a.dir/FootSoldier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wargame-a.dir/FootSoldier.cpp.s"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abodi/CLionProjects/wargame-a/FootSoldier.cpp -o CMakeFiles/wargame-a.dir/FootSoldier.cpp.s

CMakeFiles/wargame-a.dir/Paramedic.cpp.o: CMakeFiles/wargame-a.dir/flags.make
CMakeFiles/wargame-a.dir/Paramedic.cpp.o: ../Paramedic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/wargame-a.dir/Paramedic.cpp.o"
	/usr/bin/clang++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wargame-a.dir/Paramedic.cpp.o -c /home/abodi/CLionProjects/wargame-a/Paramedic.cpp

CMakeFiles/wargame-a.dir/Paramedic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wargame-a.dir/Paramedic.cpp.i"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abodi/CLionProjects/wargame-a/Paramedic.cpp > CMakeFiles/wargame-a.dir/Paramedic.cpp.i

CMakeFiles/wargame-a.dir/Paramedic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wargame-a.dir/Paramedic.cpp.s"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abodi/CLionProjects/wargame-a/Paramedic.cpp -o CMakeFiles/wargame-a.dir/Paramedic.cpp.s

CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.o: CMakeFiles/wargame-a.dir/flags.make
CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.o: ../ParamedicCommander.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.o"
	/usr/bin/clang++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.o -c /home/abodi/CLionProjects/wargame-a/ParamedicCommander.cpp

CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.i"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abodi/CLionProjects/wargame-a/ParamedicCommander.cpp > CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.i

CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.s"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abodi/CLionProjects/wargame-a/ParamedicCommander.cpp -o CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.s

CMakeFiles/wargame-a.dir/Sniper.cpp.o: CMakeFiles/wargame-a.dir/flags.make
CMakeFiles/wargame-a.dir/Sniper.cpp.o: ../Sniper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/wargame-a.dir/Sniper.cpp.o"
	/usr/bin/clang++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wargame-a.dir/Sniper.cpp.o -c /home/abodi/CLionProjects/wargame-a/Sniper.cpp

CMakeFiles/wargame-a.dir/Sniper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wargame-a.dir/Sniper.cpp.i"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abodi/CLionProjects/wargame-a/Sniper.cpp > CMakeFiles/wargame-a.dir/Sniper.cpp.i

CMakeFiles/wargame-a.dir/Sniper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wargame-a.dir/Sniper.cpp.s"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abodi/CLionProjects/wargame-a/Sniper.cpp -o CMakeFiles/wargame-a.dir/Sniper.cpp.s

CMakeFiles/wargame-a.dir/SniperCommander.cpp.o: CMakeFiles/wargame-a.dir/flags.make
CMakeFiles/wargame-a.dir/SniperCommander.cpp.o: ../SniperCommander.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/wargame-a.dir/SniperCommander.cpp.o"
	/usr/bin/clang++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wargame-a.dir/SniperCommander.cpp.o -c /home/abodi/CLionProjects/wargame-a/SniperCommander.cpp

CMakeFiles/wargame-a.dir/SniperCommander.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wargame-a.dir/SniperCommander.cpp.i"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abodi/CLionProjects/wargame-a/SniperCommander.cpp > CMakeFiles/wargame-a.dir/SniperCommander.cpp.i

CMakeFiles/wargame-a.dir/SniperCommander.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wargame-a.dir/SniperCommander.cpp.s"
	/usr/bin/clang++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abodi/CLionProjects/wargame-a/SniperCommander.cpp -o CMakeFiles/wargame-a.dir/SniperCommander.cpp.s

# Object files for target wargame-a
wargame__a_OBJECTS = \
"CMakeFiles/wargame-a.dir/Test.cpp.o" \
"CMakeFiles/wargame-a.dir/Board.cpp.o" \
"CMakeFiles/wargame-a.dir/FootCommander.cpp.o" \
"CMakeFiles/wargame-a.dir/FootSoldier.cpp.o" \
"CMakeFiles/wargame-a.dir/Paramedic.cpp.o" \
"CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.o" \
"CMakeFiles/wargame-a.dir/Sniper.cpp.o" \
"CMakeFiles/wargame-a.dir/SniperCommander.cpp.o"

# External object files for target wargame-a
wargame__a_EXTERNAL_OBJECTS =

wargame-a: CMakeFiles/wargame-a.dir/Test.cpp.o
wargame-a: CMakeFiles/wargame-a.dir/Board.cpp.o
wargame-a: CMakeFiles/wargame-a.dir/FootCommander.cpp.o
wargame-a: CMakeFiles/wargame-a.dir/FootSoldier.cpp.o
wargame-a: CMakeFiles/wargame-a.dir/Paramedic.cpp.o
wargame-a: CMakeFiles/wargame-a.dir/ParamedicCommander.cpp.o
wargame-a: CMakeFiles/wargame-a.dir/Sniper.cpp.o
wargame-a: CMakeFiles/wargame-a.dir/SniperCommander.cpp.o
wargame-a: CMakeFiles/wargame-a.dir/build.make
wargame-a: CMakeFiles/wargame-a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable wargame-a"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wargame-a.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/wargame-a.dir/build: wargame-a

.PHONY : CMakeFiles/wargame-a.dir/build

CMakeFiles/wargame-a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/wargame-a.dir/cmake_clean.cmake
.PHONY : CMakeFiles/wargame-a.dir/clean

CMakeFiles/wargame-a.dir/depend:
	cd /home/abodi/CLionProjects/wargame-a/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abodi/CLionProjects/wargame-a /home/abodi/CLionProjects/wargame-a /home/abodi/CLionProjects/wargame-a/cmake-build-debug /home/abodi/CLionProjects/wargame-a/cmake-build-debug /home/abodi/CLionProjects/wargame-a/cmake-build-debug/CMakeFiles/wargame-a.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/wargame-a.dir/depend
