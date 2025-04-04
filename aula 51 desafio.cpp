#include <Arduino.h>

float transformacao (float);
float tamanho (float);
float tv (float);
float TamanhoTv (float , float);


void setup()
{
   Serial.begin(9600);
  float desafio = TamanhoTv(50 ,72);
  Serial.println(desafio);

  
}
void loop()
{
}

int Hipotenusa(int numeroA, int numeroB)
{
  int resul = sq(numeroA) + sq(numeroB);
  return sqrt(resul);
}



float transformacao (float graus)
{
   float fahrenheit = ((graus * 9/5) + 32);
   return fahrenheit;

}

float tamanho (float milimetros)
{
  float polegada = (milimetros / 25.4);
  return polegada;

}

float tv (float polegadas)
{
  float centimetros = (polegadas * 2.54);
  return centimetros;

}   

float TamanhoTv (float polegadas, float altura)
{
  float resultado = sq(polegadas * 2.54) + sq(altura);
  return sqrt(resultado);

}


