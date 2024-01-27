#include "main.h"
#include "OWL2/autons.hpp"
Drive chassis({-10, -17}, {13, 8}, 4, 4.00, 200, 1);
void initialize() {
  pros::delay(500);
  chassis.toggle_modify_curve_with_controller(true);
  chassis.set_active_brake(.1);
  chassis.set_curve_default(5, 5);
  chassis.joy_thresh_opcontrol(5, 5);
  default_constants();
  slapper_left.set_brake_mode(MOTOR_BRAKE_HOLD);
  slapper_right.set_brake_mode(MOTOR_BRAKE_HOLD);
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
  pros::Task intake_task(intake_control);
  pros::Task slapper_task(slapper_control);
  chassis.set_drive_brake(MOTOR_BRAKE_COAST);
  while (true) {
    chassis.arcade_standard(ez::SPLIT);
    pros::delay(ez::util::DELAY_TIME);
  }
}