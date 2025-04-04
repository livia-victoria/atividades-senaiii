#include <Arduino.h>
//**FUNCOES**//
int hipotenusa (int cateto1, int cateto2);

void setup()
{
Serial.begin(9600);
///int hipo = hipotenusa(3,4);
///Serial.println(hipo);

}

void loop()  
{
} 

int hipotenusa (int cateto1, int cateto2){

  int resultado = sq(cateto1) + sq(cateto2);
return sqrt(resultado);


}


