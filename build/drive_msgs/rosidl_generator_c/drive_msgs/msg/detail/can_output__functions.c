// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/CANOutput.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/can_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `eps_en_status`
// Member `eps_control_board_status`
// Member `eps_control_status`
// Member `eps_user_can_err`
// Member `eps_err`
// Member `eps_veh_can_err`
// Member `eps_sas_err`
// Member `override_ignore_status`
// Member `override_status`
// Member `strang`
// Member `str_drv_tq`
// Member `str_out_tq`
// Member `eps_alive_cnt`
// Member `acc_en_status`
// Member `acc_control_board_status`
// Member `acc_control_status`
// Member `acc_user_can_err`
// Member `acc_err`
// Member `vs`
// Member `long_accel1`
// Member `hazard_en`
// Member `turn_left_en`
// Member `turn_right_en`
// Member `acc_veh_err`
// Member `g_sel_disp`
// Member `acc_alive_cnt`
// Member `wheel_spd_fr`
// Member `wheel_spd_fl`
// Member `wheel_spd_rr`
// Member `wheel_spd_rl`
// Member `lat_accel`
// Member `yaw_rate`
// Member `brk_cylinder`
// Member `long_accel2`
#include "std_msgs/msg/detail/string__functions.h"

bool
drive_msgs__msg__CANOutput__init(drive_msgs__msg__CANOutput * msg)
{
  if (!msg) {
    return false;
  }
  // eps_en_status
  if (!std_msgs__msg__String__init(&msg->eps_en_status)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // eps_control_board_status
  if (!std_msgs__msg__String__init(&msg->eps_control_board_status)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // eps_control_status
  if (!std_msgs__msg__String__init(&msg->eps_control_status)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // eps_user_can_err
  if (!std_msgs__msg__String__init(&msg->eps_user_can_err)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // eps_err
  if (!std_msgs__msg__String__init(&msg->eps_err)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // eps_veh_can_err
  if (!std_msgs__msg__String__init(&msg->eps_veh_can_err)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // eps_sas_err
  if (!std_msgs__msg__String__init(&msg->eps_sas_err)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // override_ignore_status
  if (!std_msgs__msg__String__init(&msg->override_ignore_status)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // override_status
  if (!std_msgs__msg__String__init(&msg->override_status)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // strang
  if (!std_msgs__msg__String__init(&msg->strang)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // str_drv_tq
  if (!std_msgs__msg__String__init(&msg->str_drv_tq)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // str_out_tq
  if (!std_msgs__msg__String__init(&msg->str_out_tq)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // eps_alive_cnt
  if (!std_msgs__msg__String__init(&msg->eps_alive_cnt)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // acc_en_status
  if (!std_msgs__msg__String__init(&msg->acc_en_status)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // acc_control_board_status
  if (!std_msgs__msg__String__init(&msg->acc_control_board_status)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // acc_control_status
  if (!std_msgs__msg__String__init(&msg->acc_control_status)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // acc_user_can_err
  if (!std_msgs__msg__String__init(&msg->acc_user_can_err)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // acc_err
  if (!std_msgs__msg__String__init(&msg->acc_err)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // vs
  if (!std_msgs__msg__String__init(&msg->vs)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // long_accel1
  if (!std_msgs__msg__String__init(&msg->long_accel1)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // hazard_en
  if (!std_msgs__msg__String__init(&msg->hazard_en)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // turn_left_en
  if (!std_msgs__msg__String__init(&msg->turn_left_en)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // turn_right_en
  if (!std_msgs__msg__String__init(&msg->turn_right_en)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // acc_veh_err
  if (!std_msgs__msg__String__init(&msg->acc_veh_err)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // g_sel_disp
  if (!std_msgs__msg__String__init(&msg->g_sel_disp)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // acc_alive_cnt
  if (!std_msgs__msg__String__init(&msg->acc_alive_cnt)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // wheel_spd_fr
  if (!std_msgs__msg__String__init(&msg->wheel_spd_fr)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // wheel_spd_fl
  if (!std_msgs__msg__String__init(&msg->wheel_spd_fl)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // wheel_spd_rr
  if (!std_msgs__msg__String__init(&msg->wheel_spd_rr)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // wheel_spd_rl
  if (!std_msgs__msg__String__init(&msg->wheel_spd_rl)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // lat_accel
  if (!std_msgs__msg__String__init(&msg->lat_accel)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // yaw_rate
  if (!std_msgs__msg__String__init(&msg->yaw_rate)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // brk_cylinder
  if (!std_msgs__msg__String__init(&msg->brk_cylinder)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  // long_accel2
  if (!std_msgs__msg__String__init(&msg->long_accel2)) {
    drive_msgs__msg__CANOutput__fini(msg);
    return false;
  }
  return true;
}

void
drive_msgs__msg__CANOutput__fini(drive_msgs__msg__CANOutput * msg)
{
  if (!msg) {
    return;
  }
  // eps_en_status
  std_msgs__msg__String__fini(&msg->eps_en_status);
  // eps_control_board_status
  std_msgs__msg__String__fini(&msg->eps_control_board_status);
  // eps_control_status
  std_msgs__msg__String__fini(&msg->eps_control_status);
  // eps_user_can_err
  std_msgs__msg__String__fini(&msg->eps_user_can_err);
  // eps_err
  std_msgs__msg__String__fini(&msg->eps_err);
  // eps_veh_can_err
  std_msgs__msg__String__fini(&msg->eps_veh_can_err);
  // eps_sas_err
  std_msgs__msg__String__fini(&msg->eps_sas_err);
  // override_ignore_status
  std_msgs__msg__String__fini(&msg->override_ignore_status);
  // override_status
  std_msgs__msg__String__fini(&msg->override_status);
  // strang
  std_msgs__msg__String__fini(&msg->strang);
  // str_drv_tq
  std_msgs__msg__String__fini(&msg->str_drv_tq);
  // str_out_tq
  std_msgs__msg__String__fini(&msg->str_out_tq);
  // eps_alive_cnt
  std_msgs__msg__String__fini(&msg->eps_alive_cnt);
  // acc_en_status
  std_msgs__msg__String__fini(&msg->acc_en_status);
  // acc_control_board_status
  std_msgs__msg__String__fini(&msg->acc_control_board_status);
  // acc_control_status
  std_msgs__msg__String__fini(&msg->acc_control_status);
  // acc_user_can_err
  std_msgs__msg__String__fini(&msg->acc_user_can_err);
  // acc_err
  std_msgs__msg__String__fini(&msg->acc_err);
  // vs
  std_msgs__msg__String__fini(&msg->vs);
  // long_accel1
  std_msgs__msg__String__fini(&msg->long_accel1);
  // hazard_en
  std_msgs__msg__String__fini(&msg->hazard_en);
  // turn_left_en
  std_msgs__msg__String__fini(&msg->turn_left_en);
  // turn_right_en
  std_msgs__msg__String__fini(&msg->turn_right_en);
  // acc_veh_err
  std_msgs__msg__String__fini(&msg->acc_veh_err);
  // g_sel_disp
  std_msgs__msg__String__fini(&msg->g_sel_disp);
  // acc_alive_cnt
  std_msgs__msg__String__fini(&msg->acc_alive_cnt);
  // wheel_spd_fr
  std_msgs__msg__String__fini(&msg->wheel_spd_fr);
  // wheel_spd_fl
  std_msgs__msg__String__fini(&msg->wheel_spd_fl);
  // wheel_spd_rr
  std_msgs__msg__String__fini(&msg->wheel_spd_rr);
  // wheel_spd_rl
  std_msgs__msg__String__fini(&msg->wheel_spd_rl);
  // lat_accel
  std_msgs__msg__String__fini(&msg->lat_accel);
  // yaw_rate
  std_msgs__msg__String__fini(&msg->yaw_rate);
  // brk_cylinder
  std_msgs__msg__String__fini(&msg->brk_cylinder);
  // long_accel2
  std_msgs__msg__String__fini(&msg->long_accel2);
}

bool
drive_msgs__msg__CANOutput__are_equal(const drive_msgs__msg__CANOutput * lhs, const drive_msgs__msg__CANOutput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // eps_en_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->eps_en_status), &(rhs->eps_en_status)))
  {
    return false;
  }
  // eps_control_board_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->eps_control_board_status), &(rhs->eps_control_board_status)))
  {
    return false;
  }
  // eps_control_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->eps_control_status), &(rhs->eps_control_status)))
  {
    return false;
  }
  // eps_user_can_err
  if (!std_msgs__msg__String__are_equal(
      &(lhs->eps_user_can_err), &(rhs->eps_user_can_err)))
  {
    return false;
  }
  // eps_err
  if (!std_msgs__msg__String__are_equal(
      &(lhs->eps_err), &(rhs->eps_err)))
  {
    return false;
  }
  // eps_veh_can_err
  if (!std_msgs__msg__String__are_equal(
      &(lhs->eps_veh_can_err), &(rhs->eps_veh_can_err)))
  {
    return false;
  }
  // eps_sas_err
  if (!std_msgs__msg__String__are_equal(
      &(lhs->eps_sas_err), &(rhs->eps_sas_err)))
  {
    return false;
  }
  // override_ignore_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->override_ignore_status), &(rhs->override_ignore_status)))
  {
    return false;
  }
  // override_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->override_status), &(rhs->override_status)))
  {
    return false;
  }
  // strang
  if (!std_msgs__msg__String__are_equal(
      &(lhs->strang), &(rhs->strang)))
  {
    return false;
  }
  // str_drv_tq
  if (!std_msgs__msg__String__are_equal(
      &(lhs->str_drv_tq), &(rhs->str_drv_tq)))
  {
    return false;
  }
  // str_out_tq
  if (!std_msgs__msg__String__are_equal(
      &(lhs->str_out_tq), &(rhs->str_out_tq)))
  {
    return false;
  }
  // eps_alive_cnt
  if (!std_msgs__msg__String__are_equal(
      &(lhs->eps_alive_cnt), &(rhs->eps_alive_cnt)))
  {
    return false;
  }
  // acc_en_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->acc_en_status), &(rhs->acc_en_status)))
  {
    return false;
  }
  // acc_control_board_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->acc_control_board_status), &(rhs->acc_control_board_status)))
  {
    return false;
  }
  // acc_control_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->acc_control_status), &(rhs->acc_control_status)))
  {
    return false;
  }
  // acc_user_can_err
  if (!std_msgs__msg__String__are_equal(
      &(lhs->acc_user_can_err), &(rhs->acc_user_can_err)))
  {
    return false;
  }
  // acc_err
  if (!std_msgs__msg__String__are_equal(
      &(lhs->acc_err), &(rhs->acc_err)))
  {
    return false;
  }
  // vs
  if (!std_msgs__msg__String__are_equal(
      &(lhs->vs), &(rhs->vs)))
  {
    return false;
  }
  // long_accel1
  if (!std_msgs__msg__String__are_equal(
      &(lhs->long_accel1), &(rhs->long_accel1)))
  {
    return false;
  }
  // hazard_en
  if (!std_msgs__msg__String__are_equal(
      &(lhs->hazard_en), &(rhs->hazard_en)))
  {
    return false;
  }
  // turn_left_en
  if (!std_msgs__msg__String__are_equal(
      &(lhs->turn_left_en), &(rhs->turn_left_en)))
  {
    return false;
  }
  // turn_right_en
  if (!std_msgs__msg__String__are_equal(
      &(lhs->turn_right_en), &(rhs->turn_right_en)))
  {
    return false;
  }
  // acc_veh_err
  if (!std_msgs__msg__String__are_equal(
      &(lhs->acc_veh_err), &(rhs->acc_veh_err)))
  {
    return false;
  }
  // g_sel_disp
  if (!std_msgs__msg__String__are_equal(
      &(lhs->g_sel_disp), &(rhs->g_sel_disp)))
  {
    return false;
  }
  // acc_alive_cnt
  if (!std_msgs__msg__String__are_equal(
      &(lhs->acc_alive_cnt), &(rhs->acc_alive_cnt)))
  {
    return false;
  }
  // wheel_spd_fr
  if (!std_msgs__msg__String__are_equal(
      &(lhs->wheel_spd_fr), &(rhs->wheel_spd_fr)))
  {
    return false;
  }
  // wheel_spd_fl
  if (!std_msgs__msg__String__are_equal(
      &(lhs->wheel_spd_fl), &(rhs->wheel_spd_fl)))
  {
    return false;
  }
  // wheel_spd_rr
  if (!std_msgs__msg__String__are_equal(
      &(lhs->wheel_spd_rr), &(rhs->wheel_spd_rr)))
  {
    return false;
  }
  // wheel_spd_rl
  if (!std_msgs__msg__String__are_equal(
      &(lhs->wheel_spd_rl), &(rhs->wheel_spd_rl)))
  {
    return false;
  }
  // lat_accel
  if (!std_msgs__msg__String__are_equal(
      &(lhs->lat_accel), &(rhs->lat_accel)))
  {
    return false;
  }
  // yaw_rate
  if (!std_msgs__msg__String__are_equal(
      &(lhs->yaw_rate), &(rhs->yaw_rate)))
  {
    return false;
  }
  // brk_cylinder
  if (!std_msgs__msg__String__are_equal(
      &(lhs->brk_cylinder), &(rhs->brk_cylinder)))
  {
    return false;
  }
  // long_accel2
  if (!std_msgs__msg__String__are_equal(
      &(lhs->long_accel2), &(rhs->long_accel2)))
  {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__CANOutput__copy(
  const drive_msgs__msg__CANOutput * input,
  drive_msgs__msg__CANOutput * output)
{
  if (!input || !output) {
    return false;
  }
  // eps_en_status
  if (!std_msgs__msg__String__copy(
      &(input->eps_en_status), &(output->eps_en_status)))
  {
    return false;
  }
  // eps_control_board_status
  if (!std_msgs__msg__String__copy(
      &(input->eps_control_board_status), &(output->eps_control_board_status)))
  {
    return false;
  }
  // eps_control_status
  if (!std_msgs__msg__String__copy(
      &(input->eps_control_status), &(output->eps_control_status)))
  {
    return false;
  }
  // eps_user_can_err
  if (!std_msgs__msg__String__copy(
      &(input->eps_user_can_err), &(output->eps_user_can_err)))
  {
    return false;
  }
  // eps_err
  if (!std_msgs__msg__String__copy(
      &(input->eps_err), &(output->eps_err)))
  {
    return false;
  }
  // eps_veh_can_err
  if (!std_msgs__msg__String__copy(
      &(input->eps_veh_can_err), &(output->eps_veh_can_err)))
  {
    return false;
  }
  // eps_sas_err
  if (!std_msgs__msg__String__copy(
      &(input->eps_sas_err), &(output->eps_sas_err)))
  {
    return false;
  }
  // override_ignore_status
  if (!std_msgs__msg__String__copy(
      &(input->override_ignore_status), &(output->override_ignore_status)))
  {
    return false;
  }
  // override_status
  if (!std_msgs__msg__String__copy(
      &(input->override_status), &(output->override_status)))
  {
    return false;
  }
  // strang
  if (!std_msgs__msg__String__copy(
      &(input->strang), &(output->strang)))
  {
    return false;
  }
  // str_drv_tq
  if (!std_msgs__msg__String__copy(
      &(input->str_drv_tq), &(output->str_drv_tq)))
  {
    return false;
  }
  // str_out_tq
  if (!std_msgs__msg__String__copy(
      &(input->str_out_tq), &(output->str_out_tq)))
  {
    return false;
  }
  // eps_alive_cnt
  if (!std_msgs__msg__String__copy(
      &(input->eps_alive_cnt), &(output->eps_alive_cnt)))
  {
    return false;
  }
  // acc_en_status
  if (!std_msgs__msg__String__copy(
      &(input->acc_en_status), &(output->acc_en_status)))
  {
    return false;
  }
  // acc_control_board_status
  if (!std_msgs__msg__String__copy(
      &(input->acc_control_board_status), &(output->acc_control_board_status)))
  {
    return false;
  }
  // acc_control_status
  if (!std_msgs__msg__String__copy(
      &(input->acc_control_status), &(output->acc_control_status)))
  {
    return false;
  }
  // acc_user_can_err
  if (!std_msgs__msg__String__copy(
      &(input->acc_user_can_err), &(output->acc_user_can_err)))
  {
    return false;
  }
  // acc_err
  if (!std_msgs__msg__String__copy(
      &(input->acc_err), &(output->acc_err)))
  {
    return false;
  }
  // vs
  if (!std_msgs__msg__String__copy(
      &(input->vs), &(output->vs)))
  {
    return false;
  }
  // long_accel1
  if (!std_msgs__msg__String__copy(
      &(input->long_accel1), &(output->long_accel1)))
  {
    return false;
  }
  // hazard_en
  if (!std_msgs__msg__String__copy(
      &(input->hazard_en), &(output->hazard_en)))
  {
    return false;
  }
  // turn_left_en
  if (!std_msgs__msg__String__copy(
      &(input->turn_left_en), &(output->turn_left_en)))
  {
    return false;
  }
  // turn_right_en
  if (!std_msgs__msg__String__copy(
      &(input->turn_right_en), &(output->turn_right_en)))
  {
    return false;
  }
  // acc_veh_err
  if (!std_msgs__msg__String__copy(
      &(input->acc_veh_err), &(output->acc_veh_err)))
  {
    return false;
  }
  // g_sel_disp
  if (!std_msgs__msg__String__copy(
      &(input->g_sel_disp), &(output->g_sel_disp)))
  {
    return false;
  }
  // acc_alive_cnt
  if (!std_msgs__msg__String__copy(
      &(input->acc_alive_cnt), &(output->acc_alive_cnt)))
  {
    return false;
  }
  // wheel_spd_fr
  if (!std_msgs__msg__String__copy(
      &(input->wheel_spd_fr), &(output->wheel_spd_fr)))
  {
    return false;
  }
  // wheel_spd_fl
  if (!std_msgs__msg__String__copy(
      &(input->wheel_spd_fl), &(output->wheel_spd_fl)))
  {
    return false;
  }
  // wheel_spd_rr
  if (!std_msgs__msg__String__copy(
      &(input->wheel_spd_rr), &(output->wheel_spd_rr)))
  {
    return false;
  }
  // wheel_spd_rl
  if (!std_msgs__msg__String__copy(
      &(input->wheel_spd_rl), &(output->wheel_spd_rl)))
  {
    return false;
  }
  // lat_accel
  if (!std_msgs__msg__String__copy(
      &(input->lat_accel), &(output->lat_accel)))
  {
    return false;
  }
  // yaw_rate
  if (!std_msgs__msg__String__copy(
      &(input->yaw_rate), &(output->yaw_rate)))
  {
    return false;
  }
  // brk_cylinder
  if (!std_msgs__msg__String__copy(
      &(input->brk_cylinder), &(output->brk_cylinder)))
  {
    return false;
  }
  // long_accel2
  if (!std_msgs__msg__String__copy(
      &(input->long_accel2), &(output->long_accel2)))
  {
    return false;
  }
  return true;
}

drive_msgs__msg__CANOutput *
drive_msgs__msg__CANOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__CANOutput * msg = (drive_msgs__msg__CANOutput *)allocator.allocate(sizeof(drive_msgs__msg__CANOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__CANOutput));
  bool success = drive_msgs__msg__CANOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__CANOutput__destroy(drive_msgs__msg__CANOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__CANOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__CANOutput__Sequence__init(drive_msgs__msg__CANOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__CANOutput * data = NULL;

  if (size) {
    data = (drive_msgs__msg__CANOutput *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__CANOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__CANOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__CANOutput__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
drive_msgs__msg__CANOutput__Sequence__fini(drive_msgs__msg__CANOutput__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      drive_msgs__msg__CANOutput__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

drive_msgs__msg__CANOutput__Sequence *
drive_msgs__msg__CANOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__CANOutput__Sequence * array = (drive_msgs__msg__CANOutput__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__CANOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__CANOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__CANOutput__Sequence__destroy(drive_msgs__msg__CANOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__CANOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__CANOutput__Sequence__are_equal(const drive_msgs__msg__CANOutput__Sequence * lhs, const drive_msgs__msg__CANOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__CANOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__CANOutput__Sequence__copy(
  const drive_msgs__msg__CANOutput__Sequence * input,
  drive_msgs__msg__CANOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__CANOutput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__CANOutput * data =
      (drive_msgs__msg__CANOutput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__CANOutput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__CANOutput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__CANOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
