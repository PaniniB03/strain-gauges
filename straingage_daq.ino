#include "HX711.h"


//#define calibration_factor -7050.0  //This value is obtained using the SparkFun_HX711_Calibration sketch

#define LOADCELL_DOUT_PIN D3
#define LOADCELL_SCK_PIN D0

int incomingByte = 0;
HX711 scale;
//int calibration_factor=-7050;

void setup() {

  Serial.begin(115200);

  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);

  Serial.println("offset and scale");
  scale.set_scale(1.0);
  scale.set_offset(0.0);

  //scale.set_scale(calibration_factor); //This value is obtained by using the SparkFun_HX711_Calibration sketch

  //scale.set_scale(calibration_factor);

  //scale.tare();  //Assuming there is no weight on the scale at start up, reset the scale to 0

  // long zero_factor = scale.read_average();  //Get a baseline reading
  // Serial.print("Zero factor: ");            //This can be used to remove the need to tare the scale. Useful in permanent scale projects.
  // Serial.println(zero_factor);
  //delay(5000);
}

void loop() {
  // Serial.print("Reading: ");
  // Serial.print(scale.get_units(), 1); //scale.get_units() returns a float
  // Serial.println(" lbs"); //You can change this to kg but you'll need to refactor the calibration_factor
  //scale.tare();

  //  float readings = scale.get_units();
  // float readings2 = scale.read();

  //  Serial.print("This is readings1: ");
  // Serial.println(readings / 419430.4);

  // Serial.print("This is readings2: ");
  // Serial.println(readings2 / 419430.4);


  //Serial.println(scale.read_average(20) / 419430.4);
  //float scalevalue = scale.read_average(20);


  float scalevalue = scale.get_value();
  float scale_mv = scalevalue / 8338608.0 * 20.0;

  Serial.println(scale.get_offset());
  Serial.println(scale.get_scale());
  Serial.println(scalevalue);
  Serial.println(scale_mv);
  //Serial.println(scale.get_gain());

  delay(2000);
  // if (Serial.available()>0) {
  //   incomingByte = Serial.read();
  //     if (incomingByte == 97){              // Char 'a' = 97 decimal and we ignore the Char 10 for line feed
  //     delay(250);                           // Labview delay is 500ms
  //     Serial.println(scale.get_units(), 1); //scale.get_units() returns a float
  //     }
  //   }

  //difference in get and read functions. one is closer to 0, other is closer to 3 - unpowered h-bridge
}
