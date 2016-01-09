/*
 * MotorController.cpp
 *
 *  Created on: Dec 31, 2015
 *      Author: gidaeon
 */

#include "AFMotor.h"
#include "MotorController.h"


MotorController::MotorController() :
_fR(AF_DCMotor(FRONT_RIGHT)),
_fL(AF_DCMotor(FRONT_LEFT)),
_rR(AF_DCMotor(REAR_RIGHT)),
_rL(AF_DCMotor(REAR_LEFT))

{
}

MotorController::~MotorController() {
	// TODO Auto-generated destructor stub
}

void MotorController::setAllSpeed(uint8_t speed) {
	_fR.setSpeed(speed);
	_fL.setSpeed(speed);
	_rR.setSpeed(speed);
	_rL.setSpeed(speed);
}

void MotorController::setMotorSpeed(motorType motor,uint8_t speed) {

	switch(motor){
	case FR :
		_fR.setSpeed(speed);
		break;
	case FL :
		_fL.setSpeed(speed);
		break;
	case RR :
		_rR.setSpeed(speed);
		break;
	case RL:
		_rL.setSpeed(speed);
		break;
	}
}

void MotorController::setAllRun(uint8_t command) {
	_fR.run(command);
	_fL.run(command);
	_rR.run(command);
	_rL.run(command);
}

void MotorController::setMotorRun(motorType motor, uint8_t command) {
	switch(motor){
	case FR :
		_fR.run(command);
		break;
	case FL :
		_fL.run(command);
		break;
	case RR :
		_rR.run(command);
		break;
	case RL:
		_rL.run(command);
		break;
	}
}
