#include "azaBranca.h"

AzaBranca::~AzaBranca()
{
	delete[] melodia;
}

AzaBranca::AzaBranca(int musicLenght, int tempo, int compasso, int divisor, int duracao)
{
	this->musicLenght = musicLenght;
	this->tempo = tempo;
	this->compasso = compasso;
	this->divisor = divisor;
	this->duracao = duracao;

	this->semibreve = (60000 * this->compasso) / this->tempo;
}

void AzaBranca::tocar(int pin)
{
		/*
	C = DO
	D = RÉ
	E = MI
	F = FÁ
	G = SOL
	A = LÁ
	B = SI
			*/
	this->melodia = new int[musicLenght]
	{
			NOTE_G3, 8, NOTE_A3, 8,
			NOTE_B3, 4, NOTE_D4, 4,
			NOTE_D4, 4, NOTE_B3, 4,
			NOTE_C4, 4, NOTE_C4, 4,
			NOTE_G3, 8, NOTE_A3, 8,
			NOTE_B3, 4, NOTE_D4, 4,
			NOTE_D4, 4, NOTE_C4, 4,
			NOTE_B3, 2,
			NOTE_G3, 8, NOTE_G3, 8, NOTE_A3, 8,
			NOTE_B3, 4, NOTE_D4, 4,
			NOTE_D4, 8, NOTE_C4, 8, NOTE_B3, 8,
			NOTE_G3, 4, NOTE_C4, 4,
			NOTE_C4, 8, NOTE_B3, 8, NOTE_A3, 8,
			NOTE_A3, 4, NOTE_B3, 4,
			NOTE_A3, 8, NOTE_A3, 8, NOTE_G3, 8,
			NOTE_G3, 4,
			NOTE_G3, 8, NOTE_G3, 8, NOTE_A3, 8,
			NOTE_B3, 4, NOTE_D4, 4,
			NOTE_D4, 8, NOTE_C4, 8, NOTE_B3, 8,
			NOTE_G3, 4, NOTE_C4, 4,
			NOTE_C4, 8, NOTE_B3, 8, NOTE_A3, 8,
			NOTE_A3, 4, NOTE_B3, 4,
			NOTE_A3, 8, NOTE_A3, 8, NOTE_G3, 8,
			NOTE_G3, 4, NOTE_F4, 8, NOTE_D4, 8,
			NOTE_E3, 8, NOTE_C4, 8, NOTE_D4, 8, NOTE_B3, 8,
			NOTE_C4, 8, NOTE_A3, 8, NOTE_B3, 8, NOTE_G3, 8,
			NOTE_A3, 8, NOTE_G3, 8, NOTE_E2, 8, NOTE_G3, 8,
			NOTE_G3, 4,
			NOTE_F4, 8, NOTE_D4, 8,
			NOTE_E4, 8, NOTE_C4, 8, NOTE_D4, 8, NOTE_B3, 8,
			NOTE_C4, 8, NOTE_A3, 8, NOTE_B3, 8, NOTE_G3, 8,
			NOTE_A3, 8, NOTE_G3, 8, NOTE_E2, 8, NOTE_G3, 8,
			NOTE_G3, 4,
			NOTE_G3, 8, NOTE_E3, 8, NOTE_G3, 8,
			NOTE_G3, 4,
			NOTE_G3, 8, NOTE_E3, 8, NOTE_G3, 8,
			NOTE_G3, 4,
			NOTE_G3, 8, NOTE_E3, 8, NOTE_G3, 8,
			NOTE_G3, 4,
			NOTE_G3, 8, NOTE_E3, 8, NOTE_G3, 8,
			NOTE_G3, 8
	};

	this->musicLooping(pin, this->melodia, this->musicLenght, this->tempo,
						this->compasso, this->duracao, this->semibreve, this->divisor);
}