#ifndef MOTORS_LIB_H
#define MOTORS_LIB_H

// Initialize right motor position to 0
//IMPORTANT TO CALL BEFORE THE WHILE LOOP
void init_pos_motor(void);

//Rolls in a straight line for length distance
void straight_line(uint8_t distance);

//Turns num_of_quarter_turns * 90 degrees
void quarter_turns(uint8_t num_of_quarter_turns);

//Rolls straight for length distance then turn 90 degrees
void straight_then_turn(uint8_t distance);

//Initializes loop thread
void loop_start(void);

//Sets speed to 0
void stop (void);

//Sets the speed to MOTOR_SPEED
void go (void);

#endif /* MOTORS_LIB_H */
