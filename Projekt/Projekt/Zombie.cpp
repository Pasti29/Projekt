#include "Zombie.h"

Zombie::Zombie(int xpos, int ypos, char point)
{
	this->xpos = xpos;
	this->ypos = ypos;
	this->point = point;
}

char Zombie::getPoint()
{
	return point;
}
