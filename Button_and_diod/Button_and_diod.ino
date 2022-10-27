int Butt_pin = 9; 
int Diod_pin = 8;

 
void setup() { 
  Serial.begin (9600); 
  pinMode(Butt_pin, INPUT); 
  pinMode(Diod_pin, OUTPUT); 
} 
 
void loop() { 
  if(digitalRead(Butt_pin) == HIGH){
    digitalWrite(Diod_pin,HIGH);
  }else{
    digitalWrite(Diod_pin,LOW);
  }
  delay(100);
}
