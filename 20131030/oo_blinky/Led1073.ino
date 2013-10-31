//#include "Led1073.h"

Led1073::Led1073(int userLed, int fastDelay, int slowDelay) {
  whichLed = userLed;
  fastDelayTime = fastDelay;
  slowDelayTime = slowDelay;
  
}

void Led1073::enable(void) {
  pinMode(whichLed, OUTPUT);
}

void Led1073::setFastDelay(int fastDelay) {
  fastDelayTime = fastDelay;
}

void Led1073::setSlowDelay(int slowDelay) {
  slowDelayTime = slowDelay;
}

void Led1073::flashLed(int flashCount) {
  for (int i = 0; i < flashCount; i++) {
    digitalWrite(whichLed, HIGH);
    delay(fastDelayTime);
    digitalWrite(whichLed, LOW);
    delay(fastDelayTime);
    
    }
if (flashCount != 1) {
  delay(slowDelayTime);
  }
}
