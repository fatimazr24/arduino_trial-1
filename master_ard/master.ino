
#include <Wire.h>
#include <Servo.h>

//glob vars
const int ldr_pin= A0;
const int gas_pin=A1;
const int temp_pin=A2;
const int servo_pin=9;
const int buzz_pin=12;

//servo obj
Servo servo_obj;

//data holding vars
int temp=0, gas=0, ldr=0;

int cur_state=0;

void setup()
{
  Serial.begin(9600);
  Wire.begin();

  //pin initalising
  pinMode(buzz_pin, OUTPUT);
  servo_obj.attach(servo_pin);
}

void loop()
{
  


}

void s_data()
{
  //reading sensor data
    temp=analogRead(temp_pin);
    ldr=analogRead(ldr_pin);
    gas=analogRead(gas_pin);

  //getting temp value from dig. value
    double temp_c=(temp*5.0)/1023; 
    temp_c-=0.5;
    temp_c*=100.0

    
}