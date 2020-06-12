#pragma once
#include "windows.h"
#include "Unit.h"
#include <vector>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

	class Map
	{
		char** map;
		int x; //width of map
		int y; //height of map

	public:
		Map(int = 20, int = 10);
		~Map();

		int getX(); //Gets variable 'x'
		int getY(); //Gets variable 'y'
		char getMap(int, int); //Gets certain element from array 'map'
		void setMap(int, int, char); //Sets certain element in array 'map'
		void draw(); //Draws the map in console
		bool IsOccupied(vector <Unit*>, vector <Unit*>, int, int, int, char); // return true if a position is already occupied by a different unit
	};

