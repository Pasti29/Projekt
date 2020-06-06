#pragma once
#include "Monster.h"
class Demon :
	public Monster
{
public:
	Demon(int = 0, int = 0, char = 'D');
	char getPoint();
};

