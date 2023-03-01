#include "t4_pps_pin8.h"

#define PPS_POSITIVE_PERCENT 25 // 25% duty cycle (250 ms ON, 750 ms OFF)

T4_PPS_PIN8 pps_out = T4_PPS_PIN8();

void setup() {
  pps_out.begin(PPS_POSITIVE_PERCENT);
}

void loop() {
}
