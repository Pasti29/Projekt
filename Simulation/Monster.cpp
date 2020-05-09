#include "Monster.h"

Monster::Monster(int xpos, int ypos, int hp, int strength, int movespeed) :Unit(xpos,ypos,hp,strength)
{
	this->movespeed = movespeed;
}
