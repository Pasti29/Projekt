#pragma once
#include "Unit.h"
class Soldier :protected Unit
{
protected:
	int movespeed; //how many steps can take
	int ammon;

public:
	virtual void move() = 0;
	virtual void attack() = 0;
	virtual void reload() = 0;
};

