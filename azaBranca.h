#pragma once

#include "music.h"
#include "helper.h"
#include <Arduino.h>

class AzaBranca : public Music, public Helper
{
public:
	AzaBranca(int musicLenght, int tempo, int compasso, int divisor, int duracao);
	~AzaBranca();

	void tocar(int pin);
};

