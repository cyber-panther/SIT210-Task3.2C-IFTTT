int led = 4;
float light_val;

#include <BH1750.h>
#include <Wire.h>

BH1750 lightMeter;

void setup() {
  pinMode(led, OUTPUT)

  Serial.begin(9600);
  Wire.begin();
  lightMeter.begin();

  Serial.println(F("BH1750 Test begin"));
}

void loop() {

  light_val = lightMeter.readLightLevel();

  if (light_val < 300)
  {
    digitalWrite(led, HIGH);
  }

  else
  {
    digitalWrite(led, LOW);
  }
}
