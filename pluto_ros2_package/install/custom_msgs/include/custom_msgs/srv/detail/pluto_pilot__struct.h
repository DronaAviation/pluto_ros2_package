// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:srv/PlutoPilot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PLUTO_PILOT__STRUCT_H_
#define CUSTOM_MSGS__SRV__DETAIL__PLUTO_PILOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/PlutoPilot in the package custom_msgs.
typedef struct custom_msgs__srv__PlutoPilot_Request
{
  int32_t roll;
  int32_t pitch;
  int32_t yaw;
  float acc_x;
  float acc_y;
  float acc_z;
  float gyro_x;
  float gyro_y;
  float gyro_z;
  float mag_x;
  float mag_y;
  float mag_z;
  float alt;
  float battery;
  int32_t rssi;
} custom_msgs__srv__PlutoPilot_Request;

// Struct for a sequence of custom_msgs__srv__PlutoPilot_Request.
typedef struct custom_msgs__srv__PlutoPilot_Request__Sequence
{
  custom_msgs__srv__PlutoPilot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__PlutoPilot_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/PlutoPilot in the package custom_msgs.
typedef struct custom_msgs__srv__PlutoPilot_Response
{
  int64_t rc_roll;
  int64_t rc_pitch;
  int64_t rc_yaw;
  int64_t rc_throttle;
  int64_t rc_aux1;
  int64_t rc_aux2;
  int64_t rc_aux3;
  int64_t rc_aux4;
} custom_msgs__srv__PlutoPilot_Response;

// Struct for a sequence of custom_msgs__srv__PlutoPilot_Response.
typedef struct custom_msgs__srv__PlutoPilot_Response__Sequence
{
  custom_msgs__srv__PlutoPilot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__PlutoPilot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__SRV__DETAIL__PLUTO_PILOT__STRUCT_H_
