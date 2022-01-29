#ifndef __OBJECT_H_
#define __OBJECT_H_

#include <iostream>

using namespace std;

class Toy
{
protected:
    string name;
    float price;

public:
    Toy() {}
    virtual void prepareParts() = 0;
    virtual void combineParts() = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel() = 0;
    virtual void showProduct() = 0;
};

class Car : public Toy
{
public:
    void prepareParts();
    void combineParts();
    void assembleParts();
    void applyLabel();
    void showProduct();
};

class Bike : public Toy
{
public:
    void prepareParts();
    void combineParts();
    void assembleParts();
    void applyLabel();
    void showProduct();
};

class Plane : public Toy
{
public:
    void prepareParts();
    void combineParts();
    void assembleParts();
    void applyLabel();
    void showProduct();
};

#endif //__OBJECT_H_