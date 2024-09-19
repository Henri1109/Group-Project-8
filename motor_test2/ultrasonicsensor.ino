

  if (currentMillis - previousMillis >= interval) 
  {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
}
cm = (duration/2) / 29.1;
//cm is set at 1196 if no signal is received by the echopin due to one of the sensors being covered in a way that makes it impossible for the wave to go through
   if(cm < 30)
   {


    digitalWrite(LED_BUILTIN, HIGH);
    //stop digitalWrite(, LOW)
   }
   else
   {
    digitalWrite(LED_BUILTIN, LOW);
    //drive forward digitalWrite(,HIGH)

   }
   Serial.print(cm);
   Serial.print('\n');

}

