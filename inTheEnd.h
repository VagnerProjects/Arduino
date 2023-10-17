#pragma once
#include "music.h"
#include <Arduino.h>
#include "helper.h"

class InTheEnd :public Music, public Helper
{
public:
	InTheEnd(int musicLenght, int tempo, int compasso, int divisor, int duracao);
	~InTheEnd();

	void tocar(int pin);

};

