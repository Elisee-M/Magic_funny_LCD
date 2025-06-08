#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // Use 0x3F if your LCD has a different address

void setup() {
  lcd.begin();
  lcd.backlight();
}

void loop() {
  // Snoozy sequence begins...
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Elisee is");
  lcd.setCursor(5, 1);
  lcd.print("sleeping");

  delay(1000);

  // Emoji sleep animation 💤
  for (int i = 0; i < 3; i++) {
    lcd.setCursor(13 - i, 1);
    lcd.print("💤");
    delay(500);
    lcd.setCursor(13 - i, 1);
    lcd.print("  ");
  }

  // After the Zzz... pause before looping
  delay(1500);
}
