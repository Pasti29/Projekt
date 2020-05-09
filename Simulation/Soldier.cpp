#include "Soldier.h"

Soldier::Soldier(int xpos, int ypos, int hp, int strength, int movespeed,  int ammo) :Unit(xpos,ypos,hp,strength)
{
	this->movespeed = movespeed;
	this->ammo = ammo;
}
