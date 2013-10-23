#include "led.h"

int delayTime = 200; // ms
int flashCount = 5;

void setup() {
  Serial.begin(9600);
  setupLed(GREEN_LED);
}

void loop() {
  int i;
  while(Serial.available() > 0) {
    flashCount = Serial.parseInt();
    
    if (Serial.read() == '\n') {
      // do nothing
    }
  }
  
  for(i = 0; i < flashCount; i++)
    flashLed(delayTime);
  delay(1000);
}
