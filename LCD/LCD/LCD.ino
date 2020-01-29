#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27,16,2);

void setup(){
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("hello world!");
  lcd.setCursor(0,1);
  lcd.print("row number: ");
  lcd.setCursor(12,1);
  lcd.print("2");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.noBacklight();
  lcd.noBacklight();
}

void loop(){
  
}
