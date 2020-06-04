#pragma once
#include <stdlib.h>
#include <time.h>

class Unit
{
protected:
	int position;//Zmieni³em z X i Y na tylko jedn¹ wartoœæ, by by³o proœciej i z mniejsz¹ iloœci¹ zmiennych (regu³a KISS XD)

public:
	Unit(int=0);

	virtual void setPosition(int) = 0;
	virtual int getPosition() = 0;
	virtual void spawn(Unit* ,int) = 0;
};

