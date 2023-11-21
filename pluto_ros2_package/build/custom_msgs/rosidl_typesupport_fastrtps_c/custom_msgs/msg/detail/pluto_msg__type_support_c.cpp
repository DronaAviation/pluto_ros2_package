// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/PlutoMsg.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/pluto_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/pluto_msg__struct.h"
#include "custom_msgs/msg/detail/pluto_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PlutoMsg__ros_msg_type = custom_msgs__msg__PlutoMsg;

static bool _PlutoMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlutoMsg__ros_msg_type * ros_message = static_cast<const _PlutoMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: rc_roll
  {
    cdr << ros_message->rc_roll;
  }

  // Field name: rc_pitch
  {
    cdr << ros_message->rc_pitch;
  }

  // Field name: rc_yaw
  {
    cdr << ros_message->rc_yaw;
  }

  // Field name: rc_throttle
  {
    cdr << ros_message->rc_throttle;
  }

  // Field name: rc_aux1
  {
    cdr << ros_message->rc_aux1;
  }

  // Field name: rc_aux2
  {
    cdr << ros_message->rc_aux2;
  }

  // Field name: rc_aux3
  {
    cdr << ros_message->rc_aux3;
  }

  // Field name: rc_aux4
  {
    cdr << ros_message->rc_aux4;
  }

  // Field name: pluto_index
  {
    cdr << ros_message->pluto_index;
  }

  // Field name: command_type
  {
    cdr << ros_message->command_type;
  }

  // Field name: trim_roll
  {
    cdr << ros_message->trim_roll;
  }

  // Field name: trim_pitch
  {
    cdr << ros_message->trim_pitch;
  }

  // Field name: is_auto_pilot_on
  {
    cdr << (ros_message->is_auto_pilot_on ? true : false);
  }

  return true;
}

static bool _PlutoMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlutoMsg__ros_msg_type * ros_message = static_cast<_PlutoMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: rc_roll
  {
    cdr >> ros_message->rc_roll;
  }

  // Field name: rc_pitch
  {
    cdr >> ros_message->rc_pitch;
  }

  // Field name: rc_yaw
  {
    cdr >> ros_message->rc_yaw;
  }

  // Field name: rc_throttle
  {
    cdr >> ros_message->rc_throttle;
  }

  // Field name: rc_aux1
  {
    cdr >> ros_message->rc_aux1;
  }

  // Field name: rc_aux2
  {
    cdr >> ros_message->rc_aux2;
  }

  // Field name: rc_aux3
  {
    cdr >> ros_message->rc_aux3;
  }

  // Field name: rc_aux4
  {
    cdr >> ros_message->rc_aux4;
  }

  // Field name: pluto_index
  {
    cdr >> ros_message->pluto_index;
  }

  // Field name: command_type
  {
    cdr >> ros_message->command_type;
  }

  // Field name: trim_roll
  {
    cdr >> ros_message->trim_roll;
  }

  // Field name: trim_pitch
  {
    cdr >> ros_message->trim_pitch;
  }

  // Field name: is_auto_pilot_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_auto_pilot_on = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__PlutoMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlutoMsg__ros_msg_type * ros_message = static_cast<const _PlutoMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rc_roll
  {
    size_t item_size = sizeof(ros_message->rc_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_pitch
  {
    size_t item_size = sizeof(ros_message->rc_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_yaw
  {
    size_t item_size = sizeof(ros_message->rc_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_throttle
  {
    size_t item_size = sizeof(ros_message->rc_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_aux1
  {
    size_t item_size = sizeof(ros_message->rc_aux1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_aux2
  {
    size_t item_size = sizeof(ros_message->rc_aux2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_aux3
  {
    size_t item_size = sizeof(ros_message->rc_aux3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_aux4
  {
    size_t item_size = sizeof(ros_message->rc_aux4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pluto_index
  {
    size_t item_size = sizeof(ros_message->pluto_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name command_type
  {
    size_t item_size = sizeof(ros_message->command_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trim_roll
  {
    size_t item_size = sizeof(ros_message->trim_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trim_pitch
  {
    size_t item_size = sizeof(ros_message->trim_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_auto_pilot_on
  {
    size_t item_size = sizeof(ros_message->is_auto_pilot_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlutoMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__PlutoMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__PlutoMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rc_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_aux1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_aux2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_aux3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_aux4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pluto_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: command_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trim_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trim_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_auto_pilot_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PlutoMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__PlutoMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlutoMsg = {
  "custom_msgs::msg",
  "PlutoMsg",
  _PlutoMsg__cdr_serialize,
  _PlutoMsg__cdr_deserialize,
  _PlutoMsg__get_serialized_size,
  _PlutoMsg__max_serialized_size
};

static rosidl_message_type_support_t _PlutoMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlutoMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, PlutoMsg)() {
  return &_PlutoMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
