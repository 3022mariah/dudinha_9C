// C++ code
//

const int led2 = 2;
const int bot1= 3;

void setup()
{
  pinMode(led2, OUTPUT);
  
 pinMode(bot1, INPUT);
}
int var;
void loop()
{
  var = digitalRead(bot1);
  if (var){
    digitalWrite(led2,HIGH);
  }else{
    digitalWrite(led2,LOW);
  }
  
}
