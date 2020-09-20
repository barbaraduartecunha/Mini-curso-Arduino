
#define LDR A5
#define LED 3 

int brilho, leitura_LDR;

void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
  

}

void loop() 
{
  leitura_LDR = analogRead(LDR);
  if(leitura_LDR > 700)
    leitura_LDR = 700;
  if(leitura_LDR < 400)
    leitura_LDR = 400;

  brilho = map(leitura_LDR, 400, 700, 0, 255);
  analogWrite(LED, brilho);
  
}
