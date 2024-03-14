int ledCarGreen = 3;
int ledCarYellow = 5;
int ledCarRed = 7;
int ledPedGreen = 8;
int ledPedRed = 10;
int botaoPed = 1;

void setup()
{
  pinMode(ledCarGreen, OUTPUT);
  pinMode(ledCarYellow, OUTPUT);
  pinMode(ledCarRed, OUTPUT);
  pinMode(ledPedGreen, OUTPUT);
  pinMode(ledPedRed, OUTPUT);
  pinMode(botaoPed, INPUT);
}

void loop()
{
  digitalWrite(ledPedRed, HIGH);
  digitalWrite(ledCarRed, LOW);
  digitalWrite(ledCarGreen, HIGH);
  delay(30000);
  
  digitalWrite(ledCarGreen, LOW);
  digitalWrite(ledCarYellow, HIGH);
  delay(30000);
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledCarYellow, HIGH);
    delay(500);
    digitalWrite(ledCarYellow, LOW);
    delay(500);
    
  }
  
  digitalWrite(ledCarYellow, LOW);
  digitalWrite(ledCarRed, HIGH);
  delay(30000);
  
  if (digitalRead(botaoPed) == 0) {
    digitalWrite(ledCarRed, LOW);
   	digitalWrite(ledCarGreen, LOW);
    digitalWrite(ledCarYellow, HIGH);
  delay(15000);
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledCarYellow, HIGH);
    delay(500);
    digitalWrite(ledCarYellow, LOW);
    delay(500);
    
  }
    digitalWrite(ledCarRed, HIGH);
    digitalWrite(ledPedRed, LOW);
    digitalWrite(ledCarYellow, LOW);
    digitalWrite(ledPedGreen, HIGH);
    delay(30000);
    
    digitalWrite(ledPedGreen, LOW);
    digitalWrite(ledPedRed, HIGH);
    
  }

}