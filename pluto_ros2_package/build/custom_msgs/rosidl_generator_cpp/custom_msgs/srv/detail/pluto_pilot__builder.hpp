// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/PlutoPilot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PLUTO_PILOT__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__PLUTO_PILOT__BUILDER_HPP_

#include "custom_msgs/srv/detail/pluto_pilot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_PlutoPilot_Request_rssi
{
public:
  explicit Init_PlutoPilot_Request_rssi(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::PlutoPilot_Request rssi(::custom_msgs::srv::PlutoPilot_Request::_rssi_type arg)
  {
    msg_.rssi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_battery
{
public:
  explicit Init_PlutoPilot_Request_battery(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_rssi battery(::custom_msgs::srv::PlutoPilot_Request::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_PlutoPilot_Request_rssi(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_alt
{
public:
  explicit Init_PlutoPilot_Request_alt(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_battery alt(::custom_msgs::srv::PlutoPilot_Request::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_PlutoPilot_Request_battery(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_mag_z
{
public:
  explicit Init_PlutoPilot_Request_mag_z(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_alt mag_z(::custom_msgs::srv::PlutoPilot_Request::_mag_z_type arg)
  {
    msg_.mag_z = std::move(arg);
    return Init_PlutoPilot_Request_alt(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_mag_y
{
public:
  explicit Init_PlutoPilot_Request_mag_y(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_mag_z mag_y(::custom_msgs::srv::PlutoPilot_Request::_mag_y_type arg)
  {
    msg_.mag_y = std::move(arg);
    return Init_PlutoPilot_Request_mag_z(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_mag_x
{
public:
  explicit Init_PlutoPilot_Request_mag_x(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_mag_y mag_x(::custom_msgs::srv::PlutoPilot_Request::_mag_x_type arg)
  {
    msg_.mag_x = std::move(arg);
    return Init_PlutoPilot_Request_mag_y(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_gyro_z
{
public:
  explicit Init_PlutoPilot_Request_gyro_z(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_mag_x gyro_z(::custom_msgs::srv::PlutoPilot_Request::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return Init_PlutoPilot_Request_mag_x(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_gyro_y
{
public:
  explicit Init_PlutoPilot_Request_gyro_y(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_gyro_z gyro_y(::custom_msgs::srv::PlutoPilot_Request::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_PlutoPilot_Request_gyro_z(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_gyro_x
{
public:
  explicit Init_PlutoPilot_Request_gyro_x(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_gyro_y gyro_x(::custom_msgs::srv::PlutoPilot_Request::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_PlutoPilot_Request_gyro_y(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_acc_z
{
public:
  explicit Init_PlutoPilot_Request_acc_z(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_gyro_x acc_z(::custom_msgs::srv::PlutoPilot_Request::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return Init_PlutoPilot_Request_gyro_x(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_acc_y
{
public:
  explicit Init_PlutoPilot_Request_acc_y(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_acc_z acc_y(::custom_msgs::srv::PlutoPilot_Request::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_PlutoPilot_Request_acc_z(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_acc_x
{
public:
  explicit Init_PlutoPilot_Request_acc_x(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_acc_y acc_x(::custom_msgs::srv::PlutoPilot_Request::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_PlutoPilot_Request_acc_y(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_yaw
{
public:
  explicit Init_PlutoPilot_Request_yaw(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_acc_x yaw(::custom_msgs::srv::PlutoPilot_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_PlutoPilot_Request_acc_x(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_pitch
{
public:
  explicit Init_PlutoPilot_Request_pitch(::custom_msgs::srv::PlutoPilot_Request & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Request_yaw pitch(::custom_msgs::srv::PlutoPilot_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_PlutoPilot_Request_yaw(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

class Init_PlutoPilot_Request_roll
{
public:
  Init_PlutoPilot_Request_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlutoPilot_Request_pitch roll(::custom_msgs::srv::PlutoPilot_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_PlutoPilot_Request_pitch(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::PlutoPilot_Request>()
{
  return custom_msgs::srv::builder::Init_PlutoPilot_Request_roll();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_PlutoPilot_Response_rc_aux4
{
public:
  explicit Init_PlutoPilot_Response_rc_aux4(::custom_msgs::srv::PlutoPilot_Response & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::PlutoPilot_Response rc_aux4(::custom_msgs::srv::PlutoPilot_Response::_rc_aux4_type arg)
  {
    msg_.rc_aux4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Response msg_;
};

class Init_PlutoPilot_Response_rc_aux3
{
public:
  explicit Init_PlutoPilot_Response_rc_aux3(::custom_msgs::srv::PlutoPilot_Response & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Response_rc_aux4 rc_aux3(::custom_msgs::srv::PlutoPilot_Response::_rc_aux3_type arg)
  {
    msg_.rc_aux3 = std::move(arg);
    return Init_PlutoPilot_Response_rc_aux4(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Response msg_;
};

class Init_PlutoPilot_Response_rc_aux2
{
public:
  explicit Init_PlutoPilot_Response_rc_aux2(::custom_msgs::srv::PlutoPilot_Response & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Response_rc_aux3 rc_aux2(::custom_msgs::srv::PlutoPilot_Response::_rc_aux2_type arg)
  {
    msg_.rc_aux2 = std::move(arg);
    return Init_PlutoPilot_Response_rc_aux3(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Response msg_;
};

class Init_PlutoPilot_Response_rc_aux1
{
public:
  explicit Init_PlutoPilot_Response_rc_aux1(::custom_msgs::srv::PlutoPilot_Response & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Response_rc_aux2 rc_aux1(::custom_msgs::srv::PlutoPilot_Response::_rc_aux1_type arg)
  {
    msg_.rc_aux1 = std::move(arg);
    return Init_PlutoPilot_Response_rc_aux2(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Response msg_;
};

class Init_PlutoPilot_Response_rc_throttle
{
public:
  explicit Init_PlutoPilot_Response_rc_throttle(::custom_msgs::srv::PlutoPilot_Response & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Response_rc_aux1 rc_throttle(::custom_msgs::srv::PlutoPilot_Response::_rc_throttle_type arg)
  {
    msg_.rc_throttle = std::move(arg);
    return Init_PlutoPilot_Response_rc_aux1(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Response msg_;
};

class Init_PlutoPilot_Response_rc_yaw
{
public:
  explicit Init_PlutoPilot_Response_rc_yaw(::custom_msgs::srv::PlutoPilot_Response & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Response_rc_throttle rc_yaw(::custom_msgs::srv::PlutoPilot_Response::_rc_yaw_type arg)
  {
    msg_.rc_yaw = std::move(arg);
    return Init_PlutoPilot_Response_rc_throttle(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Response msg_;
};

class Init_PlutoPilot_Response_rc_pitch
{
public:
  explicit Init_PlutoPilot_Response_rc_pitch(::custom_msgs::srv::PlutoPilot_Response & msg)
  : msg_(msg)
  {}
  Init_PlutoPilot_Response_rc_yaw rc_pitch(::custom_msgs::srv::PlutoPilot_Response::_rc_pitch_type arg)
  {
    msg_.rc_pitch = std::move(arg);
    return Init_PlutoPilot_Response_rc_yaw(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Response msg_;
};

class Init_PlutoPilot_Response_rc_roll
{
public:
  Init_PlutoPilot_Response_rc_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlutoPilot_Response_rc_pitch rc_roll(::custom_msgs::srv::PlutoPilot_Response::_rc_roll_type arg)
  {
    msg_.rc_roll = std::move(arg);
    return Init_PlutoPilot_Response_rc_pitch(msg_);
  }

private:
  ::custom_msgs::srv::PlutoPilot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::PlutoPilot_Response>()
{
  return custom_msgs::srv::builder::Init_PlutoPilot_Response_rc_roll();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__PLUTO_PILOT__BUILDER_HPP_
