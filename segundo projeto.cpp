#include <Arduino.h>

// definicoes
#define pinLed 2
#define pinBotao 5

void setup()
{
  Serial.begin(9600);

  pinMode(pinBotao, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  bool estadoAtualBotao = digitalRead(pinBotao);
  static bool estadoAnteriorBotao = 1;
  static bool estadoLed = 0;

  static unsigned long tempoUltimaMudanca = 0;
  unsigned long tempoAtual = millis();
  static bool ultimaAcao = 1;

  if (estadoAtualBotao != estadoAnteriorBotao)
  {
    tempoUltimaMudanca = tempoAtual;
  }

  if (tempoAtual - tempoUltimaMudanca > 50)
  {

    if (estadoAtualBotao != ultimaAcao)
    {
      ultimaAcao = estadoAtualBotao;
      if (estadoAtualBotao == 0)
      {
        // botao apertado
        estadoLed = !estadoLed;
        digitalWrite(2, estadoLed);
      }
      else
      {
        // botao solto
      }
    }
  }

  estadoAnteriorBotao = estadoAtualBotao;
}