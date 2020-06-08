#pragma once
#include <stdlib.h>
#include <time.h>

class Unit
{
protected:
	int xpos; //position in x
	int ypos; //position in y
	char point;

public:
	Unit(int = 0, int = 0, char = 'U');

	void setFirstX(int);
	void setFirstY(int);
	void setXpos(int);
	void setYpos(int); 
	void setPoint(char);
	int getXpos();
	int getYpos();
	char getPoint();
};