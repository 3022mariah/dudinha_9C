// C++ code
//
  const int bot1 = 4;
const int bot2 = 5;
const int bot3 = 6;
const int bot4 = 7;
const int bot5 = 8;

void setup()
{
Serial.begin(9600);
  pinMode(bot1,INPUT);
  pinMode(bot2,INPUT);
  pinMode(bot3,INPUT);
  pinMode(bot4,INPUT);
  pinMode(bot5,INPUT);

}

int var;
int var2;
int var3;
int var4;
int var5;

void loop()
{

var = digitalRead(bot1);
var2 = digitalRead(bot2);
var3 = digitalRead(bot3);
var4 = digitalRead(bot4);
var5 = digitalRead(bot5);
  
  if(var){
Serial.println("opa prof tudo bem?");
  }
  if(var2){
Serial.println("eu consegui fazer a programação!!");
  }
  if(var3){
Serial.println("n sei oque escrever");
  }
  if(var4){
Serial.println("é então gosta de ser professor?");
  }
  if(var5){
Serial.println("mas é isso, tchau");
  }
}
