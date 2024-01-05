 const int trigPin1=2;
 const int echoPin1=3;

 const int trigPin2=4;
 const int echoPin2=5;

 const int trigPin3=6;
 const int echoPin3=7;

 const int trigPin4=8;
 const int echoPin4=9;


 const int vib1 = 13;
 const int vib2 = 12;
 const int vib3 = 11;
 const int vib4 = 10;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
   pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
   pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
   pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);
    pinMode(vib1, OUTPUT);
    pinMode(vib2, OUTPUT);
    pinMode(vib3, OUTPUT);
    pinMode(vib4, OUTPUT);



}

void loop() {
  long duration1, distance1;
  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1/2) / 29.1;
Serial.print ( "Sensor1  ");
    Serial.print ( distance1);
    Serial.println("cm");
   if (distance1 <= 121.92){
    
    digitalWrite(vib1,HIGH);
    delay(1000);
    digitalWrite(vib1,LOW);
  }
  /*else {
    Serial.print ( "Sensor1  ");
    Serial.print ( distance1);
    Serial.println("cm");
  }*/

long duration2, distance2;
  digitalWrite(trigPin2, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2= (duration2/2) / 29.1;
Serial.print("Sensor2  ");
    Serial.print(distance2);
    Serial.println("cm");
   if (distance2  <= 121.92){
    
    digitalWrite(vib2,HIGH);
    delay(1000);
    digitalWrite(vib2,LOW);
  }                       
  /*else {
    Serial.print("Sensor2  ");
    Serial.print(distance2);
    Serial.println("cm");
  }*/

  long duration3, distance3;
  digitalWrite(trigPin3, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  distance3= (duration3/2) / 29.1;
Serial.print("Sensor3  ");
    Serial.print(distance3);
    Serial.println("cm");
   if (distance3 <= 121.92){
    
    digitalWrite(vib3,HIGH);
    delay(1000);
    digitalWrite(vib3,LOW);
  }
  /*else {
    Serial.print("Sensor3  ");
    Serial.print(distance3);
    Serial.println("cm");
  }*/

  long duration4, distance4;
  digitalWrite(trigPin4, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin4, LOW);
  duration4 = pulseIn(echoPin4, HIGH);
  distance4= (duration4/2) / 29.1;
Serial.print("Sensor4  ");
    Serial.print(distance4);
    Serial.print("cm");
   if (distance4 <= 121.92){
    
    digitalWrite(vib4,HIGH);
    delay(1000);
    digitalWrite(vib4,LOW);

  }
  /*else {
    Serial.print("Sensor4  ");
    Serial.print(distance4);
    Serial.print("cm");
  }*/




}
