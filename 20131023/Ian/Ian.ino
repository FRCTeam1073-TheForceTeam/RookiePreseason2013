#include "led.h"

int delayTime = 200; // ms
int flashAmount = 5; //default

void setup() {
  Serial.begin(9600);
  setupLed(GREEN_LED);
}

void loop() {
  int i;
  int tempDelayTime = 0; 
  while(Serial.available() > 0) {
     tempDelayTime = Serial.parseInt();
  }  
    if (tempDelayTime == 0) {
      while(Serial.available() > 0) {
        theLed = Serial.parseInt();
      }
      while(Serial.available() > 0) {
        int flashAmount = Serial.parseInt();
      }
        if (theLed == 1)
          setupLed(ONBOARD_LED);
        else if (theLed == 2)
          setupLed(GREEN_LED);
        else
          Serial.write("Please enter 1 for onboard, 2 for green\n");
          
         }
    if (Serial.read() == '\n') {
      // do nothing, just much the carriage return
    }
  for(i = 0; i < flashAmount; i++){
    flashLed(delayTime);
    
  }
  
  delay(1000); 
    

}
