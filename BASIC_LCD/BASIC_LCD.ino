#include <LiquidCrystal.h> //Initialize LCD library

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //With the arduino pin number it is connected to

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() 
{
  lcd.begin(16, 2); // set up the LCD's number of columns and rows:
 
  lcd.print("hello, SVCE!"); // Print a message to the LCD.
}

void loop() 
{
  lcd.setCursor(0, 1); // Set the cursor to line #1
  delay(500);
  
  //Enabling and diabling cursor:
  //lcd.noCursor(); //Turns off the cursor
  //delay();
  //lcd.cursor(); //Turns on the cursor

  //Enabling and diabling display:
  //lcd.noDisplay(); //Turns off the display
  //delay(500);
  //lcd.Display(); //Turns on the display
  
  //Setting cursor to different positions:
  //lcd.setCursor(0, 0); // top left
  //lcd.setCursor(15, 0); // top right
  //lcd.setCursor(0, 1); // bottom left
  //lcd.setCursor(15, 1); // bottom right

  //Reverse printing:
  //lcd.rightToLeft();
  //lcd.leftToRight(); //For making the print to normal

  //Setting cursor to home:
  //lcd.home(); 

  //Printing the number of seconds since reset:
  //lcd.print(millis() / 1000);
}
