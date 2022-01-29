#include <iostream>


bool islucky(int);

bool islucky(char) = delete;
bool islucky(bool) = delete;
bool islucky(double) = delete;

// template<typename T>
// void processPointer(T* ptr);

// template<>
// void processPointer<void>(void*) = delete;

// template<>
// void processPointer<char>(char*) = deleteİ

class Base {
public:
    virtual void doWork();
};

class Derived : public Base {
public:
    virtual void doWork();
};


int main(int argc, char const *argv[])
{
    if(islucky(4)) 
        std::cout << "Ok" << '\n';
    else
        std::cout << "Not Ok" << '\n';    
    
    // islucky('a');

    return 0;
}

bool islucky(int number){
    return (number > 5);
}