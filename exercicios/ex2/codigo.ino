// C++ code
//
void setup()
{
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);   
}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  delay (1000);
}
