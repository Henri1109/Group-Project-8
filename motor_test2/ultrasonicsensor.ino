int trigPin = 8;    // Trigger
int echoPin = 9;    // Echo
long duration, cm;

void setup() {
  // put your setup code here, to run once:
    Serial.begin (9600);

   pinMode(trigPin, OUTPUT);
   pinMode(LED_BUILTIN, OUTPUT);
   pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
cm = (duration/2) / 29.1;

   if(duration < 2000)
   {


    digitalWrite(LED_BUILTIN, HIGH);
   }
   else
   {
    digitalWrite(LED_BUILTIN, LOW);


   }
   Serial.print(cm);
   Serial.print('\n');

 delay(30);
}

