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
CMAKE_SOURCE_DIR = /home/amegh/ip/Day3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/amegh/ip/Day3

# Include any dependencies generated for this target.
include CMakeFiles/a.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a.out.dir/flags.make

CMakeFiles/a.out.dir/canny.o: CMakeFiles/a.out.dir/flags.make
CMakeFiles/a.out.dir/canny.o: canny.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/amegh/ip/Day3/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/a.out.dir/canny.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/a.out.dir/canny.o -c /home/amegh/ip/Day3/canny.cpp

CMakeFiles/a.out.dir/canny.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.dir/canny.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/amegh/ip/Day3/canny.cpp > CMakeFiles/a.out.dir/canny.i

CMakeFiles/a.out.dir/canny.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.dir/canny.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/amegh/ip/Day3/canny.cpp -o CMakeFiles/a.out.dir/canny.s

CMakeFiles/a.out.dir/canny.o.requires:
.PHONY : CMakeFiles/a.out.dir/canny.o.requires

CMakeFiles/a.out.dir/canny.o.provides: CMakeFiles/a.out.dir/canny.o.requires
	$(MAKE) -f CMakeFiles/a.out.dir/build.make CMakeFiles/a.out.dir/canny.o.provides.build
.PHONY : CMakeFiles/a.out.dir/canny.o.provides

CMakeFiles/a.out.dir/canny.o.provides.build: CMakeFiles/a.out.dir/canny.o

# Object files for target a.out
a_out_OBJECTS = \
"CMakeFiles/a.out.dir/canny.o"

# External object files for target a.out
a_out_EXTERNAL_OBJECTS =

a.out: CMakeFiles/a.out.dir/canny.o
a.out: CMakeFiles/a.out.dir/build.make
a.out: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
a.out: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
a.out: CMakeFiles/a.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable a.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a.out.dir/build: a.out
.PHONY : CMakeFiles/a.out.dir/build

CMakeFiles/a.out.dir/requires: CMakeFiles/a.out.dir/canny.o.requires
.PHONY : CMakeFiles/a.out.dir/requires

CMakeFiles/a.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a.out.dir/clean

CMakeFiles/a.out.dir/depend:
	cd /home/amegh/ip/Day3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/amegh/ip/Day3 /home/amegh/ip/Day3 /home/amegh/ip/Day3 /home/amegh/ip/Day3 /home/amegh/ip/Day3/CMakeFiles/a.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a.out.dir/depend

