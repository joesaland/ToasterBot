//The setup function is called once at startup of the sketch
#include "Servo.h"
#include "NewPing.h"
#include "AFMotor.h"

AF_DCMotor motorFR(1); // define motor on channel 1 with 1KHz default PWM
AF_DCMotor motorFL(2); // define motor on channel 2 with 1KHz default PWM
AF_DCMotor motorBR(4); // define motor on channel 4 with 1KHz default PWM
AF_DCMotor motorBL(3); // define motor on channel 3 with 1KHz default PWM


void setup() {
// Add your initialization code here

	AF_DCMotor motorFR(1); // define motor on channel 1 with 1KHz default PWM
	AF_DCMotor motorFL(2); // define motor on channel 2 with 1KHz default PWM
	AF_DCMotor motorBR(4); // define motor on channel 4 with 1KHz default PWM
	AF_DCMotor motorBL(3); // define motor on channel 3 with 1KHz default PWM
}

void motorTest() {

	motorFR.run(FORWARD);      // turn it on going forward
	motorFL.run(FORWARD);      // turn it on going forward
	motorBR.run(FORWARD);      // turn it on going forward
	motorBL.run(FORWARD);      // turn it on going forward
	delay(1000);

	motorFR.run(BACKWARD);      // turn it on going forward
	motorFL.run(FORWARD);      // turn it on going forward
	motorBR.run(BACKWARD);      // turn it on going forward
	motorBL.run(FORWARD);      // turn it on going forward
	delay(1000);

	motorFR.run(FORWARD);      // turn it on going forward
	motorFL.run(FORWARD);      // turn it on going forward
	motorBR.run(FORWARD);      // turn it on going forward
	motorBL.run(FORWARD);      // turn it on going forward
	delay(1000);

	motorFR.run(FORWARD);      // turn it on going forward
	motorFL.run(BACKWARD);      // turn it on going forward
	motorBR.run(FORWARD);      // turn it on going forward
	motorBL.run(BACKWARD);      // turn it on going forward
	delay(1000);

	motorFR.run(BACKWARD);      // turn it on going forward
	motorFL.run(BACKWARD);      // turn it on going forward
	motorBR.run(BACKWARD);      // turn it on going forward
	motorBL.run(BACKWARD);      // turn it on going forward
	delay(1000);

	motorFR.run(RELEASE);      // stopped
	motorFL.run(RELEASE);      // stopped
	motorBR.run(RELEASE);      // stopped
	motorBL.run(RELEASE);      // stopped
	delay(1000);
}

// The loop function is called in an endless loop
void loop() {
//Add your repeated code here

	motorTest();

}
