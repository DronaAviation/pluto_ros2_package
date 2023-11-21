// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/PlutoMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__PlutoMsg __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__PlutoMsg __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlutoMsg_
{
  using Type = PlutoMsg_<ContainerAllocator>;

  explicit PlutoMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_roll = 0ll;
      this->rc_pitch = 0ll;
      this->rc_yaw = 0ll;
      this->rc_throttle = 0ll;
      this->rc_aux1 = 0ll;
      this->rc_aux2 = 0ll;
      this->rc_aux3 = 0ll;
      this->rc_aux4 = 0ll;
      this->pluto_index = 0ll;
      this->command_type = 0;
      this->trim_roll = 0;
      this->trim_pitch = 0;
      this->is_auto_pilot_on = false;
    }
  }

  explicit PlutoMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_roll = 0ll;
      this->rc_pitch = 0ll;
      this->rc_yaw = 0ll;
      this->rc_throttle = 0ll;
      this->rc_aux1 = 0ll;
      this->rc_aux2 = 0ll;
      this->rc_aux3 = 0ll;
      this->rc_aux4 = 0ll;
      this->pluto_index = 0ll;
      this->command_type = 0;
      this->trim_roll = 0;
      this->trim_pitch = 0;
      this->is_auto_pilot_on = false;
    }
  }

  // field types and members
  using _rc_roll_type =
    int64_t;
  _rc_roll_type rc_roll;
  using _rc_pitch_type =
    int64_t;
  _rc_pitch_type rc_pitch;
  using _rc_yaw_type =
    int64_t;
  _rc_yaw_type rc_yaw;
  using _rc_throttle_type =
    int64_t;
  _rc_throttle_type rc_throttle;
  using _rc_aux1_type =
    int64_t;
  _rc_aux1_type rc_aux1;
  using _rc_aux2_type =
    int64_t;
  _rc_aux2_type rc_aux2;
  using _rc_aux3_type =
    int64_t;
  _rc_aux3_type rc_aux3;
  using _rc_aux4_type =
    int64_t;
  _rc_aux4_type rc_aux4;
  using _pluto_index_type =
    int64_t;
  _pluto_index_type pluto_index;
  using _command_type_type =
    int8_t;
  _command_type_type command_type;
  using _trim_roll_type =
    int8_t;
  _trim_roll_type trim_roll;
  using _trim_pitch_type =
    int8_t;
  _trim_pitch_type trim_pitch;
  using _is_auto_pilot_on_type =
    bool;
  _is_auto_pilot_on_type is_auto_pilot_on;

  // setters for named parameter idiom
  Type & set__rc_roll(
    const int64_t & _arg)
  {
    this->rc_roll = _arg;
    return *this;
  }
  Type & set__rc_pitch(
    const int64_t & _arg)
  {
    this->rc_pitch = _arg;
    return *this;
  }
  Type & set__rc_yaw(
    const int64_t & _arg)
  {
    this->rc_yaw = _arg;
    return *this;
  }
  Type & set__rc_throttle(
    const int64_t & _arg)
  {
    this->rc_throttle = _arg;
    return *this;
  }
  Type & set__rc_aux1(
    const int64_t & _arg)
  {
    this->rc_aux1 = _arg;
    return *this;
  }
  Type & set__rc_aux2(
    const int64_t & _arg)
  {
    this->rc_aux2 = _arg;
    return *this;
  }
  Type & set__rc_aux3(
    const int64_t & _arg)
  {
    this->rc_aux3 = _arg;
    return *this;
  }
  Type & set__rc_aux4(
    const int64_t & _arg)
  {
    this->rc_aux4 = _arg;
    return *this;
  }
  Type & set__pluto_index(
    const int64_t & _arg)
  {
    this->pluto_index = _arg;
    return *this;
  }
  Type & set__command_type(
    const int8_t & _arg)
  {
    this->command_type = _arg;
    return *this;
  }
  Type & set__trim_roll(
    const int8_t & _arg)
  {
    this->trim_roll = _arg;
    return *this;
  }
  Type & set__trim_pitch(
    const int8_t & _arg)
  {
    this->trim_pitch = _arg;
    return *this;
  }
  Type & set__is_auto_pilot_on(
    const bool & _arg)
  {
    this->is_auto_pilot_on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::PlutoMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::PlutoMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::PlutoMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::PlutoMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::PlutoMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::PlutoMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::PlutoMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::PlutoMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::PlutoMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::PlutoMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__PlutoMsg
    std::shared_ptr<custom_msgs::msg::PlutoMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__PlutoMsg
    std::shared_ptr<custom_msgs::msg::PlutoMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlutoMsg_ & other) const
  {
    if (this->rc_roll != other.rc_roll) {
      return false;
    }
    if (this->rc_pitch != other.rc_pitch) {
      return false;
    }
    if (this->rc_yaw != other.rc_yaw) {
      return false;
    }
    if (this->rc_throttle != other.rc_throttle) {
      return false;
    }
    if (this->rc_aux1 != other.rc_aux1) {
      return false;
    }
    if (this->rc_aux2 != other.rc_aux2) {
      return false;
    }
    if (this->rc_aux3 != other.rc_aux3) {
      return false;
    }
    if (this->rc_aux4 != other.rc_aux4) {
      return false;
    }
    if (this->pluto_index != other.pluto_index) {
      return false;
    }
    if (this->command_type != other.command_type) {
      return false;
    }
    if (this->trim_roll != other.trim_roll) {
      return false;
    }
    if (this->trim_pitch != other.trim_pitch) {
      return false;
    }
    if (this->is_auto_pilot_on != other.is_auto_pilot_on) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlutoMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlutoMsg_

// alias to use template instance with default allocator
using PlutoMsg =
  custom_msgs::msg::PlutoMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG__STRUCT_HPP_
