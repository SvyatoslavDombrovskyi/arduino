// Arduino pin numbers
const int SW_pin = 5; // digital pin connected to switch output
const int X_pin = 8; // analog pin connected to X output
const int Y_pin = 9; // analog pin connected to Y output

// LED pin

const int LED_green = 10;
const int LED_red = 16;

void setup() {
  pinMode(SW_pin, INPUT);
  pinMode(LED_green, OUTPUT);
   pinMode(LED_red, OUTPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(115200);
}

void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");  
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");

  if (analogRead(Y_pin)<400){
    digitalWrite(LED_green, HIGH);
  }else{
    digitalWrite(LED_green, LOW);
  }
  if (analogRead(Y_pin)>600){
    digitalWrite(LED_red, HIGH);
  }else{
    digitalWrite(LED_red, LOW);
  }
  delay(500);
}
