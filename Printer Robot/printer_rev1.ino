#include <Servo.h>

Servo clawServo, forearmServo, armServo, turretServo, leftDrive, rightDrive;
int clawLed;
int statusLed = 11;
char serialVal = 0;
void setup() {
  //clawServo.attach();
  //forearmServo.attach();
  /*armServ.attach();
  turretServo.attach();*/
  leftDrive.attach(6);
  rightDrive.attach(4);
  pinMode(statusLed, OUTPUT);
  digitalWrite(statusLed, HIGH);
}

void loop() {
  if (Serial.available()) {
    ;
  }
  serialVal = Serial.read();
 // driveRobot(Serial.read());


//void driveRobot(char serialVal) {
Serial.println(serialVal);
  if (serialVal == 'w') {
    leftDrive.writeMicroseconds(1706);
    rightDrive.writeMicroseconds(1300);
  }
  if (serialVal == 'a') {
    ;
  }
  if (serialVal == 's') {
    ;
  }
  if (serialVal == 'd') {
    ;
  }
  if (serialVal == ' ') {
    leftDrive.writeMicroseconds(1506);
    rightDrive.writeMicroseconds(1500);
  }
}
