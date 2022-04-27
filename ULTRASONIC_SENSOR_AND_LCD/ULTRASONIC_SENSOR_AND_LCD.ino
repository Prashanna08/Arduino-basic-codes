#include<UltraDistSensor.h> //Library for ultrasonic sensor
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

UltraDistSensor mysensor;
float reading;

void setup() 
{
    lcd.init(); //Initialize the lcd 
    lcd.backlight();
    Serial.begin(9600);
    mysensor.attach(8,9);//8 - Trigger pin , 9 - Echo pin
}

void loop() 
{
    reading=mysensor.distanceInCm();
    lcd.setCursor(0,0);
    lcd.print("Distance :- ");
    lcd.print(reading);
    delay(1000);
}
