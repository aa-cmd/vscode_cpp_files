#include <iostream>
#include <vector>

// #include <initializer_list>

// template<typename T>
// void f(T param);

// template<typename T>
// void f(const T param);

// template<typename T>
// void f(const T& param);


// auto x = 27;
// const auto cx = x;
// const auto& rx = x;

// auto&& uref1 = x;
// auto&& uref2 = cx;
// auto&& uref3 = 27;

// const char name[] = "R. N. Briggs";
// auto arr1 = name; // arr1 is const char*
// auto& arr2 = name; // arr2 is consr char (&)[13]

// // void someFunc(int, double);
// // auto func1 = someFunc; // func1 type is void(*)(int, double)
// // auto& func2 = someFunc; //func2 type is void(&)(int, double)

// // int x1 = 27;
// // int x2(27);

// // int x3 = { 27 };
// // int x4{27};

// auto x1 = 27;
// auto x2(27);
// auto x3 = {27};
// auto x4{27};
// auto x5 = {1, 2, 3.0};

// template<typename Container, typename Index>
// decltype(auto)
// authAndAccess(Container&& c, Index i)
// {
//     return std::forward<Container>(c)[i];
// }


// const int answer = 42;
// auto x = answer;
// auto y = &answer;

// template<typename T>
// class TD;

// TD<decltype(x)> xType;
// TD<decltype(y)> yType;

class Widget{
public:
    int x;
};



template<typename T>
void f(const T& param)
{
    using std::cout;
    cout << "T =  " << typeid(T).name() << '\n';
    cout << "param = " << typeid(param).name() << '\n';
}

std::vector<Widget> Vec;
auto vw = Vec;

int main(int argc, char const *argv[])
{
    Widget a;
    a.x = 10;
    vw.push_back(a);
    const auto ab = vw;
    // f(27);
    // f(x);
    // f(cx);
    // std::cout << typeid(x).name() << '\n';
    // std::cout << typeid(y).name() << '\n';
    if(!ab.empty()){
        f(&ab[0]);
        std::cout << "I am here!!!" << '\n';
    }
    return 0;
}
