# servo
This is a small exemple to test the Min Pan Tilt robot https://www.adafruit.com/product/1967 with two micro servos https://www.adafruit.com/product/169 on different pin of the Adafruit Trinket Pro 3V/12Mhz https://www.adafruit.com/product/2010 and Feather MO LoRa (3V/48Mh) https://learn.adafruit.com/radio-featherwing/using-the-rfm-9x-radio. It also been tested on an Arduino Mini Pro 3V and 5V.

Library : Arduino Servo library https://www.arduino.cc/en/Reference/Servo

Note that the servo has never been working on 3V pin of all the menrtionned board. I had to connect the red wire to the USB pin of the board. I also bring you attention of the frequence of the boards which has an influence of the rotatio (pulse lengh) of the Mini Pan Tilt.

## Connection
Micro servo => Trinket:
Red wires -> USB,
Brown wires -> G pin (GND),
Yellow wires -> A1 (x) and A2 (y)

I used a FTDI cable from my laptop to the Trinket Pro board: https://www.adafruit.com/product/70
For the Feather MO board, I used a micro USB cable.


## Note
### Pulse lengh
The longstanding industry convention for servo pulse timing was 1000us to 2000us with 1500us being the neutral position. The new generation of low-cost hobby servos have quite a bit more variability - even among servos of the same model. To accommodate this variability, the Arduino library had to add 'min' and 'max' parameters to the "attach()" function. You will need to calibrate each of your servos and adjust the min and max parameters to get the range that you need. 

https://www.arduino.cc/en/Reference/ServoAttach

Usually Position "0" (1.5ms pulse) is middle, "90" (~2ms pulse) is all the way to the right, "-90" (~1ms pulse) is all the way to the left.
For my test, I had to adapt this value.
Read more : https://learn.adafruit.com/adafruit-arduino-lesson-14-servo-motors/servo-motors



### If the Servo Misbehaves
Your servo may behave erratically, and you may find that this only happens when the Arduino is plugged into certain USB ports
Read more: https://learn.adafruit.com/adafruit-arduino-lesson-14-servo-motors/if-the-servo-misbehaves 

# Improvement
Feel you free to share your suggestions to improve it
