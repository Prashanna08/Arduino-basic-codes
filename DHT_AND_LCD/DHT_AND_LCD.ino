//Initializing the libraries
#include "DHT.h"
#define DHTPIN 5
#define DHTTYPE DHT11//Same applicable for DHT21 or DHT22
#include <LiquidCrystal_I2C.h>

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() 
{
 dht.begin();// initialize the sensor
 lcd.backlight();// turn on lcd backlight
 lcd.init();// initialize lcd
}
void loop() 
{
 lcd.clear();
 lcd.setCursor(0,0); //Set the cursor on the first line
 lcd.print("Humidity:");
 lcd.print((float)dht.readHumidity()); //Prints the humidity
 lcd.print("%"); //Prints % after humidity value
 
 lcd.setCursor(0,1);//set the cursor on the second line
 lcd.print("Temperature:");
 lcd.print((float)dht.readTemperature());//print the temperature
 lcd.print(" C"); //Prints C after temperature value
 delay(750);
 lcd.clear();
}
