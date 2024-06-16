// Práctica 8 | Impresión de consola

int btn = 2; // declaro la variable

void setup()
{
  pinMode(btn, INPUT); // configuro mi pin
  Serial.begin(9600); // inicio la comunicación
  pinMode(7, OUTPUT);
}


void loop()
{
  int estado = digitalRead(btn); // leo lo que pasa con el botón
  if(estado ==  1) // condiciono el estado del pin
  {
    Serial.println("Pulsado"); // ejecuto en caso de que se oprima
    digitalWrite(7, HIGH);
  }
  else
  {
    Serial.println("No pulsado"); // ejecuto en caso de que no se oprima
    digitalWrite(7, LOW);
  }
  delay(100);
}
