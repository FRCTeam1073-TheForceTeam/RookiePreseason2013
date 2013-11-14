#include <Servo.h>

//Servo clawServo, forearmServo, armServo, turretServo, 
Servo leftDrive, rightDrive, armServo;
int clawLed;
int statusLed = 11;
char serialVal = 0;
//void write_l();

/* For drawing lines: 

Vertical: Drive forward and backwards
Horizontal: Extend claw as turret turns
......
*/
void setup() {
  /*clawServo.attach(0);
  forearmServo.attach(0);*/
  armServo.attach(4);
  //turretServo.attach(0);*/
  Serial.begin(9600);
  leftDrive.attach(6);
  rightDrive.attach(3);
  pinMode(statusLed, OUTPUT);
  digitalWrite(statusLed, HIGH);
  /*
  clawServo.write(0);
  forearmServo.write(0);
  armServo.write(0);
  turretServo.write(0);
  write_l(); */
}

void loop() {
  if (Serial.available()) {
    ;
  }
  serialVal = Serial.read();
 // driveRobot(Serial.read());
  if (serialVal == 'w') {
    leftDrive.writeMicroseconds(1706);
    rightDrive.writeMicroseconds(1300);
  }
  if (serialVal == 'a') {
    leftDrive.writeMicroseconds(1306);
    rightDrive.writeMicroseconds(1300);
    ;
  }
  if (serialVal == 's') {
    leftDrive.writeMicroseconds(1300);
    rightDrive.writeMicroseconds(1706);
    ;
  }
  if (serialVal == 'd') {
    leftDrive.writeMicroseconds(1706);
    rightDrive.writeMicroseconds(1700);
    ;
  }
  if (serialVal == ' ') {
    leftDrive.writeMicroseconds(1506);
    rightDrive.writeMicroseconds(1500);
  }
}
 
/*
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
 
 
 


//void driveRobot(char serialVal) {}
*/



