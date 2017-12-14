# servo
This is a small draft exemple to test the micro servo https://www.adafruit.com/product/169 on different pin of the Adafruit Trinket Pro https://www.adafruit.com/product/2010

## Connection
Micro servo => Trinket
Red wires -> 3V pin
Brown wires -> G pin (GND)
Orange wires -> pin 9 (x) and 10 (y)

I used a FTDI cable from my laptop to the Trinket Pro board: https://www.adafruit.com/product/70


## Note
### Pulse lengh
Position "0" (1.5ms pulse) is middle, "90" (~2ms pulse) is all the way to the right, "-90" (~1ms pulse) is all the way to the left.
Read more : https://learn.adafruit.com/adafruit-arduino-lesson-14-servo-motors/servo-motors

### If the Servo Misbehaves
Your servo may behave erratically, and you may find that this only happens when the Arduino is plugged into certain USB ports
Read more: https://learn.adafruit.com/adafruit-arduino-lesson-14-servo-motors/if-the-servo-misbehaves 
