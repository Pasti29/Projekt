#include "Officer.h"

Officer::Officer(int xpos, int ypos, char point)
{
	this->xpos = xpos;
	this->ypos = ypos;
	this->point = point;
}

char Officer::getPoint()
{
	return point;
}
