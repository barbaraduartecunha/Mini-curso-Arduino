#define LED1 3
#define LED2 4
#define LED3 5
#define POT_A0 A0
#define POT_A1 A1
#define POT_A2 A2

int dimmer_1, dimmer_2, dimmer_3;



void setup() 
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(POT_A0, INPUT);
  pinMode(POT_A1, INPUT);
  pinMode(POT_A2, INPUT);

}

void loop() 
{
  dimmer_1 = map(analogRead(POT_A0), 0, 1023, 0, 255);
  dimmer_2 = map(analogRead(POT_A1), 0, 1023, 0, 255);
  dimmer_3 = map(analogRead(POT_A2), 0, 1023, 0, 255);

  analogWrite(LED1, dimmer_1);
  analogWrite(LED2, dimmer_2);
  analogWrite(LED3, dimmer_3);
  

}
