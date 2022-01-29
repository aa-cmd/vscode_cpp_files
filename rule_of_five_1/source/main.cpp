#include <iostream>
#include <string>

using namespace std;

class Integer
{
private:
    int *data = nullptr;
public:

    //Default constructor
    Integer():data(new int(0))
    {
        cout << "From default CTOR\n";
    }

    //Explicit constructor
    Integer(int val):data(new int(val))
    {
        cout << "From Explicit CTOR\n";
    }

    //Copy CTOR
    Integer(const Integer& other):data(new int(*other.data))
    {
        cout << "From copy CTOR\n";
    }

    //Assignment operator
    const Integer& operator=(const Integer &other)
    {
        if(this != &other)
        {
            delete data;
            data = new int(*other.data);
        }
        cout << "From regular assihnment operator\n";
        return *this;
    }

    ~Integer()
    {
        delete data;
        cout << "From destructor\n";
    }

    Integer(Integer &&other)
    {
        data = other.data;
        other.data = nullptr;
        cout << "From move constructor";
    }

    const Integer &operator=(Integer &&other)
    {
        if(this != &other)
        {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
    }

    const string toString() const {
        return (to_string(*data)+'\n');
    }
};

int main()
{

}