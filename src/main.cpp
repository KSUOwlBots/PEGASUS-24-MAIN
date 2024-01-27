#include "main.h"
Drive chassis({-15, 18, -19, 20}, {10, -11, 12, -14}, 9, 3.25, 600, .6);
void initialize() {
  pros::delay(500);
  chassis.toggle_modify_curve_with_controller(false);
  chassis.set_active_brake(.1);
  chassis.set_curve_default(5, 5);
  chassis.joy_thresh_opcontrol(5, 5);
  slapper_left.set_brake_mode(MOTOR_BRAKE_HOLD);
  slapper_right.set_brake_mode(MOTOR_BRAKE_HOLD);
  WinchL.set_brake_mode(MOTOR_BRAKE_HOLD);
  WinchR.set_brake_mode(MOTOR_BRAKE_HOLD);
  default_constants();
  chassis.initialize();
}
void disabled() {}
void competition_initialize() {}
void autonomous() {
  chassis.reset_pid_targets();
  chassis.reset_gyro();
  chassis.reset_drive_sensor();
  chassis.set_drive_brake(MOTOR_BRAKE_HOLD);
  pid_test();
}
void opcontrol() {
  WinchL.set_brake_mode(MOTOR_BRAKE_HOLD);
  WinchR.set_brake_mode(MOTOR_BRAKE_HOLD);
  pros::Task intake_task(intake_control);
  pros::Task slapper_task(slapper_control);
  pros::Task WinchControl(WinchC);
  chassis.set_drive_brake(MOTOR_BRAKE_COAST);
  while (true) {
    chassis.arcade_standard(ez::SPLIT);
    pros::delay(ez::util::DELAY_TIME);
  }
}