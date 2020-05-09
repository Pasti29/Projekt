#pragma once
class Unit
{
	int xpos; //position in x
	int ypos; //position in y
	int hp; //health points
	int strength; //how much can deal damage

public:
	Unit(int, int, int, int);

	virtual void spawn() = 0;
	virtual void search() = 0;
	virtual void die() = 0;
	virtual void move() = 0;
};

