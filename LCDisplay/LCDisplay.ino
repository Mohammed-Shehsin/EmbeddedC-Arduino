// In Liquid Crystal Display you should have to connect the pins to the Arduino Board on the folllowing order.

//   vss - GND
//   VDD - +5v
//   Vo - Wiper pin of pot (middle) - other two ends of the pot connect to +5v and GND
//   RS - Digitalpin 8
//   RW - GND
//   E  - digitalpin 9
//   D4 - digitalpin 4
//   D5 - digitalpin 5
//   D6 - digitalpin 6
//   D7 - digitalpin 7
//   A  - +5v
//   k  - GND

#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7); 
int 1,j;

void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.clear();
lcd.setcursor(4,0);
lcd.print("Hello");   //print "Hello" on the first line 4 place apart from the left
lcd.setcursor(1,1);
lcd.print("World..!"); //print "World..!" on the 2nd line 1st place apart from the left
delay(1000);


  //Scrolling TEXT

for(i=0;i<=1;i++){
  for(j=0;j<13;j++){
    lcd.clear();
    lcd.setcursor(j,i);
    lcd.prind("WELCOME");  //Welcome will be printed and scrolled over the cells
    delay(1000);
  }
}


}
