# Servo Rotor Angle Detection
Detecting the angle of a servo rotor and light up LEDs and generate a tone based on the angle.

**Watch on YouTube**

[![Watch on YouTube](https://i.postimg.cc/YC2Wdm9s/rotor-angle.jpg)](https://youtu.be/9NR4fL8bAO8)

The LEDs and tones are generated when the servo's rotor is at 0, 90 and 180 degrees. After the final
LED is lit there is a small pause for a full reset, after which the cycle repeats.

## Wiring
![](https://i.postimg.cc/fRgJ521V/Screenshot-2025-05-05-123552.png)

- **Servo**
  - Signal (orange) → D9 
  - VCC (red) → 5 V 
  - GND (brown) → GND
- **Buzzer**
  - → D8 
  - → GND
- **Red LED**
  - Anode → D2 through 220 Ω resistor 
  - Cathode → GND
- **Yellow LED**
  - Anode → D3 through 220 Ω resistor 
  - Cathode → GND
- **Green LED**
  - Anode → D4 through 220 Ω resistor 
  - Cathode → GND