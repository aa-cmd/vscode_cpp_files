#include <iostream>
#include "simple_inheritance_1.h"

using namespace std;

int main()
{
    Dog d("Rover");
    Cat c("Flutty");
    Chicken ch("Gıd Gıd");

    d.speak();
    c.speak();
    ch.speak();

    cout << "the" << d.type() << "has been walked " << d.walk() << " times" << endl;
    cout << "the" << c.type() << "has been petted " << c.pet() << " times" << endl;
    cout << "the" << ch.type() << "has been fed " << ch.feed() << " times" << endl;

    cout << "The chicken sometimes called " << ch.latin().c_str() << endl;
}