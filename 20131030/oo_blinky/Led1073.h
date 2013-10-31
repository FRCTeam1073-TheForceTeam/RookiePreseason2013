#define GREEN_LED 4
#define ONBOARD_LED 13

class Led1073 {
private:
  static const int fastDelayDflt = 500;
  static const int slowDelayDflt = 1000;
  int whichLed;
  int fastDelayTime;
  int slowDelayTime;
  //int userFlashCount;
  
public:
  Led1073(int pin, int fastDelay = fastDelayDflt, int slowDelay = slowDelayDflt);
  void enable(void);
  void setFastDelay(int fastDelay);
  void setSlowDelay(int slowDelay);
  void flashLed(int flashCount = 1);
};
