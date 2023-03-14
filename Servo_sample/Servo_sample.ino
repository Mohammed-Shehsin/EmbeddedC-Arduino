#include<servo>
Servo myservo;
void setup() {
  myservo.attach(10); //Pin where the terminal of the servo is connected

}

void loop() {
  myservo.write(10); //Servo handle turn 10 degree
  delay(100);
  myservo.write(180);//Servo handle turn 180 degree 
  delay(100);

}
