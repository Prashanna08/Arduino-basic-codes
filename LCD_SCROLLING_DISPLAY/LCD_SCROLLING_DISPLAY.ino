#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() 
{
  lcd.begin(16, 2); // set up the LCD's number of columns and rows:
}

void loop() 
{

  lcd.setCursor(0, 0); // set the cursor to (0,0):

  for (int thisChar = 0; thisChar < 10; thisChar++) // print from 0 to 9:
  {
    lcd.print(thisChar);
    delay(500);
  }

  lcd.setCursor(16, 1); // set the cursor to (16,1):

  lcd.autoscroll(); // set the display to automatically scroll:

  for (int thisChar = 0; thisChar < 10; thisChar++) // print from 0 to 9:
  {
    lcd.print(thisChar);
    delay(500);
  }

  lcd.noAutoscroll(); // turn off automatic scrolling

  lcd.clear(); // clear screen for the next loop:
}
