/* 
	To complete this challenge, program the robot to move to the end (the black striped area) 
	of the Labyrinth. The robot must NOT cross any of the black lines.
*/

#pragma config(StandardModel, "RVW CLAWBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
#include "vikaton.h"

task main() {
	displayLCDCenteredString(0, "Started");
	moveForward(3000);
	turnX(0, 100, 1190);
	moveForward(3200);
	turnX(100, 0, 1190);
	moveForward(2500);
	turnX(100, 0, 1200);
	moveForward(1500);
	displayLCDCenteredString(0, "Finished");
}