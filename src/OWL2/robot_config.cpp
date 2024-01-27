#include "main.h"
pros::Motor intake(6, pros::E_MOTOR_GEAR_600, false,
                   pros::E_MOTOR_ENCODER_ROTATIONS);
pros::Motor slapper_left(12, pros::E_MOTOR_GEAR_200, true,
                         pros::E_MOTOR_ENCODER_ROTATIONS);
pros::Motor slapper_right(11, pros::E_MOTOR_GEAR_200, false,
                          pros::E_MOTOR_ENCODER_ROTATIONS);