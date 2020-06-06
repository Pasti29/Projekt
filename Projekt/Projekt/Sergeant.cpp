#include "Sergeant.h"

Sergeant::Sergeant(int xpos, int ypos, char point)
{
	this->xpos = xpos;
	this->ypos = ypos;
	this->point = point;
}

char Sergeant::getPoint()
{
	return point;
}