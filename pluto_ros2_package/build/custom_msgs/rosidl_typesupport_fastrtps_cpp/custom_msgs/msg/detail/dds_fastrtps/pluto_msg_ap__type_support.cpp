// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/PlutoMsgAP.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/pluto_msg_ap__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/pluto_msg_ap__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_serialize(
  const custom_msgs::msg::PlutoMsgAP & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rc_roll
  cdr << ros_message.rc_roll;
  // Member: rc_pitch
  cdr << ros_message.rc_pitch;
  // Member: rc_yaw
  cdr << ros_message.rc_yaw;
  // Member: rc_throttle
  cdr << ros_message.rc_throttle;
  // Member: pluto_index
  cdr << ros_message.pluto_index;
  // Member: command_type
  cdr << ros_message.command_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::PlutoMsgAP & ros_message)
{
  // Member: rc_roll
  cdr >> ros_message.rc_roll;

  // Member: rc_pitch
  cdr >> ros_message.rc_pitch;

  // Member: rc_yaw
  cdr >> ros_message.rc_yaw;

  // Member: rc_throttle
  cdr >> ros_message.rc_throttle;

  // Member: pluto_index
  cdr >> ros_message.pluto_index;

  // Member: command_type
  cdr >> ros_message.command_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::PlutoMsgAP & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rc_roll
  {
    size_t item_size = sizeof(ros_message.rc_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_pitch
  {
    size_t item_size = sizeof(ros_message.rc_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_yaw
  {
    size_t item_size = sizeof(ros_message.rc_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_throttle
  {
    size_t item_size = sizeof(ros_message.rc_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pluto_index
  {
    size_t item_size = sizeof(ros_message.pluto_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: command_type
  {
    size_t item_size = sizeof(ros_message.command_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_PlutoMsgAP(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: rc_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pluto_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: command_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _PlutoMsgAP__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::PlutoMsgAP *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlutoMsgAP__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::PlutoMsgAP *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlutoMsgAP__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::PlutoMsgAP *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlutoMsgAP__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PlutoMsgAP(full_bounded, 0);
}

static message_type_support_callbacks_t _PlutoMsgAP__callbacks = {
  "custom_msgs::msg",
  "PlutoMsgAP",
  _PlutoMsgAP__cdr_serialize,
  _PlutoMsgAP__cdr_deserialize,
  _PlutoMsgAP__get_serialized_size,
  _PlutoMsgAP__max_serialized_size
};

static rosidl_message_type_support_t _PlutoMsgAP__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlutoMsgAP__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs::msg::PlutoMsgAP>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_PlutoMsgAP__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, PlutoMsgAP)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_PlutoMsgAP__handle;
}

#ifdef __cplusplus
}
#endif
