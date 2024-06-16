// Practica 4 "Boton"

int btn = 2;
int led = 3;
int val;

void setup()
{
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  val = digitalRead(btn);
  if(val == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
