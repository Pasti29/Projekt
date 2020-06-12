#pragma once
#include "Unit.h"

class Officer :
	public Unit
{
public:
	Officer(int = 1, int = 1, char='O', int = 50, int = 25);
};

