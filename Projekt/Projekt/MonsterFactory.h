#pragma once
#include "UnitFactory.h"
#include "Zombie.h"
#include "Demon.h"

class MonsterFactory :
	public UnitFactory
{
	void makeFirst_type(int num, vector <Unit*>& monsters);
	void makeSecond_type(int num, vector <Unit*>& monsters);
};

