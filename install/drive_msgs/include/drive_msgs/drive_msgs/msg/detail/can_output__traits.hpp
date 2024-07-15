// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/CANOutput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/can_output__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

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
#include "std_msgs/msg/detail/string__traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CANOutput & msg,
  std::ostream & out)
{
  out << "{";
  // member: eps_en_status
  {
    out << "eps_en_status: ";
    to_flow_style_yaml(msg.eps_en_status, out);
    out << ", ";
  }

  // member: eps_control_board_status
  {
    out << "eps_control_board_status: ";
    to_flow_style_yaml(msg.eps_control_board_status, out);
    out << ", ";
  }

  // member: eps_control_status
  {
    out << "eps_control_status: ";
    to_flow_style_yaml(msg.eps_control_status, out);
    out << ", ";
  }

  // member: eps_user_can_err
  {
    out << "eps_user_can_err: ";
    to_flow_style_yaml(msg.eps_user_can_err, out);
    out << ", ";
  }

  // member: eps_err
  {
    out << "eps_err: ";
    to_flow_style_yaml(msg.eps_err, out);
    out << ", ";
  }

  // member: eps_veh_can_err
  {
    out << "eps_veh_can_err: ";
    to_flow_style_yaml(msg.eps_veh_can_err, out);
    out << ", ";
  }

  // member: eps_sas_err
  {
    out << "eps_sas_err: ";
    to_flow_style_yaml(msg.eps_sas_err, out);
    out << ", ";
  }

  // member: override_ignore_status
  {
    out << "override_ignore_status: ";
    to_flow_style_yaml(msg.override_ignore_status, out);
    out << ", ";
  }

  // member: override_status
  {
    out << "override_status: ";
    to_flow_style_yaml(msg.override_status, out);
    out << ", ";
  }

  // member: strang
  {
    out << "strang: ";
    to_flow_style_yaml(msg.strang, out);
    out << ", ";
  }

  // member: str_drv_tq
  {
    out << "str_drv_tq: ";
    to_flow_style_yaml(msg.str_drv_tq, out);
    out << ", ";
  }

  // member: str_out_tq
  {
    out << "str_out_tq: ";
    to_flow_style_yaml(msg.str_out_tq, out);
    out << ", ";
  }

  // member: eps_alive_cnt
  {
    out << "eps_alive_cnt: ";
    to_flow_style_yaml(msg.eps_alive_cnt, out);
    out << ", ";
  }

  // member: acc_en_status
  {
    out << "acc_en_status: ";
    to_flow_style_yaml(msg.acc_en_status, out);
    out << ", ";
  }

  // member: acc_control_board_status
  {
    out << "acc_control_board_status: ";
    to_flow_style_yaml(msg.acc_control_board_status, out);
    out << ", ";
  }

  // member: acc_control_status
  {
    out << "acc_control_status: ";
    to_flow_style_yaml(msg.acc_control_status, out);
    out << ", ";
  }

  // member: acc_user_can_err
  {
    out << "acc_user_can_err: ";
    to_flow_style_yaml(msg.acc_user_can_err, out);
    out << ", ";
  }

  // member: acc_err
  {
    out << "acc_err: ";
    to_flow_style_yaml(msg.acc_err, out);
    out << ", ";
  }

  // member: vs
  {
    out << "vs: ";
    to_flow_style_yaml(msg.vs, out);
    out << ", ";
  }

  // member: long_accel1
  {
    out << "long_accel1: ";
    to_flow_style_yaml(msg.long_accel1, out);
    out << ", ";
  }

  // member: hazard_en
  {
    out << "hazard_en: ";
    to_flow_style_yaml(msg.hazard_en, out);
    out << ", ";
  }

  // member: turn_left_en
  {
    out << "turn_left_en: ";
    to_flow_style_yaml(msg.turn_left_en, out);
    out << ", ";
  }

  // member: turn_right_en
  {
    out << "turn_right_en: ";
    to_flow_style_yaml(msg.turn_right_en, out);
    out << ", ";
  }

  // member: acc_veh_err
  {
    out << "acc_veh_err: ";
    to_flow_style_yaml(msg.acc_veh_err, out);
    out << ", ";
  }

  // member: g_sel_disp
  {
    out << "g_sel_disp: ";
    to_flow_style_yaml(msg.g_sel_disp, out);
    out << ", ";
  }

  // member: acc_alive_cnt
  {
    out << "acc_alive_cnt: ";
    to_flow_style_yaml(msg.acc_alive_cnt, out);
    out << ", ";
  }

  // member: wheel_spd_fr
  {
    out << "wheel_spd_fr: ";
    to_flow_style_yaml(msg.wheel_spd_fr, out);
    out << ", ";
  }

  // member: wheel_spd_fl
  {
    out << "wheel_spd_fl: ";
    to_flow_style_yaml(msg.wheel_spd_fl, out);
    out << ", ";
  }

  // member: wheel_spd_rr
  {
    out << "wheel_spd_rr: ";
    to_flow_style_yaml(msg.wheel_spd_rr, out);
    out << ", ";
  }

  // member: wheel_spd_rl
  {
    out << "wheel_spd_rl: ";
    to_flow_style_yaml(msg.wheel_spd_rl, out);
    out << ", ";
  }

  // member: lat_accel
  {
    out << "lat_accel: ";
    to_flow_style_yaml(msg.lat_accel, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    to_flow_style_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: brk_cylinder
  {
    out << "brk_cylinder: ";
    to_flow_style_yaml(msg.brk_cylinder, out);
    out << ", ";
  }

  // member: long_accel2
  {
    out << "long_accel2: ";
    to_flow_style_yaml(msg.long_accel2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CANOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: eps_en_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_en_status:\n";
    to_block_style_yaml(msg.eps_en_status, out, indentation + 2);
  }

  // member: eps_control_board_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_control_board_status:\n";
    to_block_style_yaml(msg.eps_control_board_status, out, indentation + 2);
  }

  // member: eps_control_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_control_status:\n";
    to_block_style_yaml(msg.eps_control_status, out, indentation + 2);
  }

  // member: eps_user_can_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_user_can_err:\n";
    to_block_style_yaml(msg.eps_user_can_err, out, indentation + 2);
  }

  // member: eps_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_err:\n";
    to_block_style_yaml(msg.eps_err, out, indentation + 2);
  }

  // member: eps_veh_can_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_veh_can_err:\n";
    to_block_style_yaml(msg.eps_veh_can_err, out, indentation + 2);
  }

  // member: eps_sas_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_sas_err:\n";
    to_block_style_yaml(msg.eps_sas_err, out, indentation + 2);
  }

  // member: override_ignore_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_ignore_status:\n";
    to_block_style_yaml(msg.override_ignore_status, out, indentation + 2);
  }

  // member: override_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_status:\n";
    to_block_style_yaml(msg.override_status, out, indentation + 2);
  }

  // member: strang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strang:\n";
    to_block_style_yaml(msg.strang, out, indentation + 2);
  }

  // member: str_drv_tq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "str_drv_tq:\n";
    to_block_style_yaml(msg.str_drv_tq, out, indentation + 2);
  }

  // member: str_out_tq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "str_out_tq:\n";
    to_block_style_yaml(msg.str_out_tq, out, indentation + 2);
  }

  // member: eps_alive_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_alive_cnt:\n";
    to_block_style_yaml(msg.eps_alive_cnt, out, indentation + 2);
  }

  // member: acc_en_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_en_status:\n";
    to_block_style_yaml(msg.acc_en_status, out, indentation + 2);
  }

  // member: acc_control_board_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_control_board_status:\n";
    to_block_style_yaml(msg.acc_control_board_status, out, indentation + 2);
  }

  // member: acc_control_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_control_status:\n";
    to_block_style_yaml(msg.acc_control_status, out, indentation + 2);
  }

  // member: acc_user_can_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_user_can_err:\n";
    to_block_style_yaml(msg.acc_user_can_err, out, indentation + 2);
  }

  // member: acc_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_err:\n";
    to_block_style_yaml(msg.acc_err, out, indentation + 2);
  }

  // member: vs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vs:\n";
    to_block_style_yaml(msg.vs, out, indentation + 2);
  }

  // member: long_accel1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "long_accel1:\n";
    to_block_style_yaml(msg.long_accel1, out, indentation + 2);
  }

  // member: hazard_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hazard_en:\n";
    to_block_style_yaml(msg.hazard_en, out, indentation + 2);
  }

  // member: turn_left_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_left_en:\n";
    to_block_style_yaml(msg.turn_left_en, out, indentation + 2);
  }

  // member: turn_right_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_right_en:\n";
    to_block_style_yaml(msg.turn_right_en, out, indentation + 2);
  }

  // member: acc_veh_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_veh_err:\n";
    to_block_style_yaml(msg.acc_veh_err, out, indentation + 2);
  }

  // member: g_sel_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g_sel_disp:\n";
    to_block_style_yaml(msg.g_sel_disp, out, indentation + 2);
  }

  // member: acc_alive_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_alive_cnt:\n";
    to_block_style_yaml(msg.acc_alive_cnt, out, indentation + 2);
  }

  // member: wheel_spd_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_fr:\n";
    to_block_style_yaml(msg.wheel_spd_fr, out, indentation + 2);
  }

  // member: wheel_spd_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_fl:\n";
    to_block_style_yaml(msg.wheel_spd_fl, out, indentation + 2);
  }

  // member: wheel_spd_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_rr:\n";
    to_block_style_yaml(msg.wheel_spd_rr, out, indentation + 2);
  }

  // member: wheel_spd_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_spd_rl:\n";
    to_block_style_yaml(msg.wheel_spd_rl, out, indentation + 2);
  }

  // member: lat_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_accel:\n";
    to_block_style_yaml(msg.lat_accel, out, indentation + 2);
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate:\n";
    to_block_style_yaml(msg.yaw_rate, out, indentation + 2);
  }

  // member: brk_cylinder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_cylinder:\n";
    to_block_style_yaml(msg.brk_cylinder, out, indentation + 2);
  }

  // member: long_accel2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "long_accel2:\n";
    to_block_style_yaml(msg.long_accel2, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CANOutput & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drive_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drive_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drive_msgs::msg::CANOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::CANOutput & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::CANOutput>()
{
  return "drive_msgs::msg::CANOutput";
}

template<>
inline const char * name<drive_msgs::msg::CANOutput>()
{
  return "drive_msgs/msg/CANOutput";
}

template<>
struct has_fixed_size<drive_msgs::msg::CANOutput>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<drive_msgs::msg::CANOutput>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<drive_msgs::msg::CANOutput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__TRAITS_HPP_
