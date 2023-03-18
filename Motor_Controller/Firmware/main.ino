
#include <LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal myDisplay(rs, en, d4, d5, d6, d7);

void setup() {
  myDisplay.begin(16, 2);
  pinMode(1, INPUT_PULLUP);
  pinMode(0, OUTPUT);
}

void loop() {
  
  myDisplay.setCursor(0, 1);
  myDisplay.print(millis() / 1000);


  if (!digitalRead(1))
  {
    digitalWrite(0, HIGH);
    myDisplay.setCursor(5, 0);
    myDisplay.print("BUTTON 1 PRESSED !!");    
  } 
}

