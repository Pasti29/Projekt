#include "Unit.h"

Unit::Unit(int xpos, int ypos, char point, int health, int strength)
{
	this->xpos = xpos;
	this->ypos = ypos;
	this->point = point;
	this->health = health;
	this->strength = strength;
}

void Unit::setFirstX(int x)
{
	this->xpos = rand() % x;
}

void Unit::setFirstY(int y)
{
	this->ypos = rand() % y;
}

void Unit::setXpos(int x)
{
	this->xpos = x;
}

void Unit::setYpos(int y)
{
	this->ypos = y;
}

void Unit::setPoint(char p)
{
	this->point = p;
}

void Unit::setHealth(int h)
{
	this->health = h;
} 

int Unit::getHealth()
{
	return health;
}

int Unit::getStrength()
{
	return strength;
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

void Unit::attack(Unit* unit)
{
	if (unit->getHealth() > 0)
	{
		unit->setHealth(unit->getHealth() - strength);
	}
}