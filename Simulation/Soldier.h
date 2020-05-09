#pragma once
#include "Unit.h"
class Soldier :public Unit
{
	int movespeed; //how many steps can take
	int ammo;

public:
	Soldier(int, int, int, int, int, int);

	virtual void move() = 0;
	virtual void attack() = 0;
	virtual void reload() = 0;
};

