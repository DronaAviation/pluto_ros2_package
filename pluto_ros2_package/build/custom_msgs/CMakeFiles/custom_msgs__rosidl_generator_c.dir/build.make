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
CMAKE_SOURCE_DIR = /home/malay/pluto_ros2/src/pluto-ros2-package/custom_msgs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs

# Include any dependencies generated for this target.
include CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/custom_msgs__rosidl_generator_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/custom_msgs__rosidl_generator_c.dir/flags.make

rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/lib/rosidl_generator_c/rosidl_generator_c
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/lib/python3.8/site-packages/rosidl_generator_c/__init__.py
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/action__type_support.h.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl.h.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__functions.c.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__functions.h.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__struct.h.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__type_support.h.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__functions.c.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__functions.h.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__struct.h.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__type_support.h.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: /opt/ros/foxy/share/rosidl_generator_c/resource/srv__type_support.h.em
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: rosidl_adapter/custom_msgs/msg/PlutoMsg.idl
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: rosidl_adapter/custom_msgs/msg/PlutoMsgAP.idl
rosidl_generator_c/custom_msgs/msg/pluto_msg.h: rosidl_adapter/custom_msgs/srv/PlutoPilot.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C code for ROS interfaces"
	/usr/bin/python3 /opt/ros/foxy/share/rosidl_generator_c/cmake/../../../lib/rosidl_generator_c/rosidl_generator_c --generator-arguments-file /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c__arguments.json

rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.h

rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__struct.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__struct.h

rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__type_support.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__type_support.h

rosidl_generator_c/custom_msgs/msg/pluto_msg_ap.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/msg/pluto_msg_ap.h

rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.h

rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__struct.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__struct.h

rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__type_support.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__type_support.h

rosidl_generator_c/custom_msgs/srv/pluto_pilot.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/srv/pluto_pilot.h

rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.h

rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__struct.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__struct.h

rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__type_support.h: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__type_support.h

rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c

rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c

rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c

CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.o: CMakeFiles/custom_msgs__rosidl_generator_c.dir/flags.make
CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.o: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.o"
	/usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.o   -c /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c

CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.i"
	/usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c > CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.i

CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.s"
	/usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c -o CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.s

CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.o: CMakeFiles/custom_msgs__rosidl_generator_c.dir/flags.make
CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.o: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.o"
	/usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.o   -c /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c

CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.i"
	/usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c > CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.i

CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.s"
	/usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c -o CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.s

CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.o: CMakeFiles/custom_msgs__rosidl_generator_c.dir/flags.make
CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.o: rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.o"
	/usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.o   -c /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c

CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.i"
	/usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c > CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.i

CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.s"
	/usr/lib/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c -o CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.s

# Object files for target custom_msgs__rosidl_generator_c
custom_msgs__rosidl_generator_c_OBJECTS = \
"CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.o" \
"CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.o" \
"CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.o"

# External object files for target custom_msgs__rosidl_generator_c
custom_msgs__rosidl_generator_c_EXTERNAL_OBJECTS =

libcustom_msgs__rosidl_generator_c.so: CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c.o
libcustom_msgs__rosidl_generator_c.so: CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c.o
libcustom_msgs__rosidl_generator_c.so: CMakeFiles/custom_msgs__rosidl_generator_c.dir/rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c.o
libcustom_msgs__rosidl_generator_c.so: CMakeFiles/custom_msgs__rosidl_generator_c.dir/build.make
libcustom_msgs__rosidl_generator_c.so: /opt/ros/foxy/lib/librosidl_runtime_c.so
libcustom_msgs__rosidl_generator_c.so: /opt/ros/foxy/lib/librcutils.so
libcustom_msgs__rosidl_generator_c.so: CMakeFiles/custom_msgs__rosidl_generator_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C shared library libcustom_msgs__rosidl_generator_c.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/custom_msgs__rosidl_generator_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/custom_msgs__rosidl_generator_c.dir/build: libcustom_msgs__rosidl_generator_c.so

.PHONY : CMakeFiles/custom_msgs__rosidl_generator_c.dir/build

CMakeFiles/custom_msgs__rosidl_generator_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/custom_msgs__rosidl_generator_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/custom_msgs__rosidl_generator_c.dir/clean

CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/pluto_msg.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__struct.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__type_support.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/pluto_msg_ap.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__struct.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__type_support.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/srv/pluto_pilot.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__struct.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__type_support.h
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg__functions.c
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/msg/detail/pluto_msg_ap__functions.c
CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend: rosidl_generator_c/custom_msgs/srv/detail/pluto_pilot__functions.c
	cd /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/malay/pluto_ros2/src/pluto-ros2-package/custom_msgs /home/malay/pluto_ros2/src/pluto-ros2-package/custom_msgs /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs /home/malay/pluto_ros2/src/pluto-ros2-package/build/custom_msgs/CMakeFiles/custom_msgs__rosidl_generator_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/custom_msgs__rosidl_generator_c.dir/depend

