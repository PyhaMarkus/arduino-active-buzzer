# Control a passive buzzer with Arduino Uno and a buzzer.

Arduino generates a tone for the passive buzzer which then repeats that tone based on the defined frequency. This particular buzzer model has two pins: ground and digital out. I used a 100 ohm resistor for the buzzer's digital out. The LED requires a 220 or 330 ohm resistor as seen in the picture. Also the button's ground pin is connected to a 10K ohm resistor.

Blue wires = ground  
Red wires = 5V power  
Black wires = digital signal

**Ignore the contradictory pin colors coming out of the buzzer.**

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
