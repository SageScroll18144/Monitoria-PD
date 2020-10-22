//tipo nome = valor;

const int led = 13;

float x = 1.10;
double y = 3.14;

int inteiro = -100;//até 10^9
long inteiro_maiores = 1e18;//10^18

char caractere = '1';

String txt = "A PD É LEGAL";

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  
  inteiro = inteiro + 1;
  
  inteiro+=1;
  
  inteiro++;//pós incremento
  //-------------------------
  ++inteiro;//pré incremento
  
  inteiro = 1 + inteiro;
    
  digitalWrite(led, HIGH);
  delay(100);  
}
