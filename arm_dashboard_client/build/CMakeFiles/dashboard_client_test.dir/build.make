# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/test_user/usc-arm-calibration/arm_dashboard_client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/test_user/usc-arm-calibration/arm_dashboard_client/build

# Include any dependencies generated for this target.
include CMakeFiles/dashboard_client_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dashboard_client_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dashboard_client_test.dir/flags.make

CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: CMakeFiles/dashboard_client_test.dir/flags.make
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: ../test/dashboard_client_test.cpp
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: ../manifest.xml
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: /opt/ros/fuerte/share/roslang/manifest.xml
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: /opt/ros/fuerte/share/roscpp/manifest.xml
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: /opt/ros/fuerte/share/rospy/manifest.xml
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: /home/test_user/usc-arm-calibration/arm_msgs/manifest.xml
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: /home/test_user/usc-arm-calibration/SafetyLight_msgs/manifest.xml
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: /home/test_user/usc-arm-calibration/arm_msgs/msg_gen/generated
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: /home/test_user/usc-arm-calibration/arm_msgs/srv_gen/generated
CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o: /home/test_user/usc-arm-calibration/SafetyLight_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/test_user/usc-arm-calibration/arm_dashboard_client/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o -c /home/test_user/usc-arm-calibration/arm_dashboard_client/test/dashboard_client_test.cpp

CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/test_user/usc-arm-calibration/arm_dashboard_client/test/dashboard_client_test.cpp > CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.i

CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/test_user/usc-arm-calibration/arm_dashboard_client/test/dashboard_client_test.cpp -o CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.s

CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o.requires:
.PHONY : CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o.requires

CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o.provides: CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o.requires
	$(MAKE) -f CMakeFiles/dashboard_client_test.dir/build.make CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o.provides.build
.PHONY : CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o.provides

CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o.provides.build: CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o

# Object files for target dashboard_client_test
dashboard_client_test_OBJECTS = \
"CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o"

# External object files for target dashboard_client_test
dashboard_client_test_EXTERNAL_OBJECTS =

../bin/dashboard_client_test: CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o
../bin/dashboard_client_test: ../lib/libarm_dashboard_client.so
../bin/dashboard_client_test: CMakeFiles/dashboard_client_test.dir/build.make
../bin/dashboard_client_test: CMakeFiles/dashboard_client_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/dashboard_client_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dashboard_client_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dashboard_client_test.dir/build: ../bin/dashboard_client_test
.PHONY : CMakeFiles/dashboard_client_test.dir/build

CMakeFiles/dashboard_client_test.dir/requires: CMakeFiles/dashboard_client_test.dir/test/dashboard_client_test.o.requires
.PHONY : CMakeFiles/dashboard_client_test.dir/requires

CMakeFiles/dashboard_client_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dashboard_client_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dashboard_client_test.dir/clean

CMakeFiles/dashboard_client_test.dir/depend:
	cd /home/test_user/usc-arm-calibration/arm_dashboard_client/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/test_user/usc-arm-calibration/arm_dashboard_client /home/test_user/usc-arm-calibration/arm_dashboard_client /home/test_user/usc-arm-calibration/arm_dashboard_client/build /home/test_user/usc-arm-calibration/arm_dashboard_client/build /home/test_user/usc-arm-calibration/arm_dashboard_client/build/CMakeFiles/dashboard_client_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dashboard_client_test.dir/depend

