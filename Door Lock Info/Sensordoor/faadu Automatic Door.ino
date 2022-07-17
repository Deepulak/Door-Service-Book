/*code by Vivek Agarwal , you can change the code and make your creativity to reality and make excellent projects .
 * Let's code
 */
#include <Servo.h>
Servo servo1;
Servo servo2;
int led1=8;
int led2=9;
int trig=4;
int echo=5;
int servo1_pin=6;
int servo2_pin=7;
int duration=0,dist=0;
void setup()
{
  Serial.begin(9600);
  
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
  servo1.attach(servo1_pin);
  servo2.attach(servo2_pin);
  servo1.write(90);
  servo2.write(90);
}

void loop()
{
  digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
pinMode(echo, INPUT);
duration = pulseIn(echo, HIGH);
dist = (duration*0.034) / 2;    //obtain distance

if(dist<20)
{
  Serial.println("Door Open");
  digitalWrite(led2,LOW);
  digitalWrite(led1,HIGH);
  servo1.write(90);
  servo2.write(0);
  delay(2000);
 
}
else
{
  Serial.println("Door Closed");
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  servo1.write(0);
  servo2.write(90);
  delay(1000);
}
}
