#include "Simulation.h"

Simulation::Simulation(int num_unit, int x, int y)
{
	this->num_unit = num_unit;
	this->x = x;
	this->y = y;
}

void Simulation::startsim()
{
	Map map;
	Unit unit;
	unit.setxpos(x);
	cout << "Unit position in x: " << unit.getxpos() << endl;
	unit.setypos(y);
	cout << "Unit position in x: " << unit.getypos() << endl;
	map.draw(x, y, unit.getxpos(), unit.getypos());

}
