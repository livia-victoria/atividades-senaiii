/*
Autora:Livia Victoria 
Data:11/03/2025
Nome do arquivo:ligar led sem delay 
*/
#define pinLed 13
#define pinBotao12
bool estadoLed = 0;
unsigned long tempoInicial = 0;
  
void setup()
{
Serial.begin(9600);
pinMode(pinLed, OUTPUT);
pinMode(pinBotao, INPUT); 
}

void loop()
{
 bool estadoBotao = digitalRead(botao);
 unsigned long tempoAtual = millis ();
   if (estadoBotao){
   if (tempoatual- tempoInicial>=300) {
     estadoLed =!estadoLed;
     digitalWrite(led,estadoLed)
       tempoInicial = tempoatual;
   }
   } else{
     digitalWrite(led, LOW);
 }
   
  
}