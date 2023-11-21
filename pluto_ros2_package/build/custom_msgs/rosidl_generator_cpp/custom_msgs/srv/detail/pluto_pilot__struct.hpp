// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:srv/PlutoPilot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PLUTO_PILOT__STRUCT_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__PLUTO_PILOT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__PlutoPilot_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__PlutoPilot_Request __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlutoPilot_Request_
{
  using Type = PlutoPilot_Request_<ContainerAllocator>;

  explicit PlutoPilot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0l;
      this->pitch = 0l;
      this->yaw = 0l;
      this->acc_x = 0.0f;
      this->acc_y = 0.0f;
      this->acc_z = 0.0f;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
      this->mag_x = 0.0f;
      this->mag_y = 0.0f;
      this->mag_z = 0.0f;
      this->alt = 0.0f;
      this->battery = 0.0f;
      this->rssi = 0l;
    }
  }

  explicit PlutoPilot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0l;
      this->pitch = 0l;
      this->yaw = 0l;
      this->acc_x = 0.0f;
      this->acc_y = 0.0f;
      this->acc_z = 0.0f;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
      this->mag_x = 0.0f;
      this->mag_y = 0.0f;
      this->mag_z = 0.0f;
      this->alt = 0.0f;
      this->battery = 0.0f;
      this->rssi = 0l;
    }
  }

  // field types and members
  using _roll_type =
    int32_t;
  _roll_type roll;
  using _pitch_type =
    int32_t;
  _pitch_type pitch;
  using _yaw_type =
    int32_t;
  _yaw_type yaw;
  using _acc_x_type =
    float;
  _acc_x_type acc_x;
  using _acc_y_type =
    float;
  _acc_y_type acc_y;
  using _acc_z_type =
    float;
  _acc_z_type acc_z;
  using _gyro_x_type =
    float;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    float;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    float;
  _gyro_z_type gyro_z;
  using _mag_x_type =
    float;
  _mag_x_type mag_x;
  using _mag_y_type =
    float;
  _mag_y_type mag_y;
  using _mag_z_type =
    float;
  _mag_z_type mag_z;
  using _alt_type =
    float;
  _alt_type alt;
  using _battery_type =
    float;
  _battery_type battery;
  using _rssi_type =
    int32_t;
  _rssi_type rssi;

  // setters for named parameter idiom
  Type & set__roll(
    const int32_t & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const int32_t & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const int32_t & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__acc_x(
    const float & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }
  Type & set__acc_y(
    const float & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_z(
    const float & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const float & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const float & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const float & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }
  Type & set__mag_x(
    const float & _arg)
  {
    this->mag_x = _arg;
    return *this;
  }
  Type & set__mag_y(
    const float & _arg)
  {
    this->mag_y = _arg;
    return *this;
  }
  Type & set__mag_z(
    const float & _arg)
  {
    this->mag_z = _arg;
    return *this;
  }
  Type & set__alt(
    const float & _arg)
  {
    this->alt = _arg;
    return *this;
  }
  Type & set__battery(
    const float & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__rssi(
    const int32_t & _arg)
  {
    this->rssi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__PlutoPilot_Request
    std::shared_ptr<custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__PlutoPilot_Request
    std::shared_ptr<custom_msgs::srv::PlutoPilot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlutoPilot_Request_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->acc_x != other.acc_x) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    if (this->mag_x != other.mag_x) {
      return false;
    }
    if (this->mag_y != other.mag_y) {
      return false;
    }
    if (this->mag_z != other.mag_z) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    if (this->rssi != other.rssi) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlutoPilot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlutoPilot_Request_

// alias to use template instance with default allocator
using PlutoPilot_Request =
  custom_msgs::srv::PlutoPilot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__PlutoPilot_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__PlutoPilot_Response __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlutoPilot_Response_
{
  using Type = PlutoPilot_Response_<ContainerAllocator>;

  explicit PlutoPilot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    }
  }

  explicit PlutoPilot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__PlutoPilot_Response
    std::shared_ptr<custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__PlutoPilot_Response
    std::shared_ptr<custom_msgs::srv::PlutoPilot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlutoPilot_Response_ & other) const
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
    return true;
  }
  bool operator!=(const PlutoPilot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlutoPilot_Response_

// alias to use template instance with default allocator
using PlutoPilot_Response =
  custom_msgs::srv::PlutoPilot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs

namespace custom_msgs
{

namespace srv
{

struct PlutoPilot
{
  using Request = custom_msgs::srv::PlutoPilot_Request;
  using Response = custom_msgs::srv::PlutoPilot_Response;
};

}  // namespace srv

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__PLUTO_PILOT__STRUCT_HPP_
