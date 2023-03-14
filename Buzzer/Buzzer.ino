int buzzer=7; //Pin where your connecting the terminal of buzzer

void setup() {
  pinMode(buzzer,OUTPUT);


}

void loop() {
  tone(buzzer,10); // you can select the value in between 0-6000 for different variety / varient of sound
  delay(2000);

}
