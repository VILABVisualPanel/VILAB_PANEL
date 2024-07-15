// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/CANOutput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

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
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/CANOutput in the package drive_msgs.
typedef struct drive_msgs__msg__CANOutput
{
  /// 0: Disabled, 1: Enabled
  std_msgs__msg__String eps_en_status;
  /// Value [0, 2]
  std_msgs__msg__String eps_control_board_status;
  /// Value [0, 15]
  std_msgs__msg__String eps_control_status;
  /// 0: No Error, 1: Error
  std_msgs__msg__String eps_user_can_err;
  /// 0: No Error, 1: Error
  std_msgs__msg__String eps_err;
  /// 0: No Error, 1: Error
  std_msgs__msg__String eps_veh_can_err;
  /// 0: No Error, 1: Error
  std_msgs__msg__String eps_sas_err;
  /// 0: Not Ignored, 1: Ignored
  std_msgs__msg__String override_ignore_status;
  /// 0: No Override, 1: Override
  std_msgs__msg__String override_status;
  /// Steering angle, scaled 0.1 (deg)
  std_msgs__msg__String strang;
  /// Steering driver torque, scaled 0.01
  std_msgs__msg__String str_drv_tq;
  /// Steering output torque, scaled 0.1
  std_msgs__msg__String str_out_tq;
  /// Alive counter, value [0, 255]
  std_msgs__msg__String eps_alive_cnt;
  /// True: Enabled, False: Disabled
  std_msgs__msg__String acc_en_status;
  /// Value [0, 7]
  std_msgs__msg__String acc_control_board_status;
  /// Value [0, 15]
  std_msgs__msg__String acc_control_status;
  /// False: No Error, True: Error
  std_msgs__msg__String acc_user_can_err;
  /// False: No Error, True: Error
  std_msgs__msg__String acc_err;
  /// Vehicle speed (km/h)
  std_msgs__msg__String vs;
  /// Longitudinal acceleration, scaled 0.01 (m/s^2)
  std_msgs__msg__String long_accel1;
  /// True: Enabled, False: Disabled
  std_msgs__msg__String hazard_en;
  /// True: Enabled, False: Disabled
  std_msgs__msg__String turn_left_en;
  /// True: Enabled, False: Disabled
  std_msgs__msg__String turn_right_en;
  /// False: No Error, True: Error
  std_msgs__msg__String acc_veh_err;
  /// Gear selector display
  std_msgs__msg__String g_sel_disp;
  /// Alive counter, value [0, 255]
  std_msgs__msg__String acc_alive_cnt;
  /// Front right wheel speed, scaled 0.03125 (kph)
  std_msgs__msg__String wheel_spd_fr;
  /// Front left wheel speed, scaled 0.03125 (kph)
  std_msgs__msg__String wheel_spd_fl;
  /// Rear right wheel speed, scaled 0.03125 (kph)
  std_msgs__msg__String wheel_spd_rr;
  /// Rear left wheel speed, scaled 0.03125 (kph)
  std_msgs__msg__String wheel_spd_rl;
  /// Lateral acceleration, scaled 0.01 (m/s^2)
  std_msgs__msg__String lat_accel;
  /// Yaw rate, scaled 0.01 (deg/s)
  std_msgs__msg__String yaw_rate;
  /// Brake cylinder pressure, scaled 0.1
  std_msgs__msg__String brk_cylinder;
  /// Longitudinal acceleration, scaled 0.01 (m/s^2)
  std_msgs__msg__String long_accel2;
} drive_msgs__msg__CANOutput;

// Struct for a sequence of drive_msgs__msg__CANOutput.
typedef struct drive_msgs__msg__CANOutput__Sequence
{
  drive_msgs__msg__CANOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__CANOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__CAN_OUTPUT__STRUCT_H_
