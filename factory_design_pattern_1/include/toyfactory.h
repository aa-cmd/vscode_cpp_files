#ifndef __TOYFACTORY_H_
#define __TOYFACTORY_H_

#include "object.h"
#include <iostream>
using namespace std;

class ToyFactory
{
public:
    static Toy * createToy(int);
};

#endif //__TOYFACTORY_H_