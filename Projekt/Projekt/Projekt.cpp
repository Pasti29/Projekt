
#include <iostream>
#include "Map.h"
#include <time.h>

using namespace std;

int main()
{

    srand(time(NULL));
    Map map;
    map.setsoldiers();
    map.setmonsters();
    map.place(map.x, map.y,0,0 );
    map.draw();
    while(true)
    {
        map.moveunits(map.x, map.y, 0, 0);
        cout << endl;
    }
}
