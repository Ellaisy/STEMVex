#pragma config(StandardModel, "RVW CLAWBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
	To complete this challenge, program the robot to accelerate from power level 0
	to power level 127. 
*/

#include "vikaton.h"

task main {
	clearLCDLine(0);
	int i;
	for (i = 0; i <= 120; i+=10) {
		displayLCDNumber(0, 0, i);
		moveForward(i, 500);
		if (i == 120) {
			i += 7;
			moveForward(i, 500)
			displayLCDNumber(0, 0, i);
			break;
		}
	}
	displayLCDNumber(1, 0, i);
}