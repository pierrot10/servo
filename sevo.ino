#include <Arduino.h>
#include <Servo.h>

Servo servo_x;
Servo servo_y;

//#define SX 10
//#define SY 9 

#define SX A2
#define SY A1

void setup() {
 
  //while (!Serial);
  Serial.begin(9600);
  
  delay(2000);
  #if defined(__AVR__) || defined(ARDUINO_SAMD_ZERO)
    Serial.println(F("AVR || SAMD_ZERO"));
  #elif defined(ARDUINO_ARCH_ESP8266)
    Serial.println(F("ARCH_ESP8266"));
  #elif defined(__MKL26Z64__)
    Serial.println(F("MKL26Z64"));
  #else
    #error Unknown architecture in aes.cpp
  #endif
  Serial.println(F("Start"));

  pinMode(SX, OUTPUT);
  pinMode(SY, OUTPUT);
  digitalWrite(SX,LOW);
  
  servo_x.attach(SX,650,2400); // pin, min and max microseconds
  servo_y.attach(SY,850,2550);
  
   int pos=0;

  servo_x.write(90);
  delay(15);
  servo_y.write(90);
  delay(15);
  
  Serial.println("Test servo X 0° to 180°");
  for (pos = 90; pos <= 180; pos++) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Serial.println(pos);
    servo_x.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
  }
  Serial.println("Test servo X 180° to 0°");
  for (pos = 180; pos >= 0; pos--) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Serial.println(pos);
    servo_x.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
  }

  Serial.println("Test servo X 180° to 0°");
  for (pos = 0; pos <= 90; pos++) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Serial.println(pos);
    servo_x.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
  }
  
  servo_x.write(90);
  delay(15);
  servo_y.write(90);
  delay(15);
  
  Serial.println("Test servo Y 0° to 180°");
  for (pos = 90; pos <= 180; pos++) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Serial.println(pos);
    servo_y.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  Serial.println("Test servo Y 180° to 0°");
  for (pos = 180; pos >= 0; pos--) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Serial.println(pos);
    servo_y.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 0; pos <= 90; pos++) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Serial.println(pos);
    servo_y.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
 
  servo_x.write(90);
  delay(15);
  servo_y.write(90);
  delay(15);
  
  }

void loop() {
  
}
