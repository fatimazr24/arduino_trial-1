
#include <Wire.h>
#include <Servo.h>

//glob vars
const int ldr_pin= A0;
const int gas_pin=A1;
const int temp_pin=A2;
const int servo_pin=9;
const int buzz_pin=12;

//servo obj
Servo s_obj;

//data holding vars
int temp=0, gas=0, ldr=0;

int cur_state=0;

void setup()
{
  
}

void loop()
{
  
}