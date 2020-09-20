#define pino_led 3
#define POT A5
int intensidade = 0, leitura = 0;

void setup() 
{
  pinMode(pino_led, OUTPUT);
  pinMode(POT, INPUT) ;
}

void loop() 
{
  leitura = analogRead(POT);
  if(leitura > 1023)
    leitura = 1023;
  if(leitura < 0 )
    leitura = 0;
  
  intensidade = map(leitura, 0, 1023, 0, 255);
  
  analogWrite(pino_led, intensidade);
  
  
}
