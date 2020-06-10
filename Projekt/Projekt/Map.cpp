#include "Map.h"

Map::Map(int x, int y)
{
	this->x = x;
	this->y = y;
	map = new char* [y];
	for (int i = 0; i < y; i++)
	{
		map[i] = new char[x];
	}
}

int Map::getX()
{
	return x;
}

int Map::getY()
{
	return y;
}

bool Map::IsOccupied(int x, int y, int k, char u)
{
	for (int i = 0; i < soldiers.size(); i++)
	{
		if (soldiers[i]->getXpos() == x && soldiers[i]->getYpos() == y && (i != k || u == 'M')) return 1;
	}
	for (int i = 0; i < monsters.size(); i++)
	{
		if (monsters[i]->getXpos() == x && monsters[i]->getYpos() == y && (i != k || u == 'S')) return 1;
	}
	return 0;
}

void Map::place()
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			map[i][j] = '-';
		}
	}
}

void Map::setsoldiers()
{
	UnitFactory* factory;
	factory = new SoldierFactory;
	int n;
	cout << "Set number of soldiers: " << endl;
	cin >> n;
	factory->makeFirst_type((n / 2), soldiers);
	factory->makeSecond_type((ceil((double)n / 2)), soldiers);
	for (int i = 0; i < soldiers.size(); i++)
	{
		do {
			soldiers[i]->setFirstX(x);
			soldiers[i]->setFirstY(y);
		} while (IsOccupied(soldiers[i]->getXpos(), soldiers[i]->getYpos(), i, 'S'));
		map[soldiers[i]->getYpos()][soldiers[i]->getXpos()] = soldiers[i]->getPoint();
	}
}

void Map::setmonsters()
{
	UnitFactory* factory;
	factory = new MonsterFactory;
	int n;
	cout << "Set number of monsters: " << endl;
	cin >> n;
	factory->makeFirst_type((n / 2), monsters);
	factory->makeSecond_type((ceil((double)n / 2)), monsters);
	for (int i = 0; i < monsters.size(); i++)
	{
		do {
			monsters[i]->setFirstX(x);
			monsters[i]->setFirstY(y);
		} while (IsOccupied(monsters[i]->getXpos(), monsters[i]->getYpos(), i, 'M'));
		map[monsters[i]->getYpos()][monsters[i]->getXpos()] = monsters[i]->getPoint();
	}
}
		
void Map::draw()
	{

	for (int i = 0;i < y;i++)
	{
		for (int j = 0;j < x;j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
}

bool Map::areMonstersAlive()
{
	return monsters.empty();
}

bool Map::areSoldiersAlive()
{
	return soldiers.empty();
}

void Map::moveunits(int x, int y, int xpos, int ypos)
{
	for (int i = 0;i < soldiers.size();i++)
	{
		int dist=1000, idmonster;
		for (int j = 0;j < monsters.size();j++)
		{
			int dist_temp = sqrt(pow((soldiers[i]->getXpos() - monsters[j]->getXpos()), 2) + pow((soldiers[i]->getYpos() - monsters[j]->getYpos()), 2));
			if (dist_temp < dist)
			{
				dist = dist_temp;
				idmonster = j;
			}
			
		}
		if ((dist == 1) && (soldiers[i]->getXpos() == monsters[idmonster]->getXpos() || soldiers[i]->getYpos() == monsters[idmonster]->getYpos()))
		{
			soldiers[i]->attack(monsters[idmonster]);
			cout << monsters[idmonster]->getPoint() << ": " << monsters[idmonster]->getHealth() << endl;
			if (monsters[idmonster]->getHealth() <= 0)
			{
				map[monsters[idmonster]->getYpos()][monsters[idmonster]->getXpos()] = '-';
				monsters.erase(monsters.begin() + idmonster);
				if (monsters.empty())
				{
					break;
				}
			}
		}
		else
		{
			map[soldiers[i]->getYpos()][soldiers[i]->getXpos()] = '-';

			if (soldiers[i]->getXpos() < monsters[idmonster]->getXpos() && soldiers[i]->getXpos() < (x - 1)) soldiers[i]->setXpos(soldiers[i]->getXpos() + 1);
			else if (soldiers[i]->getXpos() > monsters[idmonster]->getXpos() && soldiers[i]->getXpos() > 0) soldiers[i]->setXpos(soldiers[i]->getXpos() - 1);
			else if (soldiers[i]->getYpos() < monsters[idmonster]->getYpos() && soldiers[i]->getYpos() < (y +1)) soldiers[i]->setYpos(soldiers[i]->getYpos() + 1);
			else  if (soldiers[i]->getYpos() > 0) soldiers[i]->setYpos(soldiers[i]->getYpos() - 1);

			map[soldiers[i]->getYpos()][soldiers[i]->getXpos()] = soldiers[i]->getPoint();
		}
	}
	for (int i = 0;i < monsters.size();i++)
	{
		int distm = 1000, idsoldier=0;
		for (int j = 0;j < soldiers.size();j++)
		{
			int distm_temp = sqrt(pow((monsters[i]->getXpos() - soldiers[j]->getXpos()), 2) + pow((monsters[i]->getYpos() - soldiers[j]->getYpos()), 2));
			if (distm_temp < distm)
			{
				distm = distm_temp;
				idsoldier = j;
			}

		}
		if ((distm == 1) && (monsters[i]->getXpos() == soldiers[idsoldier]->getXpos() || monsters[i]->getYpos() == soldiers[idsoldier]->getYpos()))
		{
			monsters[i]->attack(soldiers[idsoldier]);
			if (soldiers[idsoldier]->getHealth() <= 0)
			{
				map[soldiers[idsoldier]->getYpos()][soldiers[idsoldier]->getXpos()] = '-';
				soldiers.erase(soldiers.begin() + idsoldier);
				if (soldiers.empty())
				{
					break;
				}
			}
		}
		else
		{
			map[monsters[i]->getYpos()][monsters[i]->getXpos()] = '-';

			if (monsters[i]->getXpos() < soldiers[idsoldier]->getXpos() && monsters[i]->getXpos() < (x +1)) monsters[i]->setXpos(monsters[i]->getXpos() + 1);
			else if (monsters[i]->getXpos() > soldiers[idsoldier]->getXpos() && monsters[i]->getXpos() > 0) monsters[i]->setXpos(monsters[i]->getXpos() - 1);
			else if (monsters[i]->getYpos() < soldiers[idsoldier]->getYpos() && monsters[i]->getYpos() < (y + 1)) monsters[i]->setYpos(monsters[i]->getYpos() + 1);
			else  if (monsters[i]->getYpos() > 0) monsters[i]->setYpos(monsters[i]->getYpos() - 1);

			map[monsters[i]->getYpos()][monsters[i]->getXpos()] = monsters[i]->getPoint();
		}
	}
	Sleep(500);
	system("cls");
	draw();
	system("pause");
	}