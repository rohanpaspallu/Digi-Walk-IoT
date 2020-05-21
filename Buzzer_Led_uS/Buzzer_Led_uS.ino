


#define echoPin 10 // Echo Pin
#define trigPin 9 // Trigger Pin
#define buzzer 7 // buzzer pin
#define led 8 // led pin


void setup() {
 Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(buzzer, OUTPUT);
 pinMode(led,OUTPUT);
}

void loop() {

 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10); 
 
 digitalWrite(trigPin, LOW);
 int duration = pulseIn(echoPin, HIGH);
 

 int distance = duration*0.034/2;
 
  if(distance<=50)
 {
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
 }
 else
 {
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
 }
 
 Serial.println("distance");
 Serial.println(distance);

 delay(1000);

 
 }
 


