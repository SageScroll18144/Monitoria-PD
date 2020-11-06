void setup() {
  Serial.begin(9600);//Abre a serial. Taxa em bits/segundos
}

void loop() {
  Serial.print("Imprime sem quebra de linha");
  Serial.println("Imprime com quebra de linha");

  if(Serial.available() > 0){//Verifica se chegou algo na Serial
    char x = Serial.read();//Captura o que chegou na Serial
    
  }
}
