#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(8, 2);
  lcd.print("Hello");
  lcd.setCursor(0, 1); 
 lcd.print("World");
}

void loop() {
}
