#pragma once
#include "Unit.h"
class Monster :protected Unit
{
protected:
	int movespeed; //how many steps can take

public:
	virtual void move() = 0;
	virtual void attack() = 0;
};

