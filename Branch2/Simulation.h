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
	bool** position;/*tablica dwuwymiarowa okre�laj�ca czy pozycja jest zaj�ta (position[x][0]=0 - nie zaj�ta; position[x][0]=1 - zaj�ta)
					i przez kogo pozycja jest zaj�ta (position[x][1]=0 - Soldier; position[x][1]=1 - Monster)*/

public:
	Simulation(int = 1, int = 1, int = 20, int = 5, bool** = NULL);

	void startsim();
	void draw(int, int, int, int);//Kompletnie nie zrobione, ale mam pomys�
	void setSoldiers(Unit*);//Trzeba zmnieni� na samo set, by m�c za pomoc� polimorfizmu i "abstract factory" tworzyc jedna fukcja i soldiers i monsters
	//void setMonsters(int);
};

