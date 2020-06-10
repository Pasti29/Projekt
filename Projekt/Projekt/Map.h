#pragma once
#include "windows.h"
#include "Unit.h"
#include "Monster.h"
#include "Soldier.h"
#include "UnitFactory.h"
#include "SoldierFactory.h"
#include "MonsterFactory.h"
#include <vector>
#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

	class Map
	{
		vector <Unit*> soldiers, monsters;
		char** map;
		int x;
		int y;

	public:
		Map(int = 20, int = 10);

		int getX();
		int getY();
		bool IsOccupied(int x, int y, int k, char u);
		void place();
		void setsoldiers();
		void setmonsters();
		void draw();
		bool areMonstersAlive();
		bool areSoldiersAlive();
		void moveunits(int x, int y, int xpos, int ypos);
	};

