#include <string>

using namespace std;

class Animal
{
    string _name;
    string _type;
    string _sound;
    //private constructor prevents construction of base class
    Animal() {}

protected:
    // protected constructor for use by derived class
    Animal(const string &n, const string &t, const string &s)
        : _name(n), _type(t), _sound(s) {}

public:
    void speak() const;
    const string &name() const { return _name; }
    const string &type() const { return _type; }
    const string &sound() const { return _sound; }
};

class Dog : public Animal
{
    int _walked;

public:
    Dog(string n) : Animal(n, "dog", "woof"), _walked(0) {}
    int walk();
};

class Cat : public Animal
{
    int _petted;

public:
    Cat(string n) : Animal(n, "cat", "meow"), _petted(0) {}
    int pet();
};

class Chicken : public Animal
{
    int _fed;

public:
    Chicken(string n) : Animal(n, "chicken", "gıd gıd"), _fed(0) {}
    string latin() const;
    int feed();
};
