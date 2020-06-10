
#include <iostream>
#include "Map.h"
#include <time.h>

using namespace std;

int main()
{
    int x, y;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    srand(time(NULL));
    Map map(x, y);
    map.place();
    map.setsoldiers();
    map.setmonsters();
    map.draw();
    system("pause");
    while(!map.areMonstersAlive()&&!map.areSoldiersAlive())
    {
        map.moveunits(map.getX(), map.getY(), 0, 0);
        cout << endl;
    }
}
