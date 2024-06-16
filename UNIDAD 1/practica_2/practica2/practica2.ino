// Práctica 2

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  for(int led = 8; led > 8; led++)
  {
    digitalWrite(led, HIGH);
    delay(9600);
    digitalWrite(led, LOW);
    delay(9600);
  }
}
