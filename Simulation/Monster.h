#pragma once
#include "Unit.h"
class Monster :public Unit
{
	int movespeed; //how many steps can take

public:
	Monster(int, int, int, int, int);

	virtual void move() = 0;
	virtual void attack() = 0;
};

