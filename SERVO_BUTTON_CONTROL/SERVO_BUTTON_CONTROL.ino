#include <Servo.h>

Servo myservo;  // create servo object to control a servo

const int fwPin = 2; //pin for forward switch 
const int rwPin = 3; //pin for reverse switch

int pos = 0;    // variable to store the servo position

void setup() 
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(fwPin, INPUT);
  pinMode(rwPin, INPUT);
}

void loop() 
{
  if (fwPin == HIGH)
  {
    for (pos = 0; pos <= 180; pos += 1) 
    { // goes from 0 degrees to 180 degrees
      myservo.write(pos); // tell servo to go to position in variable 'pos'
      delay(15); // waits 15ms for the servo to reach the position
    }                      
  }
  else if (rwPin == HIGH)
  {
    for (pos = 180; pos >= 0; pos -= 1) 
    {
      myservo.write(pos); // tell servo to go to position in variable 'pos'
      delay(15); // waits 15ms for the servo to reach the position
    }
  }
}

