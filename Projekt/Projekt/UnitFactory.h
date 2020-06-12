#pragma once
#include <vector>
#include "Unit.h"

using namespace std;

class UnitFactory
{
public:
	virtual void makeFirst_type(int, vector <Unit*>&) = 0;
	virtual void makeSecond_type(int, vector <Unit*>&) = 0;
};

