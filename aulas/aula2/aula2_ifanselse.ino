#define led 13

int cnt = 0;

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  if(cnt%2==0 || cnt > 10){//resto da divisao entre cnt e 2
    digitalWrite(led, 1);    
  } 
  else{
    digitalWrite(led, 0);
  }
  cnt++;
  delay(500);
}
