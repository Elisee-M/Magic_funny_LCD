#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Change to 0x3F if needed

int loopCount = 0;

void setup() {
  Serial.begin(115200);
  lcd.begin();
  lcd.backlight();

  randomSeed(analogRead(A0)); // Add chaos
  lcd.print("Summoning Chaos");
  delay(2000);
  lcd.clear();
}

void loop() {
  int randomNumber = random(0, 100);  // 0 to 99
  int col = random(0, 16);            // column 0–15
  int row = random(0, 2);             // row 0–1

  lcd.setCursor(col, row);
  lcd.print(randomNumber);

  loopCount++;
  if (loopCount >= 10) { // Every 10 iterations...
    lcd.clear();         // Wipe the scroll clean
    loopCount = 0;
  }

  delay(500); // Chill between spells
}
