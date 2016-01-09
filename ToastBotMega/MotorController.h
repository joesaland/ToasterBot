/*
 * MotorController.h
 *
 *  Created on: Dec 31, 2015
 *      Author: gidaeon
 */

#ifndef MOTORCONTROLLER_H_
#define MOTORCONTROLLER_H_

#include "AFMotor.h"

enum motorType {FR=1, FL=2, RR=3, RL=4};

const uint8_t FRONT_RIGHT=1; // define motor on channel 1 with 1KHz default PWM
const uint8_t FRONT_LEFT=2; // define motor on channel 1 with 1KHz default PWM
const uint8_t REAR_RIGHT=4; // define motor on channel 1 with 1KHz default PWM
const uint8_t REAR_LEFT=3; // define motor on channel 1 with 1KHz default PWM

class MotorController {

public:
	//constructors
	MotorController();

	//destructors
	virtual ~MotorController();

	void setAllSpeed(uint8_t speed);
	void setMotorSpeed(motorType motor, uint8_t speed);

	void setAllRun(uint8_t command);
	void setMotorRun(motorType motor, uint8_t command);

private:
	AF_DCMotor _fR;
	AF_DCMotor _fL;
	AF_DCMotor _rR;
	AF_DCMotor _rL;

};

#endif /* MOTORCONTROLLER_H_ */
