#include "main.h"
Drive chassis(
  {11, -1},
  {20, -10},
  5,
  5,
  600,
  .6
);

void initialize() {
  pros::delay(500);
  chassis.toggle_modify_curve_with_controller(true);
  chassis.set_active_brake(0);
  chassis.set_curve_default(0, 0);
  default_constants();
  ez::as::auton_selector.add_autons({
      Auton("drive for pid", pid_test),
  });

  chassis.initialize();
  ez::as::initialize();
}
void disabled() {}
void competition_initialize() {}
void autonomous() {
  chassis.reset_pid_targets();
  chassis.reset_gyro();
  chassis.reset_drive_sensor();
  chassis.set_drive_brake(MOTOR_BRAKE_HOLD);
  ez::as::auton_selector.call_selected_auton();
}
void opcontrol() {
  chassis.set_drive_brake(MOTOR_BRAKE_COAST);
  while (true) {
    chassis.tank();
    pros::delay(ez::util::DELAY_TIME);
  }
}