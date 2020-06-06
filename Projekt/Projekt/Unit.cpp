#include "Unit.h"
#include "Map.h"
#include <time.h>



Unit::Unit(int xpos, int ypos)
{
	this->xpos = xpos;
	this->ypos = ypos;
}

void Unit::setxpos(int x)
{
	this->xpos = rand() % x;
}

void Unit::setypos(int y)
{
	this->ypos = rand() % y ;
}

int Unit::getxpos()
{
	return xpos;
}

int Unit::getypos()
{
	return ypos;
}

