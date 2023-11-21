// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/PlutoMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PlutoMsg in the package custom_msgs.
typedef struct custom_msgs__msg__PlutoMsg
{
  int64_t rc_roll;
  int64_t rc_pitch;
  int64_t rc_yaw;
  int64_t rc_throttle;
  int64_t rc_aux1;
  int64_t rc_aux2;
  int64_t rc_aux3;
  int64_t rc_aux4;
  int64_t pluto_index;
  int8_t command_type;
  int8_t trim_roll;
  int8_t trim_pitch;
  bool is_auto_pilot_on;
} custom_msgs__msg__PlutoMsg;

// Struct for a sequence of custom_msgs__msg__PlutoMsg.
typedef struct custom_msgs__msg__PlutoMsg__Sequence
{
  custom_msgs__msg__PlutoMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__PlutoMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG__STRUCT_H_
