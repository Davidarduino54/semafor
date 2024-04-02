// C++ code
//
int BUTON = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
}

void loop()
{
  if (digitalRead(2) == HIGH) {
    delay(5000); // Wait for 5000 millisecond(s)
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    delay(5000); // Wait for 5000 millisecond(s)
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(10000); // Wait for 10000 millisecond(s)
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    delay(5000); // Wait for 5000 millisecond(s)
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
    delay(10000); // Wait for 10000 millisecond(s)
  }
}