
#include <Arduino.h>
#include <LiquidCrystal_I2c.h>
#include <Bounce2.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

//**INTANCIAS BOTAO**//
Bounce botao1 = Bounce();
Bounce botao2 = Bounce();
Bounce botao3 = Bounce();
//**LEDS**//
#define pinLedVermelho 8
#define pinLedVerde 10
#define pinLedAmarelo 14
#define pinLedBranco 16

#define pinBotao1 19
#define pinBotao2 26
#define pinBotao3 29
void setup()
{

  lcd.init();
  lcd.backlight();

  botao1.attach(pinBotao1, INPUT_PULLUP);
  botao2.attach(pinBotao2, INPUT_PULLUP);
  botao3.attach(pinBotao3, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop()
{

  botao1.update();
  botao1.update();
  botao1.update();

  int contagem = 0;
  // BOTAO 1 //
  if (botao1.fell())
  {
    Serial.println("BOTAO 1 PRESSIONADO");
  }
  // BOTAO 2//
  if (botao2.rose())
  {
    Serial.println("BOTAO 1 SOLTO");
  }
  if (botao2.fell())
  {
    if (contagem < 4)
    {
      contagem++;
      Serial.println(contagem);
    }
  }
  // BOTAO 3//
  if (botao3.fell())
  {
    Serial.println("BOTAO 3 PRESSIONADO");
  }
  if (botao3.rose())
  {
    Serial.println("BOTAO 3 SOLTO");
  }
}

