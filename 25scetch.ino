Код:
#include <LiquidCrystal.h>

LiquidCrystal lcd(4, 5, 6, 7, 8, 9);

byte a[8] = {
  B00000,
  B01010,
  B01010,
  B00000,
  B00100,
  B10001,
  B01110,
  B00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, a);
  
  for (int row = 0; row < 2; row++) {
    for (int col = 0; col < 16; col++) {
      lcd.setCursor(col, row);
      lcd.write(byte(0));
    }
  }
}

void loop() {
}
