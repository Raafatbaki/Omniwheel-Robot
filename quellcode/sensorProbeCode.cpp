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
    // delay(3000);
    while(1)
    {
      if (DISTANCE() <20)
        {
            STOP();
            break;
        }
    }
}
_________________________
float DISTANCE()
{
     wiringPiSetup();
     pinMode(trigger,OUTPUT);
     pinMode(echo, INPUT);

     digitalWrite(trigger,LOW);
     delay(500);
     digitalWrite(trigger,HIGH);
     delayMicroseconds(10);
     digitalWrite(trigger,LOW);

     while(digitalRead(echo) == LOW);
          startTime = micros();
     while(digitalRead(echo) == HIGH);
          stopTime = micros();
     long totalTime= stopTime - startTime;
     float distance = (totalTime * 0.034)/2;
     cout << "Distance is: " << distance << " cm " <<endl;
     return distance;
     delay(1);
}
