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
	public:
		vector <Unit*> soldiers;
		vector <Unit*> monsters;
		char map[10][20];
		const int x = 20;
		const int y = 10;

	public:
		Map(const int = 20, const int = 10);

		void setsoldiers();
		void setmonsters();
		void place(int x, int y, int xpos, int ypos);
		void draw();
		void moveunits(int x, int y, int xpos, int ypos);
	};

