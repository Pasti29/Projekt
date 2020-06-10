#include <iostream>
#include "Soldier.h"
#include "Monster.h"
#include "Map.h"

using namespace std;

Soldier::Soldier(int xpos, int ypos, char point, int health, int strength) :Unit(xpos, ypos, point, health, strength)
{
}
