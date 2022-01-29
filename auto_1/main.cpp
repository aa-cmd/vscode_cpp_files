#include <iterator>
#include <memory>

using namespace std;

class Widget{
public:
    int x = 0;
};

template<typename T>
void dwim(T b, T e){
    while(b != e){
        
        auto currValue = *b;
    }
}

// auto derefUPless = 
//     [](const unique_ptr<Widget>& p1,
//         const unique_ptr<Widget>& p2)
//         { return *p1 < *p2; };

auto derefUPless =
    [](const auto& p1,
        const auto& p2)
        { return *p1 < *p2; };

int main(int argc, char const *argv[])
{
    
    return 0;
}
