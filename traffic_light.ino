int green   = 22;
int yellow = 23;
int red = 21;

void setup()
{
  pinMode(green,   OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void   loop()
{
  digitalWrite(green, HIGH);
  delay(10000);
  digitalWrite(green, LOW);
  digitalWrite(yellow,   HIGH);
  delay(5000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(10000);
  digitalWrite(red, LOW);
  digitalWrite(yellow,   HIGH);
  delay(5000);
  digitalWrite(yellow, LOW);
}
