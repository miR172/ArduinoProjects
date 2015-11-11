void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

int switchState = 0;

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
  if (switchState == LOW) {
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);  
  }
  else {
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
    delay(200);
    digitalWrite(5, HIGH);
    digitalWrite(3, LOW);
    delay(200);
  }
}
