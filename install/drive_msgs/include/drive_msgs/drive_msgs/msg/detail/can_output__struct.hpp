// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/CANOutput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'eps_en_status'
// Member 'eps_control_board_status'
// Member 'eps_control_status'
// Member 'eps_user_can_err'
// Member 'eps_err'
// Member 'eps_veh_can_err'
// Member 'eps_sas_err'
// Member 'override_ignore_status'
// Member 'override_status'
// Member 'strang'
// Member 'str_drv_tq'
// Member 'str_out_tq'
// Member 'eps_alive_cnt'
// Member 'acc_en_status'
// Member 'acc_control_board_status'
// Member 'acc_control_status'
// Member 'acc_user_can_err'
// Member 'acc_err'
// Member 'vs'
// Member 'long_accel1'
// Member 'hazard_en'
// Member 'turn_left_en'
// Member 'turn_right_en'
// Member 'acc_veh_err'
// Member 'g_sel_disp'
// Member 'acc_alive_cnt'
// Member 'wheel_spd_fr'
// Member 'wheel_spd_fl'
// Member 'wheel_spd_rr'
// Member 'wheel_spd_rl'
// Member 'lat_accel'
// Member 'yaw_rate'
// Member 'brk_cylinder'
// Member 'long_accel2'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__CANOutput __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__CANOutput __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CANOutput_
{
  using Type = CANOutput_<ContainerAllocator>;

  explicit CANOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : eps_en_status(_init),
    eps_control_board_status(_init),
    eps_control_status(_init),
    eps_user_can_err(_init),
    eps_err(_init),
    eps_veh_can_err(_init),
    eps_sas_err(_init),
    override_ignore_status(_init),
    override_status(_init),
    strang(_init),
    str_drv_tq(_init),
    str_out_tq(_init),
    eps_alive_cnt(_init),
    acc_en_status(_init),
    acc_control_board_status(_init),
    acc_control_status(_init),
    acc_user_can_err(_init),
    acc_err(_init),
    vs(_init),
    long_accel1(_init),
    hazard_en(_init),
    turn_left_en(_init),
    turn_right_en(_init),
    acc_veh_err(_init),
    g_sel_disp(_init),
    acc_alive_cnt(_init),
    wheel_spd_fr(_init),
    wheel_spd_fl(_init),
    wheel_spd_rr(_init),
    wheel_spd_rl(_init),
    lat_accel(_init),
    yaw_rate(_init),
    brk_cylinder(_init),
    long_accel2(_init)
  {
    (void)_init;
  }

  explicit CANOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : eps_en_status(_alloc, _init),
    eps_control_board_status(_alloc, _init),
    eps_control_status(_alloc, _init),
    eps_user_can_err(_alloc, _init),
    eps_err(_alloc, _init),
    eps_veh_can_err(_alloc, _init),
    eps_sas_err(_alloc, _init),
    override_ignore_status(_alloc, _init),
    override_status(_alloc, _init),
    strang(_alloc, _init),
    str_drv_tq(_alloc, _init),
    str_out_tq(_alloc, _init),
    eps_alive_cnt(_alloc, _init),
    acc_en_status(_alloc, _init),
    acc_control_board_status(_alloc, _init),
    acc_control_status(_alloc, _init),
    acc_user_can_err(_alloc, _init),
    acc_err(_alloc, _init),
    vs(_alloc, _init),
    long_accel1(_alloc, _init),
    hazard_en(_alloc, _init),
    turn_left_en(_alloc, _init),
    turn_right_en(_alloc, _init),
    acc_veh_err(_alloc, _init),
    g_sel_disp(_alloc, _init),
    acc_alive_cnt(_alloc, _init),
    wheel_spd_fr(_alloc, _init),
    wheel_spd_fl(_alloc, _init),
    wheel_spd_rr(_alloc, _init),
    wheel_spd_rl(_alloc, _init),
    lat_accel(_alloc, _init),
    yaw_rate(_alloc, _init),
    brk_cylinder(_alloc, _init),
    long_accel2(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _eps_en_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _eps_en_status_type eps_en_status;
  using _eps_control_board_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _eps_control_board_status_type eps_control_board_status;
  using _eps_control_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _eps_control_status_type eps_control_status;
  using _eps_user_can_err_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _eps_user_can_err_type eps_user_can_err;
  using _eps_err_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _eps_err_type eps_err;
  using _eps_veh_can_err_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _eps_veh_can_err_type eps_veh_can_err;
  using _eps_sas_err_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _eps_sas_err_type eps_sas_err;
  using _override_ignore_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _override_ignore_status_type override_ignore_status;
  using _override_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _override_status_type override_status;
  using _strang_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _strang_type strang;
  using _str_drv_tq_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _str_drv_tq_type str_drv_tq;
  using _str_out_tq_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _str_out_tq_type str_out_tq;
  using _eps_alive_cnt_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _eps_alive_cnt_type eps_alive_cnt;
  using _acc_en_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _acc_en_status_type acc_en_status;
  using _acc_control_board_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _acc_control_board_status_type acc_control_board_status;
  using _acc_control_status_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _acc_control_status_type acc_control_status;
  using _acc_user_can_err_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _acc_user_can_err_type acc_user_can_err;
  using _acc_err_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _acc_err_type acc_err;
  using _vs_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _vs_type vs;
  using _long_accel1_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _long_accel1_type long_accel1;
  using _hazard_en_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _hazard_en_type hazard_en;
  using _turn_left_en_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _turn_left_en_type turn_left_en;
  using _turn_right_en_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _turn_right_en_type turn_right_en;
  using _acc_veh_err_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _acc_veh_err_type acc_veh_err;
  using _g_sel_disp_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _g_sel_disp_type g_sel_disp;
  using _acc_alive_cnt_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _acc_alive_cnt_type acc_alive_cnt;
  using _wheel_spd_fr_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _wheel_spd_fr_type wheel_spd_fr;
  using _wheel_spd_fl_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _wheel_spd_fl_type wheel_spd_fl;
  using _wheel_spd_rr_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _wheel_spd_rr_type wheel_spd_rr;
  using _wheel_spd_rl_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _wheel_spd_rl_type wheel_spd_rl;
  using _lat_accel_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _lat_accel_type lat_accel;
  using _yaw_rate_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _yaw_rate_type yaw_rate;
  using _brk_cylinder_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _brk_cylinder_type brk_cylinder;
  using _long_accel2_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _long_accel2_type long_accel2;

  // setters for named parameter idiom
  Type & set__eps_en_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->eps_en_status = _arg;
    return *this;
  }
  Type & set__eps_control_board_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->eps_control_board_status = _arg;
    return *this;
  }
  Type & set__eps_control_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->eps_control_status = _arg;
    return *this;
  }
  Type & set__eps_user_can_err(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->eps_user_can_err = _arg;
    return *this;
  }
  Type & set__eps_err(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->eps_err = _arg;
    return *this;
  }
  Type & set__eps_veh_can_err(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->eps_veh_can_err = _arg;
    return *this;
  }
  Type & set__eps_sas_err(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->eps_sas_err = _arg;
    return *this;
  }
  Type & set__override_ignore_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->override_ignore_status = _arg;
    return *this;
  }
  Type & set__override_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->override_status = _arg;
    return *this;
  }
  Type & set__strang(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->strang = _arg;
    return *this;
  }
  Type & set__str_drv_tq(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->str_drv_tq = _arg;
    return *this;
  }
  Type & set__str_out_tq(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->str_out_tq = _arg;
    return *this;
  }
  Type & set__eps_alive_cnt(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->eps_alive_cnt = _arg;
    return *this;
  }
  Type & set__acc_en_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->acc_en_status = _arg;
    return *this;
  }
  Type & set__acc_control_board_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->acc_control_board_status = _arg;
    return *this;
  }
  Type & set__acc_control_status(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->acc_control_status = _arg;
    return *this;
  }
  Type & set__acc_user_can_err(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->acc_user_can_err = _arg;
    return *this;
  }
  Type & set__acc_err(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->acc_err = _arg;
    return *this;
  }
  Type & set__vs(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->vs = _arg;
    return *this;
  }
  Type & set__long_accel1(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->long_accel1 = _arg;
    return *this;
  }
  Type & set__hazard_en(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->hazard_en = _arg;
    return *this;
  }
  Type & set__turn_left_en(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->turn_left_en = _arg;
    return *this;
  }
  Type & set__turn_right_en(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->turn_right_en = _arg;
    return *this;
  }
  Type & set__acc_veh_err(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->acc_veh_err = _arg;
    return *this;
  }
  Type & set__g_sel_disp(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->g_sel_disp = _arg;
    return *this;
  }
  Type & set__acc_alive_cnt(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->acc_alive_cnt = _arg;
    return *this;
  }
  Type & set__wheel_spd_fr(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->wheel_spd_fr = _arg;
    return *this;
  }
  Type & set__wheel_spd_fl(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->wheel_spd_fl = _arg;
    return *this;
  }
  Type & set__wheel_spd_rr(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->wheel_spd_rr = _arg;
    return *this;
  }
  Type & set__wheel_spd_rl(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->wheel_spd_rl = _arg;
    return *this;
  }
  Type & set__lat_accel(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->lat_accel = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__brk_cylinder(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->brk_cylinder = _arg;
    return *this;
  }
  Type & set__long_accel2(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->long_accel2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::CANOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::CANOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::CANOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::CANOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::CANOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::CANOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::CANOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::CANOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::CANOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::CANOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__CANOutput
    std::shared_ptr<drive_msgs::msg::CANOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__CANOutput
    std::shared_ptr<drive_msgs::msg::CANOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CANOutput_ & other) const
  {
    if (this->eps_en_status != other.eps_en_status) {
      return false;
    }
    if (this->eps_control_board_status != other.eps_control_board_status) {
      return false;
    }
    if (this->eps_control_status != other.eps_control_status) {
      return false;
    }
    if (this->eps_user_can_err != other.eps_user_can_err) {
      return false;
    }
    if (this->eps_err != other.eps_err) {
      return false;
    }
    if (this->eps_veh_can_err != other.eps_veh_can_err) {
      return false;
    }
    if (this->eps_sas_err != other.eps_sas_err) {
      return false;
    }
    if (this->override_ignore_status != other.override_ignore_status) {
      return false;
    }
    if (this->override_status != other.override_status) {
      return false;
    }
    if (this->strang != other.strang) {
      return false;
    }
    if (this->str_drv_tq != other.str_drv_tq) {
      return false;
    }
    if (this->str_out_tq != other.str_out_tq) {
      return false;
    }
    if (this->eps_alive_cnt != other.eps_alive_cnt) {
      return false;
    }
    if (this->acc_en_status != other.acc_en_status) {
      return false;
    }
    if (this->acc_control_board_status != other.acc_control_board_status) {
      return false;
    }
    if (this->acc_control_status != other.acc_control_status) {
      return false;
    }
    if (this->acc_user_can_err != other.acc_user_can_err) {
      return false;
    }
    if (this->acc_err != other.acc_err) {
      return false;
    }
    if (this->vs != other.vs) {
      return false;
    }
    if (this->long_accel1 != other.long_accel1) {
      return false;
    }
    if (this->hazard_en != other.hazard_en) {
      return false;
    }
    if (this->turn_left_en != other.turn_left_en) {
      return false;
    }
    if (this->turn_right_en != other.turn_right_en) {
      return false;
    }
    if (this->acc_veh_err != other.acc_veh_err) {
      return false;
    }
    if (this->g_sel_disp != other.g_sel_disp) {
      return false;
    }
    if (this->acc_alive_cnt != other.acc_alive_cnt) {
      return false;
    }
    if (this->wheel_spd_fr != other.wheel_spd_fr) {
      return false;
    }
    if (this->wheel_spd_fl != other.wheel_spd_fl) {
      return false;
    }
    if (this->wheel_spd_rr != other.wheel_spd_rr) {
      return false;
    }
    if (this->wheel_spd_rl != other.wheel_spd_rl) {
      return false;
    }
    if (this->lat_accel != other.lat_accel) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->brk_cylinder != other.brk_cylinder) {
      return false;
    }
    if (this->long_accel2 != other.long_accel2) {
      return false;
    }
    return true;
  }
  bool operator!=(const CANOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CANOutput_

// alias to use template instance with default allocator
using CANOutput =
  drive_msgs::msg::CANOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__STRUCT_HPP_
