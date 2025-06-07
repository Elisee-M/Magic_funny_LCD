# 🔢 ESP8266 Random Number Chaos on I2C LCD

Summon chaos with style. This project uses an ESP8266 and an I2C 16x2 LCD to display randomly generated numbers at random positions—perfect for testing, fun, or confusing mere mortals.

---

### 👑 Owner

> 🧠 **Crafted by:** [Elisee-M](https://github.com/Elisee-M)  
> 🪄 Code Wizardry by: **Elisee, the Lazy Mage of Microcontrollers**

---

## 🧙 Features

- Prints random numbers (0–99) on a 16x2 I2C LCD  
- Each number appears at a random cursor position  
- Auto-clears the LCD every 10 prints for more chaos  
- Pure magical randomness — no purpose, all fun  

## 🧰 Hardware Required

- ESP8266 board (e.g. NodeMCU, Wemos D1 Mini)  
- I2C LCD display (16x2 or 20x4)  
- Jumper wires  
- (Optional) Breadboard  

## 🔌 Wiring Guide

| LCD Pin | ESP8266 Pin |
|---------|-------------|
| VCC     | 3V3         |
| GND     | GND         |
| SDA     | D2          |
| SCL     | D1          |

> 📌 **Note**: Your I2C address is likely `0x27` or `0x3F`. Use an I2C scanner if unsure.

## 💻 Installation

1. Open Arduino IDE.  
2. Install `LiquidCrystal_I2C` from the Library Manager.  
3. Select your ESP8266 board and COM port.  
4. Open the [`arduino_codes.ino`](arduino_codes.ino) file.  
5. Upload and let the randomness rain.

## 📜 Code Overview

```cpp```
int randomNumber = random(0, 100);
int col = random(0, 16);
int row = random(0, 2);
lcd.setCursor(col, row);
lcd.print(randomNumber);

loopCount++;
if (loopCount >= 10) {
  lcd.clear();
  loopCount = 0;
}
