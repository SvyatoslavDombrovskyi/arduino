# include <Ultrasonic.h> 
int echoPin = 15;
int trigPin = 14;

Ultrasonic ultrasonic(trigPin, echoPin);

void setup() {
  Serial.begin (9600);
}

void loop() {
  int lenth = ultrasonic.read(CM);
  Serial.print(lenth);
  Serial.println(" cm");
  delay(100);
  
}
