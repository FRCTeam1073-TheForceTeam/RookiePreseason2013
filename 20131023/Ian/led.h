#define GREEN_LED 4
#define ONBOARD_LED 13

extern int theLed;

void setupLed(int whichLed);
void flashLed(int dtime);
