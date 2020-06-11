#include "Unit.h"

Unit::Unit(int xpos, int ypos, char point, int health, int strength)
{
	this->xpos = xpos;
	this->ypos = ypos;
	this->point = point;
	this->health = health;
	this->strength = strength;
}

void Unit::setFirstX(int x) //sets unit's starting position in x axis
{
	xpos = rand() % x;
}

void Unit::setFirstY(int y) //sets unit's starting position in y axis
{
	ypos = rand() % y;
}

void Unit::setXpos(int x) //used for updating unit's position in x
{
	xpos = x;
}

void Unit::setYpos(int y) //used for updating unit's position in y
{
	ypos = y;
}

void Unit::setHealth(int h) //used for updating unit's health
{
	health = h;
} 

int Unit::getHealth() 
{
	return health;
}

int Unit::damage() //generates an amount of damage based on unit's strength
{
	return rand() % strength;
}

int Unit::getXpos()
{
	return xpos;
}

int Unit::getYpos()
{
	return ypos;
}

char Unit::getPoint()
{
	return point;
}

void Unit::attack(Unit* unit) //lowers enemy's health by the previously generated amount of damage
{
	if (unit->getHealth() > 0)
	{
		unit->setHealth(unit->getHealth() - damage());
	}
}