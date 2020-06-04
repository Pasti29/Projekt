#pragma once
#include "Soldier.h"
class Sergeant :
	public Soldier
{
public:
	Sergeant(int=0, int=1, int=2);

	void setPosition(int);
	int getPosition();
	void spawn(Unit* ,int);
};

