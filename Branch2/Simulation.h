#pragma once
#include <iostream>
#include "Map.h"
#include "Unit.h"

using namespace std;

class Simulation
{
	int num_unit;
	int x;
	int y;

public:
	Simulation(int=1, int=20, int=5);

	void startsim();
};

