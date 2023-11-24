#include <MicroMidiDevices.h>

/*
 * Instantiate and configure
 */

//            pin(s)  midiChannel (1-16)  controllerNumber (0-127)    label for debug
MMPot pot1  ( A0,     1,                  50,                         "POT");
MMEnc enc   ( 2, 3,   1,                  60,                         "ENC");

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Update. All done!
  pot1.update();
  enc.update();
}
