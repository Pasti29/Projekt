#pragma once
#include "Monster.h"
class Demon :public Monster
{
public:
	Demon(int, int, int, int, int);

	void demon();
	void shoot();
	void heal();
};

