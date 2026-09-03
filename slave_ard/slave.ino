#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <IRremote.h>

LiquidCrystal_I2C lcd(0x20,16,2);

const int ir_pin=7;
