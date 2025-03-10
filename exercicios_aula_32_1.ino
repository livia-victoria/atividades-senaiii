/*
Autora:Livia Victoria 
Data:10/03/2025
Nome do arquivo:Semaforo sem delay 
*/


#define pinLedVermelho 2 
#define pinLedAmarelo 6    
#define pinLedVerde 8 
/*definicoes dos pinos de led*/

unsigned long tempoAnterior = 0;  // Armazena o tempo do último estado
int estadoSemaforo = 0;           // Estado atual do semáforo

void setup() {
    pinMode(pinLedVermelho, OUTPUT);
    pinMode(pinLedVerde, OUTPUT);
    pinMode(pinLedAmarelo, OUTPUT);
}

void loop() {
    unsigned long tempoAtual = millis();  // Obtém o tempo atual

    
    switch (estadoSemaforo) {
        case 0: 
            if (tempoAtual - tempoAnterior >= 5000) {
                digitalWrite(pinLedVermelho, LOW);
                digitalWrite(pinLedVerde, HIGH);
                estadoSemaforo = 1;
                tempoAnterior = tempoAtual;
            } else {
                digitalWrite(pinLedVermelho, HIGH);
                digitalWrite(pinLedVerde, LOW);
                digitalWrite(pinLedAmarelo, LOW);
            }
            break;

        case 1: 
            if (tempoAtual - tempoAnterior >= 5000) {
                digitalWrite(pinLedVerde, LOW);
                digitalWrite(pinLedAmarelo, HIGH);
                estadoSemaforo = 2;
                tempoAnterior = tempoAtual;
            }
            break;

        case 2: 
            if (tempoAtual - tempoAnterior >= 2000) {
                digitalWrite(pinLedAmarelo, LOW);
                digitalWrite(pinLedVermelho, HIGH);
                estadoSemaforo = 0;
                tempoAnterior = tempoAtual;
            }
            break;
    }
}