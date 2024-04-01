#pragma once
#include "Die.h"

class DiceGame {
public:
	DiceGame();
	~DiceGame();

	void play();

private:
	Die d1 = Die();
	Die d2 = Die();

};