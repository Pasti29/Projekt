#pragma once
#include "Soldier.h"
class Officer :
	public Soldier
{
public:
	Officer(int = 0, int = 0, char='O');
	char getPoint();
};

