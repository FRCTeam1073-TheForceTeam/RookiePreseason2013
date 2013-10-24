#include <Servo.h>

Servo clawServo, forearmServo, armServo, turretServo, leftDrive, rightDrive;
int clawLed;
int statusLed = 11;
char serialVal = 0;
void write_l();

void setup() {
  clawServo.attach(0);
  forearmServo.attach(0);
  armServo.attach(0);
  turretServo.attach(0);
  leftDrive.attach(6);
  rightDrive.attach(4);
  pinMode(statusLed, OUTPUT);
  digitalWrite(statusLed, HIGH);
  clawServo.write(0);
  forearmServo.write(0);
  armServo.write(0);
  turretServo.write(0);
  write_l();
}

void loop() {
  if (Serial.available()) {
    ;
  }
  serialVal = Serial.read();
 // driveRobot(Serial.read());
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
 

void write_l() { 
 // Letter L
 forearmServo.write(20);
 leftDrive.writeMicroseconds(1706);
 rightDrive.writeMicroseconds(1300);
 delay(500);
 rightDrive.writeMicroseconds(1700);
 forearmServo.write(0);
 delay(1500); // How fast is the robot?
 leftDrive.writeMicroseconds(1306);
 delay(500);
 leftDrive.writeMicroseconds(1706);
 delay(1000);
 leftDrive.writeMicroseconds(1506);
 rightDrive.writeMicroseconds(1500);
 // Robot should now be stopped
} 
 
 
 


//void driveRobot(char serialVal) {


