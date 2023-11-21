// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/PlutoMsgAP.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG_AP__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG_AP__BUILDER_HPP_

#include "custom_msgs/msg/detail/pluto_msg_ap__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_PlutoMsgAP_command_type
{
public:
  explicit Init_PlutoMsgAP_command_type(::custom_msgs::msg::PlutoMsgAP & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::PlutoMsgAP command_type(::custom_msgs::msg::PlutoMsgAP::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsgAP msg_;
};

class Init_PlutoMsgAP_pluto_index
{
public:
  explicit Init_PlutoMsgAP_pluto_index(::custom_msgs::msg::PlutoMsgAP & msg)
  : msg_(msg)
  {}
  Init_PlutoMsgAP_command_type pluto_index(::custom_msgs::msg::PlutoMsgAP::_pluto_index_type arg)
  {
    msg_.pluto_index = std::move(arg);
    return Init_PlutoMsgAP_command_type(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsgAP msg_;
};

class Init_PlutoMsgAP_rc_throttle
{
public:
  explicit Init_PlutoMsgAP_rc_throttle(::custom_msgs::msg::PlutoMsgAP & msg)
  : msg_(msg)
  {}
  Init_PlutoMsgAP_pluto_index rc_throttle(::custom_msgs::msg::PlutoMsgAP::_rc_throttle_type arg)
  {
    msg_.rc_throttle = std::move(arg);
    return Init_PlutoMsgAP_pluto_index(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsgAP msg_;
};

class Init_PlutoMsgAP_rc_yaw
{
public:
  explicit Init_PlutoMsgAP_rc_yaw(::custom_msgs::msg::PlutoMsgAP & msg)
  : msg_(msg)
  {}
  Init_PlutoMsgAP_rc_throttle rc_yaw(::custom_msgs::msg::PlutoMsgAP::_rc_yaw_type arg)
  {
    msg_.rc_yaw = std::move(arg);
    return Init_PlutoMsgAP_rc_throttle(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsgAP msg_;
};

class Init_PlutoMsgAP_rc_pitch
{
public:
  explicit Init_PlutoMsgAP_rc_pitch(::custom_msgs::msg::PlutoMsgAP & msg)
  : msg_(msg)
  {}
  Init_PlutoMsgAP_rc_yaw rc_pitch(::custom_msgs::msg::PlutoMsgAP::_rc_pitch_type arg)
  {
    msg_.rc_pitch = std::move(arg);
    return Init_PlutoMsgAP_rc_yaw(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsgAP msg_;
};

class Init_PlutoMsgAP_rc_roll
{
public:
  Init_PlutoMsgAP_rc_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlutoMsgAP_rc_pitch rc_roll(::custom_msgs::msg::PlutoMsgAP::_rc_roll_type arg)
  {
    msg_.rc_roll = std::move(arg);
    return Init_PlutoMsgAP_rc_pitch(msg_);
  }

private:
  ::custom_msgs::msg::PlutoMsgAP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::PlutoMsgAP>()
{
  return custom_msgs::msg::builder::Init_PlutoMsgAP_rc_roll();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG_AP__BUILDER_HPP_
