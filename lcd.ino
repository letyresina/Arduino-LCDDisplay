#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);

byte shit[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B01110,
  B10001,
  B00000,
};

byte smile[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

byte serious[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B11111,
  B00000,
  B00000,
};

void setup()
{
  lcd.begin(16,2);              
  lcd.clear();                  
  lcd.setCursor(0,0);           
  lcd.print("Anny Camis Lety");    
  lcd.setCursor(0,1);           
  lcd.print("Lulu");
  lcd.createChar(0, shit);
  lcd.createChar(1, smile);
  lcd.createChar(2, serious);
}

void loop()
{
  delay(1000);
  lcd.noDisplay();
  delay(500);
  lcd.display();
  lcd.setCursor(15, 1);  
  lcd.write(byte(0));
  delay(1500);
  lcd.setCursor(15, 1);  
  lcd.write(byte(1));
  delay(1500);
  lcd.setCursor(15, 1);  
  lcd.write(byte(2));
}
