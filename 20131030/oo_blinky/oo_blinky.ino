#include "Led1073.h"

Led1073 onboardLed(ONBOARD_LED);
Led1073 greenLed(GREEN_LED);
Led1073 *theLed;

void setup() {
  Serial.begin(9600);
  greenLed.enable();
  onboardLed.enable();
  theLed = &onboardLed;
}

void loop() {
  while(Serial.available() > 0) {
    int tempDelayTime = Serial.parseInt();
    
    if (tempDelayTime == 0) {
      while(Serial.available() > 0) {
        int whichLed = Serial.parseInt();
        if (whichLed == 1)
          theLed = &onboardLed;
        else if (whichLed == 2)
          theLed = &greenLed;
        else
          Serial.write("Please enter 1 for onboard, 2 for green\n");
      }
    }
    else
      theLed->setFastDelay(tempDelayTime);
      
    if (Serial.read() == '\n') {
      // do nothing, just consume the carriage return to get it
      // out of the serial queue.
    }
  }
  theLed->flashLed();
}
