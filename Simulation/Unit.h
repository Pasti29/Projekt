#pragma once
class Unit
{
protected:
	int xpos; //position in x
	int ypos; //position in y

public:
	int hp; //health points
	int strength; //how much can deal damage

	virtual void spawn() = 0;
	virtual void search() = 0;
	virtual void die() = 0;
	virtual void move() = 0;
};

