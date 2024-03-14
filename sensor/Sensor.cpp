// programa controle de luminosidade com LDR

int ledverde = 11;
int ledazul = 10;
int ledvermelho = 9;
float LDR = A0;
int valorLDR = 0;

void setup(){
  
Serial.begin(9600);
pinMode(ledverde , OUTPUT);
pinMode(ledazul , OUTPUT);
pinMode(ledvermelho , OUTPUT);
pinMode(LDR ,INPUT);
  
}

void loop(){
  
  
  valorLDR = analogRead(LDR);
  
// Luminosidade baixa
  
  if (valorLDR < 100){
    
    apagaLeds();
    
    digitalWrite(ledverde, HIGH);
  }
  
  // luminosidade media 
  
  if(valorLDR>= 100 && valorLDR<150){
    
    apagaLeds();
    digitalWrite(ledazul, HIGH);
    
  }
  
  
  // luminodidade alta 
  
  if(valorLDR>150){
    
    apagaLeds();
    
    digitalWrite(ledvermelho, HIGH);
    
  }
  
  Serial.print(valorLDR);
  
}

void apagaLeds(){
  
  digitalWrite(ledverde, LOW);
  digitalWrite(ledazul, LOW);
  digitalWrite(ledvermelho, LOW);
  
  
}