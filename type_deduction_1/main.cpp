#include <string>


const char name[] = "J. P. Briggs";
const char * ptrToName = name;

template<typename T>
void f(T& param);

void myFunc(int param[]);
void myFunc(int* param);

template<typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept
{
    return N;
}

int keyVals[] = { 1, 3, 5, 7, 9, 11, 25 };
int mappedVals[arraySize(keyVals)];

std::array<int, arraySize(keyVals)> mappedVals;


int main()
{
    f(name);
}