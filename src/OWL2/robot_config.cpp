#include "main.h"
pros::Motor intake(17, pros::E_MOTOR_GEAR_600, false,
                   pros::E_MOTOR_ENCODER_ROTATIONS);
pros::Motor slapper_left(4, pros::E_MOTOR_GEAR_200, true,
                         pros::E_MOTOR_ENCODER_ROTATIONS);
pros::Motor slapper_right(4, pros::E_MOTOR_GEAR_200, false,
                          pros::E_MOTOR_ENCODER_ROTATIONS);