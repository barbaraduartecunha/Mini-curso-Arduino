


#define pino_buzzer 11
#define botao 10
float seno;
int frequencia, tempo;


void setup() 
{
  pinMode(10, INPUT_PULLUP);
  pinMode(pino_buzzer, OUTPUT);
 
}

void loop() 
{
  if(digitalRead(botao) != 0)
    tempo = 1000;
   else
    tempo = 200;
   senoide(tempo);
}

void senoide (int t)
{
  for (int i = 0 ; i < 180; i++)
  {
    seno = sin(i*3.1415 / 180);
    frequencia = 2000 + int(seno * 1000);
    tone(pino_buzzer, frequencia);
    delayMicroseconds(t);
  }
}
