#include "Sergeant.h"

Sergeant::Sergeant(int position, int hp, int strength) :Soldier(position, hp, strength)
{ 
}

void Sergeant::setPosition(int all)
{
	this->position = rand() % all + 1;
}

int Sergeant::getPosition()
{
	return position;
}

void Sergeant::spawn(Unit* u, int num)
{
	
}