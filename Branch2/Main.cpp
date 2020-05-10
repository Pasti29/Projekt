#include <iostream>
#include "Simulation.h"

using namespace std;

int main()
{
    Simulation sim;
    sim.startsim();
    cout << "Press enter to exit...";
    cin.get();
}