#include "object.h"

void Car::prepareParts()
{
    cout << "Preparing Car Parts" << endl;
}

void Car::combineParts()
{
    cout << "Combining Car Parts" << endl;
}

void Car::assembleParts()
{
    cout << "Assembling Car Parts" << endl;
}

void Car::applyLabel()
{
    cout << "applying labels" << endl;
    name = "Car";
    price = 10;
}

void Car::showProduct()
{
    cout << "name: " << name << endl;
    cout << "price: " << price << endl;
}

void Bike::prepareParts()
{
    cout << "Preparing Bike Parts" << endl;
}

void Bike::combineParts()
{
    cout << "Combining Bike Parts" << endl;
}

void Bike::assembleParts()
{
    cout << "Assembling Bike Parts" << endl;
}

void Bike::applyLabel()
{
    cout << "applying labels" << endl;
    name = "Bike";
    price = 20;
}

void Bike::showProduct()
{
    cout << "name: " << name << endl;
    cout << "price: " << price << endl;
}

void Plane::prepareParts()
{
    cout << "Preparing Plane Parts" << endl;
}

void Plane::combineParts()
{
    cout << "Combining Plane Parts" << endl;
}

void Plane::assembleParts()
{
    cout << "Assembling Plane Parts" << endl;
}

void Plane::applyLabel()
{
    cout << "applying labels" << endl;
    name = "Plane";
    price = 30;
}

void Plane::showProduct()
{
    cout << "name: " << name << endl;
    cout << "price: " << price << endl;
}