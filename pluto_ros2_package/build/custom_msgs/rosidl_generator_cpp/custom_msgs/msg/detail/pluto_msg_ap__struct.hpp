// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/PlutoMsgAP.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG_AP__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG_AP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__PlutoMsgAP __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__PlutoMsgAP __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlutoMsgAP_
{
  using Type = PlutoMsgAP_<ContainerAllocator>;

  explicit PlutoMsgAP_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_roll = 0ll;
      this->rc_pitch = 0ll;
      this->rc_yaw = 0ll;
      this->rc_throttle = 0ll;
      this->pluto_index = 0ll;
      this->command_type = 0;
    }
  }

  explicit PlutoMsgAP_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_roll = 0ll;
      this->rc_pitch = 0ll;
      this->rc_yaw = 0ll;
      this->rc_throttle = 0ll;
      this->pluto_index = 0ll;
      this->command_type = 0;
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
  using _pluto_index_type =
    int64_t;
  _pluto_index_type pluto_index;
  using _command_type_type =
    int8_t;
  _command_type_type command_type;

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

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::PlutoMsgAP_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::PlutoMsgAP_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::PlutoMsgAP_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::PlutoMsgAP_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::PlutoMsgAP_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::PlutoMsgAP_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::PlutoMsgAP_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::PlutoMsgAP_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::PlutoMsgAP_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::PlutoMsgAP_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__PlutoMsgAP
    std::shared_ptr<custom_msgs::msg::PlutoMsgAP_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__PlutoMsgAP
    std::shared_ptr<custom_msgs::msg::PlutoMsgAP_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlutoMsgAP_ & other) const
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
    if (this->pluto_index != other.pluto_index) {
      return false;
    }
    if (this->command_type != other.command_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlutoMsgAP_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlutoMsgAP_

// alias to use template instance with default allocator
using PlutoMsgAP =
  custom_msgs::msg::PlutoMsgAP_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PLUTO_MSG_AP__STRUCT_HPP_
