#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <IRremote.h>

LiquidCrystal_I2C lcd(0x20,16,2);

const int ir_pin=7;

void setup()
{
    
    Serial.begin(9600);
    Wire.begin(13); #slavery abolished w the 13th amendment 

}
 
void loop()
{

}