// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/PlutoMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG__BUILDER_HPP_

#include "custom_msgs/msg/detail/pluto_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_PlutoMsg_is_auto_pilot_on
{
public:
  explicit Init_PlutoMsg_is_auto_pilot_on(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::PlutoMsg is_auto_pilot_on(::custom_msgs::msg::PlutoMsg::_is_auto_pilot_on_type arg)
  {
    msg_.is_auto_pilot_on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_trim_pitch
{
public:
  explicit Init_PlutoMsg_trim_pitch(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_is_auto_pilot_on trim_pitch(::custom_msgs::msg::PlutoMsg::_trim_pitch_type arg)
  {
    msg_.trim_pitch = std::move(arg);
    return Init_PlutoMsg_is_auto_pilot_on(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_trim_roll
{
public:
  explicit Init_PlutoMsg_trim_roll(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_trim_pitch trim_roll(::custom_msgs::msg::PlutoMsg::_trim_roll_type arg)
  {
    msg_.trim_roll = std::move(arg);
    return Init_PlutoMsg_trim_pitch(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_command_type
{
public:
  explicit Init_PlutoMsg_command_type(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_trim_roll command_type(::custom_msgs::msg::PlutoMsg::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return Init_PlutoMsg_trim_roll(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_pluto_index
{
public:
  explicit Init_PlutoMsg_pluto_index(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_command_type pluto_index(::custom_msgs::msg::PlutoMsg::_pluto_index_type arg)
  {
    msg_.pluto_index = std::move(arg);
    return Init_PlutoMsg_command_type(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_rc_aux4
{
public:
  explicit Init_PlutoMsg_rc_aux4(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_pluto_index rc_aux4(::custom_msgs::msg::PlutoMsg::_rc_aux4_type arg)
  {
    msg_.rc_aux4 = std::move(arg);
    return Init_PlutoMsg_pluto_index(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_rc_aux3
{
public:
  explicit Init_PlutoMsg_rc_aux3(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_rc_aux4 rc_aux3(::custom_msgs::msg::PlutoMsg::_rc_aux3_type arg)
  {
    msg_.rc_aux3 = std::move(arg);
    return Init_PlutoMsg_rc_aux4(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_rc_aux2
{
public:
  explicit Init_PlutoMsg_rc_aux2(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_rc_aux3 rc_aux2(::custom_msgs::msg::PlutoMsg::_rc_aux2_type arg)
  {
    msg_.rc_aux2 = std::move(arg);
    return Init_PlutoMsg_rc_aux3(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_rc_aux1
{
public:
  explicit Init_PlutoMsg_rc_aux1(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_rc_aux2 rc_aux1(::custom_msgs::msg::PlutoMsg::_rc_aux1_type arg)
  {
    msg_.rc_aux1 = std::move(arg);
    return Init_PlutoMsg_rc_aux2(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_rc_throttle
{
public:
  explicit Init_PlutoMsg_rc_throttle(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_rc_aux1 rc_throttle(::custom_msgs::msg::PlutoMsg::_rc_throttle_type arg)
  {
    msg_.rc_throttle = std::move(arg);
    return Init_PlutoMsg_rc_aux1(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_rc_yaw
{
public:
  explicit Init_PlutoMsg_rc_yaw(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_rc_throttle rc_yaw(::custom_msgs::msg::PlutoMsg::_rc_yaw_type arg)
  {
    msg_.rc_yaw = std::move(arg);
    return Init_PlutoMsg_rc_throttle(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_rc_pitch
{
public:
  explicit Init_PlutoMsg_rc_pitch(::custom_msgs::msg::PlutoMsg & msg)
  : msg_(msg)
  {}
  Init_PlutoMsg_rc_yaw rc_pitch(::custom_msgs::msg::PlutoMsg::_rc_pitch_type arg)
  {
    msg_.rc_pitch = std::move(arg);
    return Init_PlutoMsg_rc_yaw(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

class Init_PlutoMsg_rc_roll
{
public:
  Init_PlutoMsg_rc_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlutoMsg_rc_pitch rc_roll(::custom_msgs::msg::PlutoMsg::_rc_roll_type arg)
  {
    msg_.rc_roll = std::move(arg);
    return Init_PlutoMsg_rc_pitch(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::PlutoMsg>()
{
  return custom_msgs::msg::builder::Init_PlutoMsg_rc_roll();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG__BUILDER_HPP_
