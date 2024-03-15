void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  
  if (digitalRead(2) == 0) {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    delay(12000);
    
    for (int i = 0; i < 4; i++) {
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
  	}
    
    digitalWrite(7, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(6, HIGH);
    delay(15000);
    
    for (int i = 0; i < 4; i++) {
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
  	}
    digitalWrite(13, HIGH);
    
    delay(100);
  }
}
