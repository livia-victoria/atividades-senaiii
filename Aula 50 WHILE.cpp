#include <Arduino.h>
#define pinLed 
#define pinBotao



void setup() //**RODA APENAS UMA VEZ**//
{
delay(5000);                                     //necessario pois se iniciar com o boot pressionado entra 
                                                // modo upload e nao inicia o codigo 
pinMode(0, INPUT_PULLUP);
pinMode(2, OUTPUT);

while (digitalRead (0) ==0) //enquanto
{
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(2,LOW);
  delay(100);
}


}

 

void loop() //**RODA QUANTAS VEZ FOR NECESSARIO**// 
{
  
}



  
