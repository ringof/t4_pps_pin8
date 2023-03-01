#include "Arduino.h"

#if defined(__IMXRT1062__) //Teensy 4.0

class T4_PPS_PIN8 {
 public:
  T4_PPS_PIN8();
  void begin(int ratio_pct);

 private:
  void flexpwm_init(int scale, int ratio_pct);
  void xbar_connect(unsigned int input, unsigned int output);
  void xbar_init();
  void qtmr40_init(int hz);
  
};

#else
#error "Sorry, t4_pps_pin8 only works on Teensy 4.0"
#endif
