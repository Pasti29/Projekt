#include <iostream>
#include "Simulation.h"

using namespace std;

int main()
{
    int num_s, num_m, x, y;
    cout << "Welcome in simulation of military base!" << endl << endl;
    cout << "How many units?" << endl;
    cout << "Soldiers: ";
    cin >> num_s;
    cout << "Monsters: ";
    cin >> num_m;
    cout << endl << endl;
    cout << "How big map might be?" << endl;
    cout << "In X-dimension: ";
    cin >> x;
    cout << "In Y-dimension: ";
    cin >> y;
    system("pause");
    cout << endl;
    Simulation sim(num_s, num_m, x, y);
    sim.startsim();
    system("pause");
}