
#include <jm_LiquidCrystal_I2C.h>

 //Include the library code:
#include <jm_Wire.h>
#include <LiquidCrystal.h>
#include <jm_Scheduler.h>
#include <LiquidCrystal_I2C.h>

//#define pins:

#define I2C_ADDR    0x27 // LCD address (make sure you run the I2C scanner to verify our LCD address)
#define Rs_pin  12        // Assign pins between I2C and LCD
#define Rw_pin  10
#define En_pin  11
#define BACKLIGHT_PIN 7
#define D4_pin  5
#define D5_pin  4
#define D6_pin  3
#define D7_pin  2

LiquidCrystal_I2C lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

void setup()
{
// set up backlight and turn on module:
lcd.setBacklightPin(BACKLIGHT_PIN,HIGH);
lcd.setBacklight(HIGH);

// set up the LCD's number of columns and rows:
lcd.begin(16, 2); //My LCD is 16x2
}

void loop()
{
    //Set the cursor to (0, 0) on line #1
    lcd.setCursor (0, 0);
    //lcd.autoscroll();
    lcd.print("SVCE");
    lcd.leftToRight();
    delay(500);
    
    //Set the cursor to (1, 0) on line #2
    lcd.setCursor(1,0);
    lcd.print("MECHANICAL");
    lcd.leftToRight();  
}

