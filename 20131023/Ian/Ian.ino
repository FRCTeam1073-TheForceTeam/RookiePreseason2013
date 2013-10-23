#include "led.h"

int delayTime = 200; // ms

void setup() {
  Serial.begin(9600);
  setupLed(GREEN_LED);
}

void loop() {
  while(Serial.available() > 0) {
    int tempDelayTime = Serial.parseInt();
    
    if (tempDelayTime == 0) {
      while(Serial.available() > 0) {
        int theLed = Serial.parseInt();
        if (theLed == 1)
          setupLed(ONBOARD_LED);
        else if (theLed == 2)
          setupLed(GREEN_LED);
        else
          Serial.write("Please enter 1 for onboard, 2 for green\n");
      }
    }
    if (Serial.read() == '\n') {
      // do nothing, just much the carriage return
    }
  }
  flashLed(delayTime);
}
