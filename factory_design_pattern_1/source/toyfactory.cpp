#include "toyfactory.h"
#include "object.h"

Toy *ToyFactory::createToy(int type)
{
    Toy *toy = NULL;

    switch (type)
    {
    case 1:
    {
        toy = new Car;
        break;
    }

    case 2:
    {
        toy = new Bike;
        break;
    }

    case 3:
    {
        toy = new Plane;
        break;
    }

    default:
        cout << "invalid toy type please re-enter type" << endl;
        break;
    }

    toy->prepareParts();
    toy->combineParts();
    toy->assembleParts();
    toy->applyLabel();

    return toy;
}