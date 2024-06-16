// Practica 7 "Boton y secuencia de leds ida y vuelta"

int btn = 2;
int val;

void setup()
{
  pinMode(btn, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  val = digitalRead(btn);
  if(val == HIGH)
  {
    for(int led = 2; led < 8; led++)
    {
      digitalWrite(led, HIGH);
      delay(9600);
      digitalWrite(led, LOW);
      delay(9600);
    }
    for(int led = 8; led > 2; led--)
    {
      digitalWrite(led, HIGH);
      delay(9600);
      digitalWrite(led, LOW);
      delay(9600);
    }
  }
  else
  {
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
  }
}
