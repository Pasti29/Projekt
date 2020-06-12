#include "Unit.h"

Unit::Unit(int xpos, int ypos, char point, int health, int strength)
{
	this->xpos = xpos;
	this->ypos = ypos;
	this->point = point;
	this->health = health;
	this->strength = strength;
}

void Unit::setFirstX(int x) { xpos = rand() % x; }

void Unit::setFirstY(int y) { ypos = rand() % y; }

void Unit::setXpos(int x) { xpos = x; }

void Unit::setYpos(int y) { ypos = y; }

int Unit::getXpos() { return xpos; }

int Unit::getYpos() { return ypos; }

char Unit::getPoint() { return point; }

void Unit::setHealth(int h) { health = h; } 

int Unit::getHealth() { return health; }

int Unit::damage() { return rand() % strength; }

void Unit::attack(Unit* unit)
{
	if (unit->getHealth() > 0) unit->setHealth(unit->getHealth() - damage());
}