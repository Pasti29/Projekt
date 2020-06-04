#pragma once
#include <iostream>
#include <Math.h>
#include "Unit.h"
#include "Soldier.h"
#include "Sergeant.h"

using namespace std;

class Simulation
{
	int num_soldiers;
	int num_monsters;
	int x;
	int y;
	bool** position;/*tablica dwuwymiarowa okreœlaj¹ca czy pozycja jest zajêta (position[x][0]=0 - nie zajêta; position[x][0]=1 - zajêta)
					i przez kogo pozycja jest zajêta (position[x][1]=0 - Soldier; position[x][1]=1 - Monster)*/

public:
	Simulation(int = 1, int = 1, int = 20, int = 5, bool** = NULL);

	void startsim();
	void draw(int, int, int, int);//Kompletnie nie zrobione, ale mam pomys³
	void setSoldiers(Unit*);//Trzeba zmnieniæ na samo set, by móc za pomoc¹ polimorfizmu i "abstract factory" tworzyc jedna fukcja i soldiers i monsters
	//void setMonsters(int);
};

