# Control a passive buzzer for Arduino Uno with a button

Arduino generates a tone for the passive buzzer which then repeats that tone based on the defined frequency. This particular buzzer model has two pins: ground and digital out. Use a 10K resistor for the digital pin before connecting to an Arduino. The LED requires a 220 or 330 ohm resistor as seen in the picture. Also the buttons ground pin is connected to a 100 ohm resistor.

---

![alt text](https://github.com/PyhaMarkus/arduino-passive-buzzer/blob/master/pictures/buzzer_sketch_bb.png "Buzzer sketch")

---

### Parts used:
| Quantity | Part name                             |
| -------- |:-------------:                        |
| 1        | Arduino Uno Rev3                      |
| 1        | Passive buzzer                        |
| 1        | Button                                |
| 1        | 100 ohm resistor                      |
| 1        | 330 ohm resistor                      |
| 1        | 10K ohm resistor                      |
| 1        | LED                                   |
| 1        | A large breadboard                    |
| A lot    | Jumper wire                           |

---

### Libraries used:
None.
