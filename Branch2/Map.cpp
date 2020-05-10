#include <iostream>
#include "Map.h"

using namespace std;

void Map::draw(int x, int y,int xpos, int ypos)
{
	for (int i = 1; i <= x+2; i++)
	{
		cout << "-";
	}
	cout<<endl;
	for (int i = 1; i <= y; i++)
	{
		cout << "|";
		for (int j = 1; j <= x; j++)
		{
			if (j == xpos && i == ypos) cout << "@";
			else cout << "*";
		}
		cout << "|"<<endl;
	}
	for (int i = 1; i <= x+2; i++)
	{
		cout << "-";
	}
	cout << endl;
}
