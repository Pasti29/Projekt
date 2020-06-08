#include "Unit.h"

Unit::Unit(int xpos, int ypos, char point)
{
	this->xpos = xpos;
	this->ypos = ypos;
	this->point = point;
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