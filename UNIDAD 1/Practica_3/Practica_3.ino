// Practica 3 "Semaforo"

int lr = 13;
int lv = 12;
int la = 11;

void setup()
{
  pinMode(lr, OUTPUT);
  pinMode(lv, OUTPUT);
  pinMode(la, OUTPUT);
}

void loop()
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
