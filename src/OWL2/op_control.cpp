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
  while (true) {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) {
         slapper_left.move_voltage(11500);
      } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)){
        slapper_left.move_voltage(-11500);
      } else {
        slapper_right.move_voltage(-00100);
      }
    
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_A)){
        slapper_right.move_voltage(11500);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_X)){
      slapper_right.move_voltage(-11500);
    } else{
      slapper_right.move_voltage(-00100);
    } 
    pros::delay(ez::util::DELAY_TIME);
  }
}

void WinchC(){
  while(true){
    if(master.get_digital(pros::E_CONTROLLER_DIGITAL_B)){
      WinchL.move_voltage(-11500);
      WinchR.move_voltage(11500);
    }
    if(master.get_digital(pros::E_CONTROLLER_DIGITAL_Y)){
      WinchL.move_voltage(5000);
      WinchR.move_voltage(-5000);
    }
  }
}