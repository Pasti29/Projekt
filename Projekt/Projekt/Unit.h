#pragma once
#include <stdlib.h>
#include <time.h>

class Unit
{
protected:
	int xpos; //position in x
	int ypos; //position in y
	char point;
	int health;
	int strength;

public:
	Unit(int = 0, int = 0, char = 'U', int = 1, int = 0);

	void setFirstX(int);
	void setFirstY(int);
	void setXpos(int);
	void setYpos(int); 
	void setPoint(char);
	void setHealth(int);
	int getHealth();
	int getStrength();
	void attack(Unit*);
	int getXpos();
	int getYpos();
	char getPoint();
	
};