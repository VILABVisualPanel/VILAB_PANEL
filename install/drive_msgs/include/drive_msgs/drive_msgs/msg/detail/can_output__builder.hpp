// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/CANOutput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/can_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_CANOutput_long_accel2
{
public:
  explicit Init_CANOutput_long_accel2(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::CANOutput long_accel2(::drive_msgs::msg::CANOutput::_long_accel2_type arg)
  {
    msg_.long_accel2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_brk_cylinder
{
public:
  explicit Init_CANOutput_brk_cylinder(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_long_accel2 brk_cylinder(::drive_msgs::msg::CANOutput::_brk_cylinder_type arg)
  {
    msg_.brk_cylinder = std::move(arg);
    return Init_CANOutput_long_accel2(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_yaw_rate
{
public:
  explicit Init_CANOutput_yaw_rate(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_brk_cylinder yaw_rate(::drive_msgs::msg::CANOutput::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_CANOutput_brk_cylinder(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_lat_accel
{
public:
  explicit Init_CANOutput_lat_accel(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_yaw_rate lat_accel(::drive_msgs::msg::CANOutput::_lat_accel_type arg)
  {
    msg_.lat_accel = std::move(arg);
    return Init_CANOutput_yaw_rate(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_wheel_spd_rl
{
public:
  explicit Init_CANOutput_wheel_spd_rl(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_lat_accel wheel_spd_rl(::drive_msgs::msg::CANOutput::_wheel_spd_rl_type arg)
  {
    msg_.wheel_spd_rl = std::move(arg);
    return Init_CANOutput_lat_accel(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_wheel_spd_rr
{
public:
  explicit Init_CANOutput_wheel_spd_rr(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_wheel_spd_rl wheel_spd_rr(::drive_msgs::msg::CANOutput::_wheel_spd_rr_type arg)
  {
    msg_.wheel_spd_rr = std::move(arg);
    return Init_CANOutput_wheel_spd_rl(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_wheel_spd_fl
{
public:
  explicit Init_CANOutput_wheel_spd_fl(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_wheel_spd_rr wheel_spd_fl(::drive_msgs::msg::CANOutput::_wheel_spd_fl_type arg)
  {
    msg_.wheel_spd_fl = std::move(arg);
    return Init_CANOutput_wheel_spd_rr(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_wheel_spd_fr
{
public:
  explicit Init_CANOutput_wheel_spd_fr(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_wheel_spd_fl wheel_spd_fr(::drive_msgs::msg::CANOutput::_wheel_spd_fr_type arg)
  {
    msg_.wheel_spd_fr = std::move(arg);
    return Init_CANOutput_wheel_spd_fl(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_acc_alive_cnt
{
public:
  explicit Init_CANOutput_acc_alive_cnt(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_wheel_spd_fr acc_alive_cnt(::drive_msgs::msg::CANOutput::_acc_alive_cnt_type arg)
  {
    msg_.acc_alive_cnt = std::move(arg);
    return Init_CANOutput_wheel_spd_fr(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_g_sel_disp
{
public:
  explicit Init_CANOutput_g_sel_disp(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_acc_alive_cnt g_sel_disp(::drive_msgs::msg::CANOutput::_g_sel_disp_type arg)
  {
    msg_.g_sel_disp = std::move(arg);
    return Init_CANOutput_acc_alive_cnt(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_acc_veh_err
{
public:
  explicit Init_CANOutput_acc_veh_err(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_g_sel_disp acc_veh_err(::drive_msgs::msg::CANOutput::_acc_veh_err_type arg)
  {
    msg_.acc_veh_err = std::move(arg);
    return Init_CANOutput_g_sel_disp(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_turn_right_en
{
public:
  explicit Init_CANOutput_turn_right_en(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_acc_veh_err turn_right_en(::drive_msgs::msg::CANOutput::_turn_right_en_type arg)
  {
    msg_.turn_right_en = std::move(arg);
    return Init_CANOutput_acc_veh_err(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_turn_left_en
{
public:
  explicit Init_CANOutput_turn_left_en(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_turn_right_en turn_left_en(::drive_msgs::msg::CANOutput::_turn_left_en_type arg)
  {
    msg_.turn_left_en = std::move(arg);
    return Init_CANOutput_turn_right_en(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_hazard_en
{
public:
  explicit Init_CANOutput_hazard_en(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_turn_left_en hazard_en(::drive_msgs::msg::CANOutput::_hazard_en_type arg)
  {
    msg_.hazard_en = std::move(arg);
    return Init_CANOutput_turn_left_en(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_long_accel1
{
public:
  explicit Init_CANOutput_long_accel1(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_hazard_en long_accel1(::drive_msgs::msg::CANOutput::_long_accel1_type arg)
  {
    msg_.long_accel1 = std::move(arg);
    return Init_CANOutput_hazard_en(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_vs
{
public:
  explicit Init_CANOutput_vs(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_long_accel1 vs(::drive_msgs::msg::CANOutput::_vs_type arg)
  {
    msg_.vs = std::move(arg);
    return Init_CANOutput_long_accel1(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_acc_err
{
public:
  explicit Init_CANOutput_acc_err(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_vs acc_err(::drive_msgs::msg::CANOutput::_acc_err_type arg)
  {
    msg_.acc_err = std::move(arg);
    return Init_CANOutput_vs(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_acc_user_can_err
{
public:
  explicit Init_CANOutput_acc_user_can_err(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_acc_err acc_user_can_err(::drive_msgs::msg::CANOutput::_acc_user_can_err_type arg)
  {
    msg_.acc_user_can_err = std::move(arg);
    return Init_CANOutput_acc_err(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_acc_control_status
{
public:
  explicit Init_CANOutput_acc_control_status(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_acc_user_can_err acc_control_status(::drive_msgs::msg::CANOutput::_acc_control_status_type arg)
  {
    msg_.acc_control_status = std::move(arg);
    return Init_CANOutput_acc_user_can_err(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_acc_control_board_status
{
public:
  explicit Init_CANOutput_acc_control_board_status(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_acc_control_status acc_control_board_status(::drive_msgs::msg::CANOutput::_acc_control_board_status_type arg)
  {
    msg_.acc_control_board_status = std::move(arg);
    return Init_CANOutput_acc_control_status(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_acc_en_status
{
public:
  explicit Init_CANOutput_acc_en_status(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_acc_control_board_status acc_en_status(::drive_msgs::msg::CANOutput::_acc_en_status_type arg)
  {
    msg_.acc_en_status = std::move(arg);
    return Init_CANOutput_acc_control_board_status(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_eps_alive_cnt
{
public:
  explicit Init_CANOutput_eps_alive_cnt(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_acc_en_status eps_alive_cnt(::drive_msgs::msg::CANOutput::_eps_alive_cnt_type arg)
  {
    msg_.eps_alive_cnt = std::move(arg);
    return Init_CANOutput_acc_en_status(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_str_out_tq
{
public:
  explicit Init_CANOutput_str_out_tq(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_eps_alive_cnt str_out_tq(::drive_msgs::msg::CANOutput::_str_out_tq_type arg)
  {
    msg_.str_out_tq = std::move(arg);
    return Init_CANOutput_eps_alive_cnt(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_str_drv_tq
{
public:
  explicit Init_CANOutput_str_drv_tq(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_str_out_tq str_drv_tq(::drive_msgs::msg::CANOutput::_str_drv_tq_type arg)
  {
    msg_.str_drv_tq = std::move(arg);
    return Init_CANOutput_str_out_tq(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_strang
{
public:
  explicit Init_CANOutput_strang(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_str_drv_tq strang(::drive_msgs::msg::CANOutput::_strang_type arg)
  {
    msg_.strang = std::move(arg);
    return Init_CANOutput_str_drv_tq(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_override_status
{
public:
  explicit Init_CANOutput_override_status(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_strang override_status(::drive_msgs::msg::CANOutput::_override_status_type arg)
  {
    msg_.override_status = std::move(arg);
    return Init_CANOutput_strang(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_override_ignore_status
{
public:
  explicit Init_CANOutput_override_ignore_status(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_override_status override_ignore_status(::drive_msgs::msg::CANOutput::_override_ignore_status_type arg)
  {
    msg_.override_ignore_status = std::move(arg);
    return Init_CANOutput_override_status(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_eps_sas_err
{
public:
  explicit Init_CANOutput_eps_sas_err(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_override_ignore_status eps_sas_err(::drive_msgs::msg::CANOutput::_eps_sas_err_type arg)
  {
    msg_.eps_sas_err = std::move(arg);
    return Init_CANOutput_override_ignore_status(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_eps_veh_can_err
{
public:
  explicit Init_CANOutput_eps_veh_can_err(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_eps_sas_err eps_veh_can_err(::drive_msgs::msg::CANOutput::_eps_veh_can_err_type arg)
  {
    msg_.eps_veh_can_err = std::move(arg);
    return Init_CANOutput_eps_sas_err(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_eps_err
{
public:
  explicit Init_CANOutput_eps_err(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_eps_veh_can_err eps_err(::drive_msgs::msg::CANOutput::_eps_err_type arg)
  {
    msg_.eps_err = std::move(arg);
    return Init_CANOutput_eps_veh_can_err(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_eps_user_can_err
{
public:
  explicit Init_CANOutput_eps_user_can_err(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_eps_err eps_user_can_err(::drive_msgs::msg::CANOutput::_eps_user_can_err_type arg)
  {
    msg_.eps_user_can_err = std::move(arg);
    return Init_CANOutput_eps_err(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_eps_control_status
{
public:
  explicit Init_CANOutput_eps_control_status(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_eps_user_can_err eps_control_status(::drive_msgs::msg::CANOutput::_eps_control_status_type arg)
  {
    msg_.eps_control_status = std::move(arg);
    return Init_CANOutput_eps_user_can_err(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_eps_control_board_status
{
public:
  explicit Init_CANOutput_eps_control_board_status(::drive_msgs::msg::CANOutput & msg)
  : msg_(msg)
  {}
  Init_CANOutput_eps_control_status eps_control_board_status(::drive_msgs::msg::CANOutput::_eps_control_board_status_type arg)
  {
    msg_.eps_control_board_status = std::move(arg);
    return Init_CANOutput_eps_control_status(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

class Init_CANOutput_eps_en_status
{
public:
  Init_CANOutput_eps_en_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CANOutput_eps_control_board_status eps_en_status(::drive_msgs::msg::CANOutput::_eps_en_status_type arg)
  {
    msg_.eps_en_status = std::move(arg);
    return Init_CANOutput_eps_control_board_status(msg_);
  }

private:
  ::drive_msgs::msg::CANOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::CANOutput>()
{
  return drive_msgs::msg::builder::Init_CANOutput_eps_en_status();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__BUILDER_HPP_
