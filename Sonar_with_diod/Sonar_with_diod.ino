# include <Ultrasonic.h> 
int echoPin = 15;
int trigPin = 14;

int diodRedPin = 8;
int diodGreenPin = 9;
 bool flag = 0;

Ultrasonic ultrasonic(trigPin, echoPin);

void setup() {
  Serial.begin (9600);
  pinMode(diodRedPin, OUTPUT);
  pinMode(diodGreenPin, OUTPUT);
 
}

void loop() {
  int lenth = ultrasonic.read(CM);
  //Serial.print(lenth);
 // Serial.println(" cm");
  if (lenth < 60){
    flag = 1;
    digitalWrite(diodGreenPin,HIGH);
  }else{
    digitalWrite(diodGreenPin,LOW);
  }
  if(flag == 1){
    digitalWrite(diodRedPin, HIGH);
    delay(100);
    digitalWrite(diodRedPin, LOW);
    delay(100);
  }
  delay(5);
  
}
