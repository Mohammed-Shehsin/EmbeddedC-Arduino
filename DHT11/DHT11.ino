#include <DHT.h>

#define DHTPIN A0 // Define the pin where your DHT11 is connected
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000); // Wait for 2 seconds between measurements

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Temperature (°C): ");
  Serial.println(temperature);
  Serial.print("Humidity (%): ");
  Serial.println(humidity);
}
