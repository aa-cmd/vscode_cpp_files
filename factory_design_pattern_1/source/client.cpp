#include <iostream>
#include "toyfactory.h"
using namespace std;

int main()
{
    int type;
    while (1)
    {
        cout << endl
             << "Enter type or Zero to exit: " << endl;
        cin >> type;
        if(!type)
            break;
        Toy *v = ToyFactory::createToy(type);
        if(v)
        {
            v->showProduct();
            delete v;
        }
    }
    cout << "Exit.." << endl;

    return 0;
}