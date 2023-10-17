
#include <Ultrasonic.h>
#include "LED.h"
#include "AzaBranca.h"

int buzzer = 9;

int compasso = 4;
int tempo = 144;
int musicLenght = 198;
int duracao = 0;
int divisor = 0;


AzaBranca* azaBranca;

void setup()
{
	azaBranca = new AzaBranca(musicLenght, tempo, compasso, divisor, duracao);

	Serial.begin(9600);

	azaBranca->tocar(buzzer);

	delete azaBranca;
}

void loop()
{

}


