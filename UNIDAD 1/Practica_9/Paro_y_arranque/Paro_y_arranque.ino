// Actuadores
int mLed = 10;
int ledParo = 12;
int ledFun = 11;
// Botoneras
int btnPE = 3;
int btnP = 5;
int btnArr = 7;
// Memorias
bool valBPE = false;
bool valBP = false;
bool valArr = false;

void setup()
{
  pinMode(mLed, OUTPUT);
  pinMode(ledFun, OUTPUT);
  pinMode(ledParo, OUTPUT);
  pinMode(btnPE, INPUT);
  pinMode(btnP, INPUT);
  pinMode(btnArr, INPUT);
  Serial.begin(9600);
}

void loop()
{
  valBPE = digitalRead(btnPE);
  valBP = digitalRead(btnP);
  valArr = digitalRead(btnArr);
  verBtn();
  
  // Botón de paro cerrado
  if(valBPE == true)
  {
    if(valArr == true && valBP == true)
    {
      digitalWrite(mLed,HIGH);
      digitalWrite(ledFun,HIGH);
      digitalWrite(ledParo,LOW);
    }
    if(valBP == false)
    {
      digitalWrite(mLed, LOW);
      digitalWrite(ledFun, LOW);
      digitalWrite(ledParo, HIGH);
    }
  }
  
  // Botón de paro abierto
  if(valBPE == false)
  {
    digitalWrite(mLed, LOW);
    digitalWrite(ledFun, LOW);
    mParo();
  }
  delay(100);
}

void verBtn()
{
  Serial.print(valBPE);
  Serial.print("  ");
  Serial.print(valBP);
  Serial.print("  ");
  Serial.println(valArr);
}

void mParo()
{
    digitalWrite(ledParo, HIGH);
    delay(500);
    digitalWrite(ledParo, LOW);
    delay(500);
}
