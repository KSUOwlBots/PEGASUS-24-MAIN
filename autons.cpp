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
void elimAuto
{
  //the one we used for match play
//very basic, just made the robot push tri-ball over bar t0 score it

    chassis.set_drive_pid(-120, 110);
    chassis.wait_drive();
}

void autoWinPoint() 
{
//this is what we were cooking up after the tournment but before we knew about the rule change
//you can ask questions of you need any more info
//you can ignore this and change it becasue this no longer works :(


//gonna have to change this if we switch to neumatics
//slap colored tri-ball into goal


/*
  slapper_right.move_voltage(8000);
  pros::delay(1000);
  slapper_right.move_voltage(-8000);
  pros::delay(2000);
*/

//drives and slams it into goal
  chassis.set_drive_pid(-28, 40);
  chassis.wait_drive();

  chassis.set_swing_pid(ez::RIGHT_SWING, 40, 110);
  chassis.wait_drive();
 
  chassis.set_drive_pid(-60, 110);
  chassis.wait_drive();

  chassis.set_drive_pid(40, 110);
  chassis.wait_drive();


//Turns and goes back to match load so we can score more in auto

//play wih the degrees and distance, need it to line up with match loading bar so it slaps effectively
  //chassis.set_turn_pid(180, 110);
  //chassis.wait_drive();

  //chassis.set_drive_pid(25, 40);
  //chassis.wait_drive();


/*
//slap tri-balls under the bar, does it 5 times. Can change it based on strategy
//will need to change if we move to neumatics
//Since neumatic bar will be straight and flat, robot will have to turn and hit tri-balls out
//This means get the movement down for one then do it 4 more times
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
*/


//then drives and makes sure they are over the line by pushing them
//also might want to deploy wing to make sure we dont miss a tri-ball
  
/*
  chassis.set_drive_pid(-28, 40);
  chassis.wait_drive();

  chassis.set_swing_pid(ez::LEFT_SWING, 40, 110);
  chassis.wait_drive();
 
  chassis.set_drive_pid(-100, 110);
  chassis.wait_drive();
*/
//time how long it takes so we know how much we have to play with

//figure out where its best to touch the bar, need both to touch the bar so figuring out the best spot will take time
//Intial guess would for this one to touch bar wiht zip ties touching top bar or just deploy wing to touch side bar
  

  



/*
//this is if we dont want to score more during auto and only focus on auto win point
  chassis.set_turn_pid(135, 110);
  chassis.wait_drive();

  chassis.set_drive_pid(-150, 110);
  chassis.wait_drive();

// gonna have to change this if we switch to neumatics
  slapper_left.move_voltage(11000);
  pros::delay(3000);
  slapper_left.move_voltage(0);

*/
  


}