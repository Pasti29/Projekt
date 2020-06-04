#pragma once
#include <stdlib.h>
#include <time.h>

class Unit
{
protected:
	int position;//Zmieni�em z X i Y na tylko jedn� warto��, by by�o pro�ciej i z mniejsz� ilo�ci� zmiennych (regu�a KISS XD)

public:
	Unit(int=0);

	virtual void setPosition(int) = 0;
	virtual int getPosition() = 0;
	virtual void spawn(Unit* ,int) = 0;
};

