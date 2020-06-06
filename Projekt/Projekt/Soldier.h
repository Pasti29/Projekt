#pragma once
#include "Unit.h"

class Soldier :public Unit
{
public:
	char point = 'O';
	void move();
};

