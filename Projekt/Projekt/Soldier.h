#pragma once
#include "Unit.h"

class Soldier :public Unit
{
public:
	Soldier(int = -1, int = -1, char = 'S');
	void move();
};

