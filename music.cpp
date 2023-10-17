#include "music.h"
#include <Arduino.h>

Music::Music(int tempo, int compasso)
{
	this->tempo = tempo;
	this->compasso = compasso;
	this->divisor = 0;
	this->duracao = 0;

	this->semibreve = (60000 * compasso) / this->tempo;	
}


