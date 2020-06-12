#include "Map.h"

Map::Map(int x, int y)
{
	this->x = x;
	this->y = y;
	map = new char* [y];
	for (int i = 0; i < y; i++) //Creates dynamic array
	{
		map[i] = new char[x];
		for (int j = 0; j < x; j++)
		{
			map[i][j] = ' ';
		}
	}
}

Map::~Map()
{
	for (int i = 0; i < y; i++)
	{
		delete[] map[i];
	}
	delete[] map;
}

int Map::getX() { return x; }

int Map::getY() { return y; }

char Map::getMap(int y, int x) { return map[y][x]; } //y, x - coordinates

void Map::setMap(int y, int x, char c) { map[y][x] = c; } //y, x - coordinates; c - char you want to change to

void Map::draw()
{
	system("cls");
	for (int i = 0; i < x + 2; i++)
	{
		cout << '-';
	}
	cout << endl;
	for (int i = 0; i < y; i++)
	{
		cout << '|';
		for (int j = 0; j < x; j++)
		{
			cout << map[i][j];
		}
		cout << '|' << endl;
	}
	for (int i = 0; i < x + 2; i++)
	{
		cout << '-';
	}
	cout << endl;
	system("pause");
}

bool Map::IsOccupied(vector <Unit*> soldiers, vector <Unit*> monsters, int x, int y, int k, char u) //y, x - coordinates; k = object position in vector; c - char that represent object ('S for soldier or 'M' for monster')
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