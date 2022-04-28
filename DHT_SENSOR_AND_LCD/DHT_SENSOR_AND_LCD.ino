#include <LiquidCrystal.h> //Initialize LCD library
#include <dht.h>

#define dht_apin A2 // Analog Pin sensor is connected to
 
dht DHT;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //With the arduino pin number it is connected to

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() 
{
  lcd.begin(16, 2); // set up the LCD's number of columns and rows:
 
}

void loop() 
{
  lcd.setCursor(0, 0); // Set the cursor to line #1
  DHT.read11(dht_apin);
  lcd.print("Current humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%  ");
  lcd.setCursor(1, 0);
  lcd.print("temperature = ");
  lcd.print(DHT.temperature); 
  lcd.println("C  ");
  delay(500);
}
