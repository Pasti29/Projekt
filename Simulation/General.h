#pragma once
#include "Soldier.h"
class General :public Soldier
{
public:
	General(int, int, int, int, int, int);

	void general();
	void heal();
};

