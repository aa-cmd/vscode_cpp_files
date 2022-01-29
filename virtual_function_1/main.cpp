#include <iostream>

using namespace std;

class Base {
public:
    virtual void print() = 0;
    virtual void print(int x);
    void show();
};

void Base::print(){
    cout << "Base print\n";
}

void Base::print(int x){
    cout << "Base int " << x << " print \n";
}

void Base::show(){
    cout << "Base show\n";
}

class Derived : public Base{
public:
    void print() override;
    void print(int x) override;
    void show();
};


void Derived::print(){
    cout << "Derived print\n";
}

void Derived::print(int x){
    cout << "Derived int " << x << " print\n";
}

void Derived::show(){
    cout << "Derived show\n";
}


int main(int argc, char const *argv[])
{
    Base *bptr;
    Derived d;
    bptr = &d;

    bptr->print();
    bptr->show();

    bptr->print(155);

    return 0;
}
