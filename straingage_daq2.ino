
#include "HX711.h"

// HX711 circuit wiring
const int LOADCELL_DOUT_PIN = 2;
const int LOADCELL_SCK_PIN = 4;

const long LOADCELL_OFFSET = 50682624;
const long LOADCELL_DIVIDER = 5895655;

HX711 scale;

void setup() {
  Serial.begin(9600);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  //scale.set_scale(LOADCELL_DIVIDER);
  //scale.set_offset(LOADCELL_OFFSET);
}

void loop() {
  if (scale.is_ready()) {
    long reading = scale.read_average(20);
    Serial.print("HX711 reading: ");
    Serial.println(reading / 8338608.0 * 20.0);
  } else {
    Serial.println("HX711 not found.");
  }

  delay(1000);  // to be removed
}
