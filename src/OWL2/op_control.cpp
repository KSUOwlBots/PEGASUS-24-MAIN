#include "main.h"
void intake_control() {
  while (true) {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
      intake.move_voltage(11500);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
      intake.move_voltage(-11500);
    } else {
      intake.move_voltage(0);
    }
    pros::delay(ez::util::DELAY_TIME);
  }
}

void slapper_control() {
  bool toggle = false;
  while (true) {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) {
      toggle = !toggle;

      if (toggle) {
        slapper_left.move_velocity(100);
      } else {
        slapper_right.move_velocity(-100);
      }
    }
  }
}