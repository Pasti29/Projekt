#include "Simulation.h"

Simulation::Simulation(int num_soldiers, int num_monsters, int x, int y, bool** position)
{
	this->num_soldiers = num_soldiers;
	this->num_monsters = num_monsters;
	this->x = x;
	this->y = y;
	this->position = NULL;
}

void Simulation::startsim()
{
	Unit* u;
	Soldier* s;
	u = s;
	srand(time(NULL));
	position = new bool* [(x * y) + 1];
	for (int i = 0; i < (x * y) + 1; i++)
	{
		position[i] = new bool[2];
		position[i][0] = 0;
		position[i][1] = 0;
	}
	position[0][0] = 1;
	setSoldiers(u);
	for (int i = 0; i < num_soldiers; i++)
	{
		//Kod niżej jest tylko testowy
		cout << (i + 1) << " Position: " << ser[i].getPosition() << " x pos: " << ser[i].getPosition() - (ceil((ser[i].getPosition() - 1) / x) * x) << " y pos: " << ceil(ser[i].getPosition() / x) + 1 << endl;
	}
	//setMonsters(num_monsters);
	//draw();
}

//Kompletnie nie zrobione, mam pomysł, ale na razie mi się nie chce
void Simulation::draw(int x, int y, int xpos, int ypos)
{

}
/*Trzeba zmnienić na samo set, by móc za pomocą polimorfizmu i "abstract factory" tworzyc jedną fukcją i soldiers, i monsters
Pętla while działa tak, że dopóki pozycja, która jest losowana jest zajęta (position[x][0]=1), losuje dalej do skutku
*/
void Simulation::setSoldiers(Unit* u)
{
	Sergeant* s = new Sergeant[num_soldiers];
	u = s;
	for (int i = 0; i < num_soldiers; i++)
	{
		while (position[u[i].getPosition()][0]) u[i].setPosition(x * y);
		position[u[i].getPosition()][0] = 1;
		position[u[i].getPosition()][1] = 0;
	}
}
//Skasować
/*void Simulation::setMonsters(int num)
{
	Monster monster[num];
}
*/