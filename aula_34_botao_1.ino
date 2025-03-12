/*
Autora:Livia Victoria 
Data:11/03/2025
Nome do arquivo:ver o que acontece com o botao  
*/
  
#define pinLedVerde 13
#define pinBotao 11


void setup()
{
  Serial.begin(9600);
  
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinBotao, INPUT);
}

void loop()
{
 bool estadoBotao = digitalRead(pinBotao);
  Serial.println(estadoBotao);
  
  if(estadoBotao == 1){
    digitalWrite(pinLedVerde, HIGH);
  }else{
 
   digitalWrite(pinLedVerde, LOW);
  }
}