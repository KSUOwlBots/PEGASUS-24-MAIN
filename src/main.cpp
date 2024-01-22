#include "main.h"
Drive chassis({-15, 18, -19, 20}, {10, -11, 12, -14}, 21, 3.25, 600, .6);
void initialize() {
  pros::delay(500);
  chassis.toggle_modify_curve_with_controller(true);
  chassis.set_active_brake(.1);
  chassis.set_curve_default(5, 5);
  chassis.joy_thresh_opcontrol(5, 5);
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
  pros::Task intake_task(intake_control, TASK_PRIORITY_DEFAULT,
                         TASK_STACK_DEPTH_DEFAULT, "Intake");
  chassis.set_drive_brake(MOTOR_BRAKE_COAST);
  while (true) {
    chassis.arcade_standard(ez::SPLIT);
    pros::delay(ez::util::DELAY_TIME);
  }
}