#include "firmware.h"

void setup() {
  Serial.begin(115200);
  delay(10);
  #ifdef DEBUG
  Serial << endl << "Booting device ..." << endl;
  #endif

  initPanTilt();
}

void loop() {
  Serial << ".";
  mainLoop();
}
