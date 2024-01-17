#include "main.h"

void default_constants() {
  chassis.set_slew_min_power(80, 80);
  chassis.set_slew_distance(7, 7);
  chassis.set_pid_constants(&chassis.headingPID, 11, 0, 20, 0);
  chassis.set_pid_constants(&chassis.forward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.backward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.turnPID, 5, 0.003, 35, 15);
  chassis.set_pid_constants(&chassis.swingPID, 7, 0, 45, 0);
}
void pid_test() {

  chassis.set_drive_pid(24, 100, true);
  chassis.wait_drive();

  chassis.set_drive_pid(-12, 100);
  chassis.wait_drive();

  chassis.set_drive_pid(-12, 100);
  chassis.wait_drive();
}