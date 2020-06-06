#pragma once
#include "Unit.h"

class Monster :public Unit
{
public:
	Monster(int = 0, int = 0);
	char point = 'X';
};

