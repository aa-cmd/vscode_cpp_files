#include <iostream>

using namespace std;

class Myclass{
public:
    Myclass(const char *){
        cout << "Myclass(const char *)\n";
    }

    Myclass(const Myclass&){
        cout << "copy ctor\n";
    }

    Myclass(Myclass&&){
        cout << "Move ctor\n";
    }
};

Myclass foo(){
    return "aykan";
}

Myclass bar(){
    return foo();
}

int main()
{
    auto x = bar();
    auto y{x};
    auto z = forward<Myclass>(y);
}