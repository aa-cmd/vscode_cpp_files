
#include <iostream>

void sayHi();

extern int g_x;
extern const int g_y;

using namespace std;

int main(int argc, char const *argv[])
{
    sayHi();
    cout << "\n" << g_x << "\n";
    cout << g_y << "\n";
    return 0;
}
