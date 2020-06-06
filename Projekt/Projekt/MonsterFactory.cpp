#include "MonsterFactory.h"

void MonsterFactory::makeFirst_type(int num, vector<Unit*>& monsters)
{
	for (int i = 0; i < num; i++)
	{
		monsters.push_back(new Zombie);
	}
}

void MonsterFactory::makeSecond_type(int num, vector<Unit*>& monsters)
{
	for (int i = 0; i < num; i++)
	{
		monsters.push_back(new Demon);
	}
}
