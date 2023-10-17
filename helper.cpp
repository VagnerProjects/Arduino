#include "helper.h"

void Helper::musicLooping(int pin, int* melodia, int musicLenght, 
	                       int tempo, int compasso, int duracao, int semibreve, int divisor)
{
	
	for (int nota = 0; nota < musicLenght; nota += 2)
	{
		divisor = melodia[nota + 1];

		if (divisor > 0)
		{
			duracao = (semibreve) / divisor;
		}
		else if (divisor < 0)
		{
			duracao = (semibreve) / abs(divisor);
			duracao *= 1.5;
		}

		tone(pin, melodia[nota], duracao * 0.9);

		delay(duracao);

		noTone(pin);
	}
}
