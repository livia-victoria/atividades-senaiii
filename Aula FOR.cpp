#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  for (int tabuada = 0; tabuada <= 10; tabuada++) //*** "FOR" ELE REPETE VARIAS VEZES O CODIGO  ***//
  {
    for (int numero = 0; numero <= 10; numero++)
    {
      Serial.printf("%d x %d = %d \n\r", tabuada, numero, numero * tabuada);
    }
  }
}
void loop()
{
}
