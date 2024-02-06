#include "main.h"
#include "OWL2/robot_config.hpp"

void default_constants() {
  chassis.set_slew_min_power(80, 80);
  chassis.set_slew_distance(7, 7);
  chassis.set_pid_constants(&chassis.headingPID, 11, 0, 20, 0);
  chassis.set_pid_constants(&chassis.forward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.backward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.turnPID, 5, 0.003, 35, 15);
  chassis.set_pid_constants(&chassis.swingPID, 7, 0, 45, 0);
}
void elimAuto()
{
// this one just slaps tri-balls accross, we can choose how many to do based on strategy
//this is the one wwe used for match play

    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
    slapper_left.move_voltage(11500);
    pros::delay(2000);
    slapper_left.move_voltage(-11500);
    pros::delay(500);
}

void autoWinPoint() 
{


//this is what we were trying to cook up after the torunement but before we knew that we could no longer slap the tri-balls




//this drives into place next to the match loading zone so it can slap the alliance tri-ball out for auto win point
//going to be tedious, need make sure its perfect
//also need to check and see if slaping ball counts as posession, cause if not we could intake ball that starts in middle
//this would allow us to be more efficent and score two quickly and easy
//if we are allowed, have intake spinning. Also have it spin after it intakes it since the robto would need to be in the opposite direction for match loading
  chassis.set_drive_pid(-135, 110);
  chassis.wait_drive();

  chassis.set_swing_pid(ez::LEFT_SWING, 40, 110);
  chassis.wait_drive();

  chassis.set_drive_pid(-28, 40);
  chassis.wait_drive();
 
 //gonna have to change this if we switch to neumatics
 //slaps alliance tri-ball into goal
  slapper_left.move_voltage(-8000);
  pros::delay(1000);
  slapper_right.move_voltage(8000);
  pros::delay(1500);

//drives and slams it into goal
  chassis.set_drive_pid(-28, 40);
  chassis.wait_drive();

  chassis.set_swing_pid(ez::LEFT_SWING, 40, 110);
  chassis.wait_drive();

  chassis.set_drive_pid(-60, 110);
  chassis.wait_drive();

  

}