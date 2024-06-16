// Practica 6 "Boton y semaforo"

int btn = 2;
int val;
int la = 7;
int lv = 6;
int lr = 5;

void setup()
{
  pinMode(btn, INPUT);
  pinMode(la, OUTPUT);
  pinMode(lv, OUTPUT);
  pinMode(lr, OUTPUT);
}

void loop()
{
  val = digitalRead(btn);
  if(val == HIGH)
  {
    semaforo();
  }
  else
  {
    digitalWrite(la, LOW);
    digitalWrite(lr, LOW);
    digitalWrite(lv, LOW);
  }
}

void semaforo()
{
  // Inicio del led verde
  digitalWrite(lv, HIGH);
  delay(5000);
  digitalWrite(lv, LOW);
  delay(1000);
  // Parpadeo (3)
  digitalWrite(lv, HIGH);
  delay(500);
  digitalWrite(lv, LOW);
  delay(500);
  digitalWrite(lv, HIGH);
  delay(500);
  digitalWrite(lv, LOW);
  delay(500);
  digitalWrite(lv, HIGH);
  delay(500);
  digitalWrite(lv, LOW);
  delay(500);
  // Inicio del led ambar
  digitalWrite(la, HIGH);
  delay(5000);
  digitalWrite(la, LOW);
  delay(5000);
  // Inicio del led rojo
  digitalWrite(lr, HIGH);
  delay(5000);
  digitalWrite(lr, LOW);
  delay(5000);
}
