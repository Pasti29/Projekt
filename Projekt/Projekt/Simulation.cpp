#include "Simulation.h"

void Simulation::setsoldiers(Map map)
{
	UnitFactory* factory;
	factory = new SoldierFactory;
	int n;
	cout << "Set number of soldiers: " << endl;
	cin >> n;
	factory->makeFirst_type((ceil((double)n / 2)), soldiers);
	factory->makeSecond_type((n / 2), soldiers);
	for (int i = 0; i < soldiers.size(); i++)
	{
		do {
			soldiers[i]->setFirstX(map.getX());
			soldiers[i]->setFirstY(map.getY());
		} while (map.IsOccupied(soldiers[i]->getXpos(), soldiers[i]->getYpos(), i, 'S'));
		//map[soldiers[i]->getYpos()][soldiers[i]->getXpos()] = soldiers[i]->getPoint();
	}
}

void Simulation::setmonsters(Map map)
{
	UnitFactory* factory;
	factory = new MonsterFactory;
	int n;
	cout << "Set number of monsters: " << endl;
	cin >> n;
	factory->makeFirst_type((ceil((double)n / 2)), monsters);
	factory->makeSecond_type((n / 2), monsters);
	for (int i = 0; i < monsters.size(); i++)
	{
		do {
			monsters[i]->setFirstX(map.getX());
			monsters[i]->setFirstY(map.getY());
		} while (map.IsOccupied(monsters[i]->getXpos(), monsters[i]->getYpos(), i, 'M'));
		//map[monsters[i]->getYpos()][monsters[i]->getXpos()] = monsters[i]->getPoint();
	}
}
