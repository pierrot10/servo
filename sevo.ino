/*#if defined(__AVR__) || defined(ARDUINO_SAMD_ZERO)
  #include <avr/pgmspace.h>
  #include <Arduino.h>
#elif defined(ARDUINO_ARCH_ESP8266)
  #include <ESP.h>
#elif defined(__MKL26Z64__)
  #include <Arduino.h>
#else
  #error Unknown architecture in aes.cpp
#endif
*/

#include <SPI.h>
#include <Wire.h>
#include <Servo.h>

Servo servo_x;
Servo servo_y;

#define SX 9
#define SY 10 

void setup() {
 
  //while (!Serial);
  Serial.begin(9600);

  delay(2000);
  Serial.println(F("Start"));

  pinMode(SX, OUTPUT);
  //pinMode(SY, OUTPUT);
  digitalWrite(SX,LOW);
    
  servo_x.attach(SX,1000,2000);
  // servo.attach(SY);

  int pos=0;


 /*
  * Solution 1
  */
  Serial.println("Test servo X");
  Serial.println(millis());
  digitalWrite(SX,HIGH);
  delay(1);
  Serial.println(millis());
  digitalWrite(SX,LOW);
  delay(1000);

  Serial.println(millis());
  digitalWrite(SX,HIGH);
  delay(1.5);
  Serial.println(millis());
  digitalWrite(SX,LOW);
  delay(1000);
  
  Serial.println(millis());
  digitalWrite(SX,HIGH);
  delay(2);
  Serial.println(millis());
  digitalWrite(SX,LOW);

  Serial.println("Test end X");
  Serial.println(millis());

/*
 * Soltuion 2
 */
/*
  Serial.println("Test servo X UP");
  for (pos = 0; pos <= 4; pos++) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Serial.println(pos);
    servo_x.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1000);                       // waits 15ms for the servo to reach the position
  }
  Serial.println("Test servo X Down");
  for (pos = 4; pos >= 0; pos--) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Serial.println(pos);
    servo_x.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1000);                       // waits 15ms for the servo to reach the position
  }
 */



  /*
 * Solution 3
 */
  
  servo_x.write(0);
  delay(500);
  servo_x.write(90);
  delay(500);
  servo_x.write(180);
  delay(500);   
  
}

void servo(float angle){
  digitalWrite(SX,HIGH);
  delay(angle);
  digitalWrite(SX,LOW);
}

void loop() {
  
}
