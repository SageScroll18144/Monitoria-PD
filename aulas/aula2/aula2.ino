const int led = 13;//pino do meu led

void setup() {
  pinMode(led, OUTPUT);//define como saida
}

void loop() {
  //dado digital: 0(desligado), 1(ligado)
  digitalWrite(led, 1);//manda(escreve) um valor digital para um pino
  //(PINO, VALOR)
  /*
    HIGH -> 1
    LOW -> 0
  */
   digitalRead(led);//ler um valor

}
