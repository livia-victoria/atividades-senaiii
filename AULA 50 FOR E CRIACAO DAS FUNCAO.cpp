#include <Arduino.h>

//**PROTOTIPOS DAS FUNCOES **/
void ligaLed(int); //DEFINICAO DE UMA CONSTATE DOS PINOS DO BOTAO//

void desligaLed(int);//DEFINICAO DE UMA CONSTATE DOS PINOS DO BOTAO//


void piscaLed(int, unsigned long);//DEFINICAO GLOBAL PARA PISCAR LED//

void somaDeDoisNumeros(int,int);//DEFINICAO PARA SOMAR DOIS //

void setup() //**RODA APENAS UMA VEZ**//
{

pinMode(2,OUTPUT);//OUTPUT E A SAIDA DO PINLED//

Serial.begin(9600);//MOSTRA NO SERIAL MONITOR//

}

 

void loop() //**RODA QUANTAS VEZ FOR NECESSARIO**// 
{

piscaLed(2,100);//FUNCAO PARA LIGAR LED//

int resultadoDaSoma = somaDeDoisNumero(4,8);//FUNCAO PARA SOMAR 4 E O 8//

Serial.println(resultadoDaSoma);//MOSTRAR NO SERIAL A SOMA //

} 

void ligaLed(int pin) //funcao vazia//
{
  digitalWrite(pin,HIGH); //DEFINICAO DE LIGAR O PINLED//
}
void desligaLed(int pin)//CRIACAO DE DESLIGARLED//
{
digitalWrite(pin,LOW);//DEFINICAO DE DESLIGAR O LED //
}
void piscaLed(int pin, unsigned long tempo) // funcao vazia //UNSIGNED E USADO PARA ARMANEZA O TEMPO//
{ 
  ligaLed(pin);// LIGAR O LED//

  delay(tempo);//ESPERA NOVAMENTE PELO TEMPO ESPECIFICADO//

  desligaLed(pin);//DEDLIGAR O LED//

  delay(tempo);//ESPERA NOVAMENTE PELO TEMPO ESPECIFICADO//
}

int somaDeDoisNumero(int numeroA,int numeroB)//CRIACAO DA SOMA DE DOIS NUMEROS //
{
  int resultado = numeroA + numeroB;//SOMA DE DOIS NUMEROS//

  return resultado; //retorna o resultado//
}