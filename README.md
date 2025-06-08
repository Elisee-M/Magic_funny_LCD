# 🧙 Elisee's Magical ESP8266 LCD Projects

A collection of chaotic, charming, and chill ESP8266 LCD projects straight from the lab of **Elisee the Lazy Mage**. Each sketch has a unique personality — from displaying random numbers to putting your name to sleep like a wizard on vacation.

---

## 👑 Owner

**Created by:** [Elisee-M](https://github.com/Elisee-M)  
**Title(s):** Bug Slayer · Name Shuffler · LCD Naplord

---

## 📦 Project List

### 1. `arduino_codes.ino` – 🌀 Random Number Chaos

- Random numbers (0–99) appear at random positions on a 16x2 LCD.
- LCD clears every 10 numbers for more randomness.
- Great for visual testing, boredom destruction, and displaying wizard energy.

---

### 2. `name_showcase.ino` – 🎭 Name Generator Theater

- Cycles through a list of *funny* and *epic* name titles like:
  - `🧙 Elisee the Wise`
  - `404: Elisee Not Found`
  - `Elisee.cpp Wizard`
- Shows each name centered on the LCD every 2 seconds.
- Perfect for ego boosting or conference demos 😎

---

### 3. `sleeping.ino` – 😴 Elisee is Sleeping

- Displays `"Elisee is sleeping"` and animates the `"💤"` emoji drifting across the screen.
- Loops indefinitely like a nap that never ends.
- Ideal for idle display states, chill vibes, or post-debugging recovery.

---

## 🧰 Hardware Required

- ESP8266 (NodeMCU, Wemos D1 Mini, etc.)
- 16x2 I2C LCD display
- Jumper wires + optional breadboard

> 🔍 Most LCDs use I2C address `0x27` or `0x3F`

---

## 🧪 How to Use

1. Install the `LiquidCrystal_I2C` library via Arduino Library Manager.
2. Connect your LCD:
   - SDA → D2  
   - SCL → D1  
   - VCC → 3V3  
   - GND → GND
3. Open any `.ino` file in the Arduino IDE.
4. Select your ESP8266 board and upload!

---

## ✨ License

MIT License — this code is free to use, remix, and sprinkle fairy dust on.  
Just give a nod to **Elisee** if it made your LCD smile.

> _"May your screen glow bright, and your loops never crash."_ 🔁
