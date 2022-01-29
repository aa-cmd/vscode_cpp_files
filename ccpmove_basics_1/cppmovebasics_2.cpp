#include <string>

template <typename T>
class MyVector{
public:
    void push_back(const T& elem);
};

int main(){
    MyVector<std::string> coll;
    std::string s{"data"};
    coll.push_back(std::move(s));
}