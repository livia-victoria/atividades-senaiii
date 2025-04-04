

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define pinLed 2
#define pinBotao 5
int estadoLed = 0;
int estadoAnterior = 0;
int estadoBotao = 0;
LiquidCrystal_I2C lcd (0x27 , 20, 4);


void setup()
{
lcd.init();
lcd.backlight();
pinMode(pinLed, OUTPUT);
pinMode(pinBotao, INPUT_PULLUP);
}

 

  
void loop()
{
bool estadoAtual = digitalRead(pinBotao);
static bool estadoLed =0;

 if (estadoAtual == 1 && estadoAnterior ==0)
  {
  estadoLed = !estadoLed;
  digitalWrite(pinLed, estadoLed);
  }
  if(estadoLed == 0)
  {
  digitalWrite(pinLed, !estadoLed);
  lcd.setCursor(0,0);
 lcd.print("PARABENS OTAVIO ");
 }
  else
  {
  digitalWrite(pinLed, LOW);
  lcd.print("PARABENS OTAVIO  ");
  }
estadoAnterior = estadoAtual;
}

 