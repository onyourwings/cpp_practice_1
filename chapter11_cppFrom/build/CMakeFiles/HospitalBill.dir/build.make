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
CMAKE_SOURCE_DIR = /home/scratch/nhuongmh/tcpp/chapter11_cppFrom

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build

# Include any dependencies generated for this target.
include CMakeFiles/HospitalBill.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HospitalBill.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HospitalBill.dir/flags.make

CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o: CMakeFiles/HospitalBill.dir/flags.make
CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o: ../src/chap11_ex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o -c /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/chap11_ex.cpp

CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/chap11_ex.cpp > CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.i

CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/chap11_ex.cpp -o CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.s

CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o.requires:

.PHONY : CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o.requires

CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o.provides: CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o.requires
	$(MAKE) -f CMakeFiles/HospitalBill.dir/build.make CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o.provides.build
.PHONY : CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o.provides

CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o.provides.build: CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o


CMakeFiles/HospitalBill.dir/src/billType.cpp.o: CMakeFiles/HospitalBill.dir/flags.make
CMakeFiles/HospitalBill.dir/src/billType.cpp.o: ../src/billType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HospitalBill.dir/src/billType.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HospitalBill.dir/src/billType.cpp.o -c /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/billType.cpp

CMakeFiles/HospitalBill.dir/src/billType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HospitalBill.dir/src/billType.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/billType.cpp > CMakeFiles/HospitalBill.dir/src/billType.cpp.i

CMakeFiles/HospitalBill.dir/src/billType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HospitalBill.dir/src/billType.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/billType.cpp -o CMakeFiles/HospitalBill.dir/src/billType.cpp.s

CMakeFiles/HospitalBill.dir/src/billType.cpp.o.requires:

.PHONY : CMakeFiles/HospitalBill.dir/src/billType.cpp.o.requires

CMakeFiles/HospitalBill.dir/src/billType.cpp.o.provides: CMakeFiles/HospitalBill.dir/src/billType.cpp.o.requires
	$(MAKE) -f CMakeFiles/HospitalBill.dir/build.make CMakeFiles/HospitalBill.dir/src/billType.cpp.o.provides.build
.PHONY : CMakeFiles/HospitalBill.dir/src/billType.cpp.o.provides

CMakeFiles/HospitalBill.dir/src/billType.cpp.o.provides.build: CMakeFiles/HospitalBill.dir/src/billType.cpp.o


CMakeFiles/HospitalBill.dir/src/dateType.cpp.o: CMakeFiles/HospitalBill.dir/flags.make
CMakeFiles/HospitalBill.dir/src/dateType.cpp.o: ../src/dateType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HospitalBill.dir/src/dateType.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HospitalBill.dir/src/dateType.cpp.o -c /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/dateType.cpp

CMakeFiles/HospitalBill.dir/src/dateType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HospitalBill.dir/src/dateType.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/dateType.cpp > CMakeFiles/HospitalBill.dir/src/dateType.cpp.i

CMakeFiles/HospitalBill.dir/src/dateType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HospitalBill.dir/src/dateType.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/dateType.cpp -o CMakeFiles/HospitalBill.dir/src/dateType.cpp.s

CMakeFiles/HospitalBill.dir/src/dateType.cpp.o.requires:

.PHONY : CMakeFiles/HospitalBill.dir/src/dateType.cpp.o.requires

CMakeFiles/HospitalBill.dir/src/dateType.cpp.o.provides: CMakeFiles/HospitalBill.dir/src/dateType.cpp.o.requires
	$(MAKE) -f CMakeFiles/HospitalBill.dir/build.make CMakeFiles/HospitalBill.dir/src/dateType.cpp.o.provides.build
.PHONY : CMakeFiles/HospitalBill.dir/src/dateType.cpp.o.provides

CMakeFiles/HospitalBill.dir/src/dateType.cpp.o.provides.build: CMakeFiles/HospitalBill.dir/src/dateType.cpp.o


CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o: CMakeFiles/HospitalBill.dir/flags.make
CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o: ../src/doctorType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o -c /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/doctorType.cpp

CMakeFiles/HospitalBill.dir/src/doctorType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HospitalBill.dir/src/doctorType.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/doctorType.cpp > CMakeFiles/HospitalBill.dir/src/doctorType.cpp.i

CMakeFiles/HospitalBill.dir/src/doctorType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HospitalBill.dir/src/doctorType.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/doctorType.cpp -o CMakeFiles/HospitalBill.dir/src/doctorType.cpp.s

CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o.requires:

.PHONY : CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o.requires

CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o.provides: CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o.requires
	$(MAKE) -f CMakeFiles/HospitalBill.dir/build.make CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o.provides.build
.PHONY : CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o.provides

CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o.provides.build: CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o


CMakeFiles/HospitalBill.dir/src/patientType.cpp.o: CMakeFiles/HospitalBill.dir/flags.make
CMakeFiles/HospitalBill.dir/src/patientType.cpp.o: ../src/patientType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/HospitalBill.dir/src/patientType.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HospitalBill.dir/src/patientType.cpp.o -c /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/patientType.cpp

CMakeFiles/HospitalBill.dir/src/patientType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HospitalBill.dir/src/patientType.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/patientType.cpp > CMakeFiles/HospitalBill.dir/src/patientType.cpp.i

CMakeFiles/HospitalBill.dir/src/patientType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HospitalBill.dir/src/patientType.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/patientType.cpp -o CMakeFiles/HospitalBill.dir/src/patientType.cpp.s

CMakeFiles/HospitalBill.dir/src/patientType.cpp.o.requires:

.PHONY : CMakeFiles/HospitalBill.dir/src/patientType.cpp.o.requires

CMakeFiles/HospitalBill.dir/src/patientType.cpp.o.provides: CMakeFiles/HospitalBill.dir/src/patientType.cpp.o.requires
	$(MAKE) -f CMakeFiles/HospitalBill.dir/build.make CMakeFiles/HospitalBill.dir/src/patientType.cpp.o.provides.build
.PHONY : CMakeFiles/HospitalBill.dir/src/patientType.cpp.o.provides

CMakeFiles/HospitalBill.dir/src/patientType.cpp.o.provides.build: CMakeFiles/HospitalBill.dir/src/patientType.cpp.o


CMakeFiles/HospitalBill.dir/src/personType.cpp.o: CMakeFiles/HospitalBill.dir/flags.make
CMakeFiles/HospitalBill.dir/src/personType.cpp.o: ../src/personType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/HospitalBill.dir/src/personType.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HospitalBill.dir/src/personType.cpp.o -c /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/personType.cpp

CMakeFiles/HospitalBill.dir/src/personType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HospitalBill.dir/src/personType.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/personType.cpp > CMakeFiles/HospitalBill.dir/src/personType.cpp.i

CMakeFiles/HospitalBill.dir/src/personType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HospitalBill.dir/src/personType.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/src/personType.cpp -o CMakeFiles/HospitalBill.dir/src/personType.cpp.s

CMakeFiles/HospitalBill.dir/src/personType.cpp.o.requires:

.PHONY : CMakeFiles/HospitalBill.dir/src/personType.cpp.o.requires

CMakeFiles/HospitalBill.dir/src/personType.cpp.o.provides: CMakeFiles/HospitalBill.dir/src/personType.cpp.o.requires
	$(MAKE) -f CMakeFiles/HospitalBill.dir/build.make CMakeFiles/HospitalBill.dir/src/personType.cpp.o.provides.build
.PHONY : CMakeFiles/HospitalBill.dir/src/personType.cpp.o.provides

CMakeFiles/HospitalBill.dir/src/personType.cpp.o.provides.build: CMakeFiles/HospitalBill.dir/src/personType.cpp.o


# Object files for target HospitalBill
HospitalBill_OBJECTS = \
"CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o" \
"CMakeFiles/HospitalBill.dir/src/billType.cpp.o" \
"CMakeFiles/HospitalBill.dir/src/dateType.cpp.o" \
"CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o" \
"CMakeFiles/HospitalBill.dir/src/patientType.cpp.o" \
"CMakeFiles/HospitalBill.dir/src/personType.cpp.o"

# External object files for target HospitalBill
HospitalBill_EXTERNAL_OBJECTS =

HospitalBill: CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o
HospitalBill: CMakeFiles/HospitalBill.dir/src/billType.cpp.o
HospitalBill: CMakeFiles/HospitalBill.dir/src/dateType.cpp.o
HospitalBill: CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o
HospitalBill: CMakeFiles/HospitalBill.dir/src/patientType.cpp.o
HospitalBill: CMakeFiles/HospitalBill.dir/src/personType.cpp.o
HospitalBill: CMakeFiles/HospitalBill.dir/build.make
HospitalBill: CMakeFiles/HospitalBill.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable HospitalBill"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HospitalBill.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HospitalBill.dir/build: HospitalBill

.PHONY : CMakeFiles/HospitalBill.dir/build

CMakeFiles/HospitalBill.dir/requires: CMakeFiles/HospitalBill.dir/src/chap11_ex.cpp.o.requires
CMakeFiles/HospitalBill.dir/requires: CMakeFiles/HospitalBill.dir/src/billType.cpp.o.requires
CMakeFiles/HospitalBill.dir/requires: CMakeFiles/HospitalBill.dir/src/dateType.cpp.o.requires
CMakeFiles/HospitalBill.dir/requires: CMakeFiles/HospitalBill.dir/src/doctorType.cpp.o.requires
CMakeFiles/HospitalBill.dir/requires: CMakeFiles/HospitalBill.dir/src/patientType.cpp.o.requires
CMakeFiles/HospitalBill.dir/requires: CMakeFiles/HospitalBill.dir/src/personType.cpp.o.requires

.PHONY : CMakeFiles/HospitalBill.dir/requires

CMakeFiles/HospitalBill.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HospitalBill.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HospitalBill.dir/clean

CMakeFiles/HospitalBill.dir/depend:
	cd /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scratch/nhuongmh/tcpp/chapter11_cppFrom /home/scratch/nhuongmh/tcpp/chapter11_cppFrom /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build /home/scratch/nhuongmh/tcpp/chapter11_cppFrom/build/CMakeFiles/HospitalBill.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HospitalBill.dir/depend
