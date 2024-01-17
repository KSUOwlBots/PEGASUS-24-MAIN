#include "main.h"
void intake_control() {
  while (true) {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) {
      intake.move_voltage(11500);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
      intake.move_voltage(-11500);
    } else {
      intake.move_voltage(0);
    }
    pros::delay(ez::util::DELAY_TIME);
  }
}