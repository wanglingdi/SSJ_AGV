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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ssj/ros_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ssj/ros_ws/build

# Include any dependencies generated for this target.
include serial_comm/CMakeFiles/comm_read.dir/depend.make

# Include the progress variables for this target.
include serial_comm/CMakeFiles/comm_read.dir/progress.make

# Include the compile flags for this target's objects.
include serial_comm/CMakeFiles/comm_read.dir/flags.make

serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o: serial_comm/CMakeFiles/comm_read.dir/flags.make
serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o: /home/ssj/ros_ws/src/serial_comm/src/comm_read.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ssj/ros_ws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o"
	cd /home/ssj/ros_ws/build/serial_comm && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/comm_read.dir/src/comm_read.cpp.o -c /home/ssj/ros_ws/src/serial_comm/src/comm_read.cpp

serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comm_read.dir/src/comm_read.cpp.i"
	cd /home/ssj/ros_ws/build/serial_comm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ssj/ros_ws/src/serial_comm/src/comm_read.cpp > CMakeFiles/comm_read.dir/src/comm_read.cpp.i

serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comm_read.dir/src/comm_read.cpp.s"
	cd /home/ssj/ros_ws/build/serial_comm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ssj/ros_ws/src/serial_comm/src/comm_read.cpp -o CMakeFiles/comm_read.dir/src/comm_read.cpp.s

serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o.requires:
.PHONY : serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o.requires

serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o.provides: serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o.requires
	$(MAKE) -f serial_comm/CMakeFiles/comm_read.dir/build.make serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o.provides.build
.PHONY : serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o.provides

serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o.provides.build: serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o

serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o: serial_comm/CMakeFiles/comm_read.dir/flags.make
serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o: /home/ssj/ros_ws/src/serial_comm/src/comm_read_node.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ssj/ros_ws/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o"
	cd /home/ssj/ros_ws/build/serial_comm && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o -c /home/ssj/ros_ws/src/serial_comm/src/comm_read_node.cpp

serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/comm_read.dir/src/comm_read_node.cpp.i"
	cd /home/ssj/ros_ws/build/serial_comm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ssj/ros_ws/src/serial_comm/src/comm_read_node.cpp > CMakeFiles/comm_read.dir/src/comm_read_node.cpp.i

serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/comm_read.dir/src/comm_read_node.cpp.s"
	cd /home/ssj/ros_ws/build/serial_comm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ssj/ros_ws/src/serial_comm/src/comm_read_node.cpp -o CMakeFiles/comm_read.dir/src/comm_read_node.cpp.s

serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o.requires:
.PHONY : serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o.requires

serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o.provides: serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o.requires
	$(MAKE) -f serial_comm/CMakeFiles/comm_read.dir/build.make serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o.provides.build
.PHONY : serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o.provides

serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o.provides.build: serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o

# Object files for target comm_read
comm_read_OBJECTS = \
"CMakeFiles/comm_read.dir/src/comm_read.cpp.o" \
"CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o"

# External object files for target comm_read
comm_read_EXTERNAL_OBJECTS =

/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: serial_comm/CMakeFiles/comm_read.dir/build.make
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /opt/ros/indigo/lib/libroscpp.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /opt/ros/indigo/lib/librosconsole.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/lib/liblog4cxx.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /opt/ros/indigo/lib/librostime.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /opt/ros/indigo/lib/libcpp_common.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_text.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_imgcodecs.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_tracking.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_freetype.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_core.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_xphoto.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_ximgproc.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_phase_unwrapping.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_face.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_plot.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_highgui.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_superres.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_features2d.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_stitching.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_imgproc.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_fuzzy.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_surface_matching.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_structured_light.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_line_descriptor.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_aruco.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_dnn.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_rgbd.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_bgsegm.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_ccalib.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_viz.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_objdetect.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_ml.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_reg.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_shape.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_bioinspired.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_video.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_calib3d.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_img_hash.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_xobjdetect.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_saliency.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_photo.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_datasets.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_stereo.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_optflow.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_videostab.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_xfeatures2d.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_dpm.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_videoio.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: /usr/local/lib/libopencv_flann.so
/home/ssj/ros_ws/devel/lib/serial_comm/comm_read: serial_comm/CMakeFiles/comm_read.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/ssj/ros_ws/devel/lib/serial_comm/comm_read"
	cd /home/ssj/ros_ws/build/serial_comm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/comm_read.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
serial_comm/CMakeFiles/comm_read.dir/build: /home/ssj/ros_ws/devel/lib/serial_comm/comm_read
.PHONY : serial_comm/CMakeFiles/comm_read.dir/build

serial_comm/CMakeFiles/comm_read.dir/requires: serial_comm/CMakeFiles/comm_read.dir/src/comm_read.cpp.o.requires
serial_comm/CMakeFiles/comm_read.dir/requires: serial_comm/CMakeFiles/comm_read.dir/src/comm_read_node.cpp.o.requires
.PHONY : serial_comm/CMakeFiles/comm_read.dir/requires

serial_comm/CMakeFiles/comm_read.dir/clean:
	cd /home/ssj/ros_ws/build/serial_comm && $(CMAKE_COMMAND) -P CMakeFiles/comm_read.dir/cmake_clean.cmake
.PHONY : serial_comm/CMakeFiles/comm_read.dir/clean

serial_comm/CMakeFiles/comm_read.dir/depend:
	cd /home/ssj/ros_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ssj/ros_ws/src /home/ssj/ros_ws/src/serial_comm /home/ssj/ros_ws/build /home/ssj/ros_ws/build/serial_comm /home/ssj/ros_ws/build/serial_comm/CMakeFiles/comm_read.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : serial_comm/CMakeFiles/comm_read.dir/depend

