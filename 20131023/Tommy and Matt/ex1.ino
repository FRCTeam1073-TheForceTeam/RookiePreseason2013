#include "led.h"
#define TIME_ON 50 // ms

int delayTime = 1000; // ms
int LED = 3;
int chooseLED = 2;

void setup() {
  Serial.begin(9600);
    setupLed(LED);
}

void loop() {
  if(chooseLED == 1){
      LED = 13;
    }
    if(chooseLED == 2){
      LED = 3;
    }
    else {
      Serial.println("invalid key stroke.....stupid");
    }
  while(Serial.available() > 0) {
    chooseLED = Serial.parseInt();
    if (Serial.read() == '\n') {
      // do nothing, just munch the carriage return
    }
  }
  flashLed(delayTime);
}
