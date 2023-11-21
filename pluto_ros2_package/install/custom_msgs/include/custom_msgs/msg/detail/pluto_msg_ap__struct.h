// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/PlutoMsgAP.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG_AP__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG_AP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PlutoMsgAP in the package custom_msgs.
typedef struct custom_msgs__msg__PlutoMsgAP
{
  int64_t rc_roll;
  int64_t rc_pitch;
  int64_t rc_yaw;
  int64_t rc_throttle;
  int64_t pluto_index;
  int8_t command_type;
} custom_msgs__msg__PlutoMsgAP;

// Struct for a sequence of custom_msgs__msg__PlutoMsgAP.
typedef struct custom_msgs__msg__PlutoMsgAP__Sequence
{
  custom_msgs__msg__PlutoMsgAP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__PlutoMsgAP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG_AP__STRUCT_H_
