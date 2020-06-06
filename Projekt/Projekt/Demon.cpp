#include "Demon.h"

Demon::Demon(int xpos, int ypos, char point)
{
	this->xpos = xpos;
	this->ypos = ypos;
	this->point = point;
}

char Demon::getPoint()
{
	return point;
}
