#include <Wire.h>

void setup() {
  Serial.begin(9600);
  while (!Serial); // Wait for Serial Monitor to open (optional for some boards)
  Serial.println("I2C Scanner Scanning...");
  Wire.begin();
}

void loop() {
  byte error, address;
  int devices = 0;

  Serial.println("Scanning...");

  for (address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("I2C device found at address 0x");
      Serial.print(address, HEX);
      Serial.println(" !");
      devices++;
    } else if (error == 4) {
      Serial.print("Unknown error at address 0x");
      Serial.println(address, HEX);
    }
  }

  if (devices == 0) {
    Serial.println("No I2C devices found\n");
  } else {
    Serial.println("Scan complete\n");
  }

  delay(5000); // Wait 5 seconds before next scan
}
