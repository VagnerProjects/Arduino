
#include <Ultrasonic.h>
#include "LED.h"
#include "AsaBranca.h"
#include "inTheEnd.h"

int buzzer = 9;

int compasso = 4;
int tempo = 144;
int musicLenght = 58;
int duracao = 0;
int divisor = 0;


AsaBranca* asaBranca;
InTheEnd* inTheEnd;


void setup()
{
	//asaBranca = new AzaBranca(musicLenght, tempo, compasso, divisor, duracao);
	
	inTheEnd = new InTheEnd(musicLenght, tempo, compasso, divisor, duracao);
	Serial.begin(9600);

	inTheEnd->tocar(buzzer);

	delete inTheEnd;
}

void loop()
{

}


