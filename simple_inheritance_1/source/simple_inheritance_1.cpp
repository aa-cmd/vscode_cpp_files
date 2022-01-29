#include <cstdio>
#include "simple_inheritance_1.h"



void Animal::speak() const
{
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

int Dog::walk()
{
    return ++_walked;
}

int Cat::pet()
{
    return ++_petted;
}

string Chicken::latin() const
{
    return name() + "-ay";
}

int Chicken::feed()
{
    return ++_fed;
}

