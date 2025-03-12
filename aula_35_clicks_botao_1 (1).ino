/*
Autora:Livia
Data:12/03/2025
Nome do arquivo:aula 35 botao 
*/

#define Botao 6
#define pinLed 12

//variaveis globais 
int estadoAnterior = 1; 
int estadoBotao = 0; //contador de clicks 
int estadoLed = 0; 



void setup()
{
 Serial.begin(9600);
 pinMode(Botao, INPUT);
 pinMode(pinLed, OUTPUT); 
}

void loop()
{
int estadoAtual = digitalRead(Botao);
  if (estadoAtual == 1 && estadoAnterior == 0){//contagem
  estadoBotao++;
estadoLed = !estadoLed;
    digitalWrite(pinLed, estadoLed);
  Serial.print("numero de clicks: ");
  Serial.println(estadoBotao);
  }
  estadoAnterior = estadoAtual;
}