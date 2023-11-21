// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/PlutoMsgAP.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/pluto_msg_ap__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/pluto_msg_ap__functions.h"
#include "custom_msgs/msg/detail/pluto_msg_ap__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__PlutoMsgAP__init(message_memory);
}

void PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_fini_function(void * message_memory)
{
  custom_msgs__msg__PlutoMsgAP__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_message_member_array[6] = {
  {
    "rc_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__PlutoMsgAP, rc_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rc_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__PlutoMsgAP, rc_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rc_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__PlutoMsgAP, rc_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rc_throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__PlutoMsgAP, rc_throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pluto_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__PlutoMsgAP, pluto_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__PlutoMsgAP, command_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_message_members = {
  "custom_msgs__msg",  // message namespace
  "PlutoMsgAP",  // message name
  6,  // number of fields
  sizeof(custom_msgs__msg__PlutoMsgAP),
  PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_message_member_array,  // message members
  PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_init_function,  // function to initialize message memory (memory has to be allocated)
  PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_message_type_support_handle = {
  0,
  &PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, PlutoMsgAP)() {
  if (!PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_message_type_support_handle.typesupport_identifier) {
    PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PlutoMsgAP__rosidl_typesupport_introspection_c__PlutoMsgAP_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
