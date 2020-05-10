#pragma once
#include <stdlib.h>
#include <time.h>

class Unit
{
	int xpos; //position in x
	int ypos; //position in y

public:
	Unit(int=0, int=0);

	void setxpos(int);
	void setypos(int);
	int getxpos();
	int getypos();
	void spawn(const int);
};

