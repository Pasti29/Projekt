#pragma once
#include "Unit.h"

class Soldier :public Unit
{
public:
	Soldier(int = -1, int = -1, char = 'S', int = 3, int = 1);
	
	void move();
};

