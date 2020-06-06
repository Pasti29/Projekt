#pragma once
#include "UnitFactory.h"
#include "Sergeant.h"
#include "Officer.h"

class SoldierFactory :
	public UnitFactory
{
	void makeFirst_type(int num, vector <Unit*>& soldiers);
	void makeSecond_type(int num, vector <Unit*>& soldiers);
};

