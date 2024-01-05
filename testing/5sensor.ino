const int trigPin1=2;
const int echoPin1=3;

const int trigPin2=4;
const int echoPin2=5;

const int trigPin3=6;
const int echoPin3=7;

const int trigPin4= 8;
const int echoPin4=9;

const int vib1 = 12;
const int vib2 = 10;
const int vib3 = 13;
const int vib4 = 11;

void setup() {
  //Initializes Sensors and Vibration Motors
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
//Distance calculation for Sensor 1 (Top)
  long duration1, distance1;
  digitalWrite(trigPin1, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1/2) / 29.1;
//Vibration Motor Control
  if (distance1 <= 152.4){
      digitalWrite(vib1, HIGH);
      delay(100);
      digitalWrite(vib1, LOW);
  }
  if (distance1 <= 91){
      digitalWrite(vib1, HIGH);
      delay(50);
      digitalWrite(vib1, LOW);
  }
  else {
    Serial.println ( "Sensor1  ");
    Serial.print ( distance1);
    Serial.println("cm");
  }
//Distance calculation for Sensor 2 (Bottom) 
  long duration2, distance2;
  digitalWrite(trigPin2, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2= (duration2/2) / 29.1;
//Vibration Motor Control
  if (distance2 <= 152.4){
      digitalWrite(vib2, HIGH);
      delay(50);
      digitalWrite(vib2, LOW);
  } 
   if (distance2 <= 91){
      digitalWrite(vib2, HIGH);
      delay(100);
      digitalWrite(vib2, LOW);
  } 
  else {
    Serial.print("Sensor2  ");
    Serial.print(distance2);
    Serial.println("cm");
  }

//Distance calculation for Sensor 3 (Left)  
  long duration3, distance3;
  digitalWrite(trigPin3, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  distance3= (duration3/2) / 29.1;
//Vibration Motor Control  
   if (distance3 <= 152.4){
    digitalWrite(vib3, HIGH);
    delay(100);
    digitalWrite(vib3, LOW);
  }
  if (distance3 <= 91){
    digitalWrite(vib3, HIGH);
    delay(50);
    digitalWrite(vib3, LOW);
  }
  else {
    Serial.print("Sensor3  ");
    Serial.print(distance3);
    Serial.println("cm");
  }
//Distance calculation for Sensor 4 (Right)
  long duration4, distance4;
  digitalWrite(trigPin4, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin4, LOW);
  duration4 = pulseIn(echoPin4, HIGH);
  distance4= (duration4/2) / 29.1;
//Vibration Motor Control
  if (distance4 <= 152.4){
    digitalWrite(vib4, HIGH);
    delay(100);
    digitalWrite(vib4, LOW);

  }
   if (distance4 <= 91){
    digitalWrite(vib4, HIGH);
    delay(50);
    digitalWrite(vib4, LOW);

  }
  else {
    Serial.print("Sensor4  ");
    Serial.print(distance4);
    Serial.print("cm");
  }
}

  



  
