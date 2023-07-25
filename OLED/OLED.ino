#include <GyverOLED.h>

GyverOLED<SSH1106_128x64> oled;
int i=0;
void setup() {
  oled.init();
  oled.clear();
  oled.update();
  oled.setCursorXY(30,26);
  oled.print("Welcome !");
  oled.rect(0,0,127,63,OLED_STROKE);
  oled.update();
  delay(1000);
  oled.clear();
  oled.setCursorXY(35,26);
  oled.print("0 to 100");
  oled.rect(0,0,127,63,OLED_STROKE);
  oled.update();
  delay(500);
  
}

void loop() {
  oled.clear();
  oled.setCursorXY(55,26);
  oled.print(i);
  oled.rect(0,0,127,63,OLED_STROKE);
  delay(100);
  oled.update();
  i++;
  if(i>100){
    i=0;
  }

}