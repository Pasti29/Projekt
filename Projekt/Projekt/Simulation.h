#pragma once
#include <vector>
#include <iostream>
#include "Unit.h"
#include "Monster.h"
#include "Soldier.h"
#include "UnitFactory.h"
#include "SoldierFactory.h"
#include "MonsterFactory.h"
#include "Map.h"

using namespace std;

class Simulation
{
	vector <Unit*> soldiers, monsters;

public:

	void setsoldiers(Map);
	void setmonsters(Map);
};

