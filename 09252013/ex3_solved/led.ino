int theLed = ONBOARD_LED;

void setupLed(int whichLed) {
  theLed = whichLed;
  pinMode(theLed, OUTPUT);
}

void flashLed(int dtime) {
  digitalWrite(theLed, HIGH);
  delay(delayTime);
  digitalWrite(theLed, LOW);
  delay(delayTime);
}
