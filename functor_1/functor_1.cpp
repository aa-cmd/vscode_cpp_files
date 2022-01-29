#include <cstdio>

using namespace std;

class MultBy
{
    int mult = 1;
    MultBy();

public:
    MultBy(int n) : mult(n) {}
    int operator()(int n) const { return mult * n; }
};

int main()
{
    const MultBy times4(4);
    const MultBy times5(5);
    const MultBy times15(15);
    printf("times4(5) is: %d\n", times4(5));
    printf("times4(15) is: %d\n", times4(15));
    return 0;

}