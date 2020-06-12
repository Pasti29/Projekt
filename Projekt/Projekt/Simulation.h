#pragma once
#include <vector>
#include <iostream>
#include "Unit.h"
#include "UnitFactory.h"
#include "SoldierFactory.h"
#include "MonsterFactory.h"
#include "Map.h"

using namespace std;

class Simulation
{
	int s, m;
	vector <Unit*> soldiers, monsters;

public:
	Simulation(int = 2, int = 2);

	bool areAlive(vector <Unit*>);
	vector <Unit*>& getSoldiers();
	vector <Unit*>& getMonsters();
	void setsoldiers(Map&);
	void setmonsters(Map&);
	void moveunits(vector <Unit*>&, vector <Unit*>&, Map&);
};

