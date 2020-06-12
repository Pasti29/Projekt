#pragma once
#include <stdlib.h>
#include <time.h>

class Unit
{
protected:
	int xpos; //Position in x
	int ypos; //Position in y
	char point; //Indicate what type of unit it is
	int health; //Show how much damage unit can take, if below 0 unit is dead
	int strength; //Max - 1 amount of damage that unit can do

public:
	Unit(int = 0, int = 0, char = 'U', int = 1, int = 0);

	void setFirstX(int); //Sets unit's starting position in x axis
	void setFirstY(int);  //Sets unit's starting position in y axis
	void setXpos(int); //Used for updating unit's position in x
	void setYpos(int); //used for updating unit's position in y
	int getXpos(); //Gets unit's position in x
	int getYpos(); //Gets unit's position in y
	char getPoint();//Gets unit's point
	void setHealth(int); //Used for updating unit's health
	int getHealth(); //Gets unit's health
	int damage();  //Generates an amount of damage based on unit's strength; range: <0;strength)
	void attack(Unit*);  //Lowers enemy's health by the previously generated amount of damage
};