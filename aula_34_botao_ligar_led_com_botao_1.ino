/*
Autora:Livia Victoria 
Data:11/03/2025
Nome do Arquivo:apertar botao e ligar led com delay 
*/

#define pinBotao 10 
#define pinLed 2 
#define tempoLigado 500
//variaveis 
void setup()
{
  
 Serial.begin(9600);
 pinMode(pinLed, OUTPUT);
 pinMode(pinBotao, INPUT);
 
}

void loop()
{
  //READ - LER
  //WRITE - ESCREVER
 
  bool estadoBotao = digitalRead (pinBotao);
  Serial.println(estadoBotao);
  
  
  if (estadoBotao){
   digitalWrite(pinLed, HIGH);
  delay(tempoLigado);
  digitalWrite(pinLed, LOW);
  delay(tempoLigado); 
   }
}
  




 
 
  
