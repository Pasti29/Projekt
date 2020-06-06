#include "Map.h"

Map::Map(const int, const int)
{

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
}

void Map::place(int x, int y, int xpos, int ypos)
{
	for (int i = 0;i < y;i++)
	{
		for (int j = 0;j < x;j++)
		{
			map[i][j] = '-';
			cout << map[i][j];
		}
		cout << endl;
	}
	for (unsigned int i = 0; i < soldiers.size(); i++)
	{
		soldiers[i]->setxpos(x);
		//cout << "soldier x: " << soldiers[i].getxpos() + 1 << endl;
		soldiers[i]->setypos(y);
		//cout << "soldier y: " << y - soldiers[i].getypos() << endl;	
		map[soldiers[i]->ypos][soldiers[i]->xpos] = soldiers[i]->getPoint();
	}
	for (int i = 0; i < monsters.size(); i++)
	{
		monsters[i]->setxpos(x);
		//cout << "monster x: " << monsters[i].getxpos() + 1 << endl;
		monsters[i]->setypos(y);
		//cout << "monster y: " << y - monsters[i].getypos() << endl;
		for (int j = 0;j < soldiers.size();j++)
		{
			if ((monsters[i]->getxpos() == soldiers[j]->getxpos()) && (monsters[i]->getypos() == soldiers[j]->getypos()))
			{
				monsters[i]->setxpos(x);
				monsters[i]->setypos(y);
			}
		}
		map[monsters[i]->ypos][monsters[i]->xpos] = monsters[i]->getPoint();

	}
}
		
void Map::draw()
	{
	
	for (int i = 0;i < y;i++)
	{
		for (int j = 0;j < x;j++)
		{
			/* map[i][j] = '-';
			for (int k = 0;k < soldiers.size();k++)
			{
				if ((soldiers[k].getxpos() == j) && (soldiers[k].getypos() == i)) map[i][j] = soldiers[k].point;
			}
			for (int k = 0;k < monsters.size();k++)
			{
				if ((monsters[k].getxpos() == j) && (monsters[k].getypos() == i)) map[i][j] = monsters[k].point;
			} */
			cout << map[i][j];
		}
		cout << endl;
	}
}

void Map::moveunits(int x, int y, int xpos, int ypos)
{
	for (int i = 0;i < soldiers.size();i++)
	{
		int dist=100, idmonster;
		for (int j = 0;j < monsters.size();j++)
		{
			int dist_temp = sqrt(pow((soldiers[i]->xpos - monsters[j]->xpos), 2) + pow((soldiers[i]->ypos - monsters[j]->ypos), 2));
			if (dist_temp < dist)
			{
				dist = dist_temp;
				idmonster = j;
			}
			
		}
		map[soldiers[i]->ypos][soldiers[i]->xpos] = '-';
		
		if (soldiers[i]->xpos < monsters[idmonster]->xpos) soldiers[i]->xpos++;
		else if (soldiers[i]->xpos > monsters[idmonster]->xpos) soldiers[i]->xpos--;
		else if (soldiers[i]->ypos < monsters[idmonster]->ypos) soldiers[i]->ypos++;
		else  soldiers[i]->ypos--;
		
		map[soldiers[i]->ypos][soldiers[i]->xpos] = soldiers[i]->getPoint();
	
	}
	Sleep(500);
	system("cls");
	Map::draw();
	system("pause");
	}