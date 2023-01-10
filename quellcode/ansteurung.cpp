#include <stdio.h>
#include <wiringPi.h>
#include <iostream>
#include "test2.cpp"
using namespace std;

void DEFINE()
{
     wiringPiSetup();
     //motor1
     pinMode(27,OUTPUT);//GES
     pinMode(25,OUTPUT);//IN3
     pinMode(28,OUTPUT);//IN4
     //motor2
     pinMode(16,OUTPUT);//GES
     pinMode(0,OUTPUT);//IN3
     pinMode(1,OUTPUT);//IN4
     //motor3
     pinMode(2,OUTPUT);//GES
     pinMode(3,OUTPUT);//IN1
     pinMode(4,OUTPUT);//IN2

}
void STOP()
{
     //motor1
     digitalWrite(2,LOW);
     //motor2
     digitalWrite(16,LOW);
     //motor3
     digitalWrite(27,LOW);

}
void FORWARD()
{

     //motor2
     digitalWrite(16,HIGH);//GES
     digitalWrite(1,HIGH);//IN3
     digitalWrite(0,LOW);//IN4
     //motor3
     digitalWrite(2,HIGH);//GES
     digitalWrite(3,HIGH);//IN1
     digitalWrite(4,LOW);//IN2
     delay(5000);
}

void BACKWARD()
{
     //motor2
     digitalWrite(16,HIGH);//GES
     digitalWrite(1,LOW);//IN3
     digitalWrite(0,HIGH);//IN4
     //motor3
     digitalWrite(2,HIGH);//GES
     digitalWrite(3,LOW);//IN1
     digitalWrite(4,HIGH);//IN2
     delay(3000);
}

void  LINKS()
{
        //motor2
        digitalWrite(16,HIGH);//GES
        digitalWrite(1,HIGH);//IN4
        digitalWrite(0,LOW);//IN3
        //motor3
        digitalWrite(2,HIGH);//GES
        digitalWrite(4,HIGH);//IN2
        digitalWrite(3,LOW);//IN1
        //motor1
        digitalWrite(27,HIGH);//GES
        digitalWrite(25,HIGH);//IN3
        digitalWrite(28,LOW);//IN4
        delay(1110);
        STOP();

}
void  LINKS2()
{
        FORWARD();
        //motor2
        digitalWrite(16,LOW);//GES
        //motor3
        digitalWrite(2,HIGH);//GES
        digitalWrite(4,HIGH);//IN2
        digitalWrite(3,LOW);//IN1
        //motor1
        digitalWrite(27,HIGH);//GES
        digitalWrite(25,LOW);//IN3
        digitalWrite(28,HIGH);//IN4
        delay(2110);
        STOP();

}

void  RECHTS()
{
        //motor2
        digitalWrite(16,HIGH);//GES
        digitalWrite(1,LOW);//IN4
        digitalWrite(0,HIGH);//IN3
        //motor3
        digitalWrite(2,HIGH);//GES
        digitalWrite(4,LOW);//IN2
        digitalWrite(3,HIGH);//IN1
        //motor1
        digitalWrite(27,HIGH);//GES
        digitalWrite(25,LOW);//IN3
        digitalWrite(28,HIGH);//IN4
        delay(1110);
        STOP();

}
void  DREHEN()
{
        //motor2
        digitalWrite(16,HIGH);//GES
        digitalWrite(1,LOW);//IN4
        digitalWrite(0,HIGH);//IN3
        //motor3
        digitalWrite(2,HIGH);//GES
        digitalWrite(4,LOW);//IN2
        digitalWrite(3,HIGH);//IN1
        //motor1
        digitalWrite(27,HIGH);//GES
        digitalWrite(25,LOW);//IN3
        digitalWrite(28,HIGH);//IN4
        delay(2350);
        STOP();

}

int main()
{
   DEFINE();
  FORWARD();
   BACKWARD();
  LINKS();
  RECHTS();
   DREHEN();
  LINKS2();
   STOP();
   return 0;
}
