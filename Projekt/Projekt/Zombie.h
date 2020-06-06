#pragma once
#include "Monster.h"
class Zombie :
	public Monster
{
public:
	Zombie(int = 0, int = 0, char = 'Z');
	char getPoint();
};

