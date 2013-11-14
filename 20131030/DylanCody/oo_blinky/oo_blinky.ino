#include "Led1073.h"

/* Instantiate both LEDs so that we can choose which one to use
 */
Led1073 onboardLed(ONBOARD_LED);
Led1073 greenLed(GREEN_LED);
Led1073 *theLed;

/* Called once before operation
 */
void setup() {
  Serial.begin(9600);        // Enable serial console
  greenLed.enable();         // Activate each LED
  onboardLed.enable();
  theLed = &onboardLed;      // Choose onboard as default LED
}

/* Called repeatedly during operation
 */
void loop() {
  while(Serial.available() > 0) {
    int tempDelayTime = Serial.parseInt();    // read delay time from user
    /* don't store in delayTime yet because it may be zero, which would be too fast :-) */
    
    if (tempDelayTime == 0) {
      while(Serial.available() > 0) {
        int whichLed = Serial.parseInt();     // read led number from user
        if (whichLed == 1)                    // update active LED based on user input
          theLed = &onboardLed;
        else if (whichLed == 2)
          theLed = &greenLed;
        else                                  // provide help to user
          Serial.write("Please enter 1 for onboard, 2 for green\n");
      }
    }
    else                                      // delay time was non-zero, must be real 
      theLed->setFastDelay(tempDelayTime);
      
    if (Serial.read() == '\n') {
      // do nothing, just consume the carriage return to get it
      // out of the serial queue.
    }
  }
  theLed->flashLed();                         // blink LED on and off once
}
