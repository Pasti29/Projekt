#pragma once
#include "Soldier.h"
class Sergeant :
	public Soldier
{
public:
	Sergeant(int = 0, int = 0, char = 'S');
	char getPoint();
};

