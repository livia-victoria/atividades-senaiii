#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Bounce2.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

const int botaoA = 18;
const int botaoB = 19;
const int botaoC = 23;

bool modoSelecao = true; // TRUE = mudar seta | FALSE = mudar intensidade
int selecionar = 0;        // Guarda qual LED está selecionado (0 a 3)

// Guardamos a intensidade de 4 LEDs em um vetor
int intensidade[4] = {0, 0, 0, 0}; // começa com todos em 0

// ---------------------------
// OBJETOS BOUNCE PARA CADA BOTÃO
// ---------------------------
Bounce debouncerCima = Bounce(); // Criamos um objeto para o botão A
Bounce debouncerBaixo = Bounce(); // Para o botão B
Bounce debouncerEnter = Bounce(); // Para o botão C

void setup()
{
  // Inicia comunicação com o monitor serial
  Serial.begin(9600);

  // Configura os botões como entrada com pull-up interno
  pinMode(botaoA, INPUT_PULLUP);
  pinMode(botaoB, INPUT_PULLUP);
  pinMode(botaoC, INPUT_PULLUP);

  // Liga os botões à biblioteca Bounce
  debouncerCima.attach(botaoA);
  debouncerBaixo.attach(botaoB);
  debouncerEnter.attach(botaoC);

  // Mensagem inicial no monitor serial
  lcd.init();
  lcd.backlight();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print(" LED 1 OFF");
  lcd.setCursor(0, 1);
  lcd.print(" LED 2 OFF");
  lcd.setCursor(0, 2);
  lcd.print(" LED 3 OFF");
  lcd.setCursor(0, 3);
  lcd.print(" LED 4 OFF");
}

void loop()
{
  // Atualiza os estados dos botões com a biblioteca Bounce
  debouncerCima.update();
  debouncerBaixo.update();
  debouncerEnter.update();

  // ---------------------------
  // BOTÃO C: TROCA DE MODO
  // ---------------------------
  if (debouncerEnter.fell())
  { // fell() = botão foi pressionado
    // Troca o modo
    modoSelecao = !modoSelecao;

    // Mostra no monitor serial qual o novo modo
    if (modoSelecao)
    {
      lcd.setCursor(0, 0);
      lcd.print("Modo alterado: SELECAO DE LED");
      lcd.setCursor(0, 1);
      lcd.print("                              ");
      lcd.setCursor(0, 2);
      lcd.print("                              ");
      lcd.setCursor(0, 3);
      lcd.print("                              ");
    }
    else
    {
      lcd.setCursor(0, 0);
      lcd.print("Modo alterado: AJUSTE DE INTENSIDADE");
      lcd.setCursor(0, 1);
      lcd.print("                                     ");
      lcd.setCursor(0, 2);
      lcd.print("                                     ");
      lcd.setCursor(0, 3);
      lcd.print("                                     ");
    }
  }





  // ---------------------------
  // BOTÃO A
  // ---------------------------
 if (debouncerCima.fell()) {
    if (modoSelecao) {
      // Estamos no modo alteracao de seta para cima
      selecionar = selecionar +1;
      if (selecionar > 3 )
      {
       selecionar = 0;
      }
      Serial.println(selecionar);
    } else {
      // Estamos no modo de ajuste de intensidade
     
    }
  }
