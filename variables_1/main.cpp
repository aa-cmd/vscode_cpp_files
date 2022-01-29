#include <iostream>


using namespace std;
int main(int argc, char const *argv[])
{
    int y {5};
    {
        int x {};
        cin >> x;

        if(x == 4)
            y = 4;
    }
    
    cout << y << "\n";
    return 0;
}
