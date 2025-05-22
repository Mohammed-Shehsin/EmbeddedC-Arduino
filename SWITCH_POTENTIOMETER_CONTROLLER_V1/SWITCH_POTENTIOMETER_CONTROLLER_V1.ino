// Pin assignments
const int pot1Pin = A0;
const int pot2Pin = A1;
const int pot3Pin = A2;
const int switchPin = 2;

// Max raw value from potentiometer
const int maxValue = 1023;

void setup() {
  Serial.begin(9600);
  pinMode(switchPin, INPUT_PULLUP); // Using internal pull-up resistor
}

void loop() {
  // Read potentiometers
  int pot1Raw = analogRead(pot1Pin);
  int pot2Raw = analogRead(pot2Pin);
  int pot3Raw = analogRead(pot3Pin);

  // Map to 0–100
  int pot1 = map(pot1Raw, 0, maxValue, 0, 180);
  int pot2 = map(pot2Raw, 0, maxValue, 0, 180);
  int pot3 = map(pot3Raw, 0, maxValue, 0, 180);

  // Read switch state
  bool switchPressed = digitalRead(switchPin) == LOW;

  // Print all values
  Serial.print("Pot1: ");
  Serial.print(pot1);
  Serial.print(" | Pot2: ");
  Serial.print(pot2);
  Serial.print(" | Pot3: ");
  Serial.print(pot3);
  Serial.print(" | Switch: ");
  Serial.println(switchPressed ? "PRESSED" : "NOT PRESSED");

  delay(200); // Delay for stability
}
