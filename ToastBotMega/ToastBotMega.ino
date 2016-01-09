#include "MotorController.h"
#include "PingRadar.h"


#define PING_PIN  7  // Arduino pin tied to both trigger and echo pins on the ultrasonic sensor.
#define MAX_DISTANCE 40 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.


NewPing sonar(PING_PIN,PING_PIN,MAX_DISTANCE); // NewPing setup of pin and maximum distance.
MotorController mC;
Servo servo1;
int pos;

void setup() {
// Add your initialization code here

	  mC.setAllSpeed(200);
	  servo1.attach(9);
	  pos = 0;
}

void motorTest() {

//	mc.setAllRun(FORWARD);      // turn it on going forward

	delay(2000);
	mC.setAllRun(RELEASE);      // stopped	delay(2000);

	mC.setMotorRun(FR,BACKWARD);      // turn it on going forward
	mC.setMotorRun(FL,FORWARD);      // turn it on going forward
	mC.setMotorRun(RR,BACKWARD);      // turn it on going forward
	mC.setMotorRun(RL,FORWARD);      // turn it on going forward
	delay(2000);

	mC.setAllRun(RELEASE);      // stopped
	delay(2000);

//	mc.setAllRun(FORWARD);      // turn it on going forward
//	delay(2000);

//	mc.setAllRun(RELEASE);      // stopped
//	delay(2000);

	mC.setMotorRun(FR,FORWARD);      // turn it on going forward
	mC.setMotorRun(FL,BACKWARD);      // turn it on going forward
	mC.setMotorRun(RR,FORWARD);      // turn it on going forward
	mC.setMotorRun(RL,BACKWARD);      // turn it on going forward
	delay(2000);

	mC.setAllRun(RELEASE);      // stopped
	delay(2000);

//	mc.setAllRun(BACKWARD);      // stopped
//	delay(2000);

//	mc.setAllRun(RELEASE);      // stopped
//	delay(2000);

}

void radarTest() {

	for (pos=15; pos<165; pos++) {
	    servo1.write(pos);
	    delay(50);                      // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
	    unsigned int uS = sonar.ping_median(5); // Send ping, get ping time in microseconds (uS).
	    Serial.print(pos);
	    Serial.print(",");
	    Serial.print(uS / US_ROUNDTRIP_CM);
	    Serial.print(".");
	 }


	   for (pos=165; pos>015; pos--) {
	    servo1.write(pos);
	    delay(50);
	    unsigned int uS = sonar.ping_median(5); // Send ping, get ping time in microseconds (uS).
	    Serial.print(pos);
	    Serial.print(",");
	    Serial.print(uS / US_ROUNDTRIP_CM);
	    Serial.print(".");
	 }
}

// The loop function is called in an endless loop
void loop() {
//Add your repeated code here

//	radarTest();
//	delay(2000);

	motorTest();
	delay(2000);

}
