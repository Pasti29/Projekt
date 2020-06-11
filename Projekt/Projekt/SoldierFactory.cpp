#include "SoldierFactory.h"

void SoldierFactory::makeFirst_type(int num, vector <Unit*>& soldiers) 
{
	for (int i = 0; i < num; i++)
	{
		soldiers.push_back(new Sergeant);
	}
}

void SoldierFactory::makeSecond_type(int num, vector <Unit*>& soldiers)
{
	for (int i = 0; i < num; i++)
	{
		soldiers.push_back(new Officer);
	}
}
