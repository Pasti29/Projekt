#include "Unit.h"

Unit::Unit(int xpos, int ypos)
{
	this->xpos = xpos;
	this->ypos = ypos;
}

void Unit::setxpos(int x)
{
	srand(time(NULL));
	this->xpos = rand() % x + 1;
}

void Unit::setypos(int y)
{
	srand(time(NULL));
	this->ypos = rand() % y + 1;
}

int Unit::getxpos()
{
	return xpos;
}

int Unit::getypos()
{
	return ypos;
}

void Unit::spawn(int num)
{
	
}

