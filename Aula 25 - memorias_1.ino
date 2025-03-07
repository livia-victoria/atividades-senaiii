/*
Autora: Livia 
Nome do programa:  Memorias
Data:21/02
Descricao: 
*/

void setup()
{ 
Serial.begin(9600);
Serial.println("Tamanhos dos tipos de variaveis em Bytes");
Serial.print("bool: "); Serial.println(sizeof(bool)); //0 ou 1 
Serial.print("char: "); Serial.println(sizeof(char)); //0 a 225 em carecteres
Serial.print("byte: "); Serial.println(sizeof(byte)); //0 a 255
Serial.print("int: "); Serial.println(sizeof(int)); //-32768 a 32767
Serial.print("unsigned int: "); Serial.println(sizeof(unsigned int)); //0 a 65535
Serial.print("float: "); Serial.println(sizeof(float)); //numeros com virgula
Serial.print("long: "); Serial.println(sizeof(long)); //-2.147.486.648 a 2.147.486.647
Serial.print("unsigned long: "); Serial.println(sizeof(unsigned long));  //0 a 4.294.967.295
}

void loop ()
{
}