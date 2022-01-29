#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    int age;
    int standrd;
    string first_name;
    string last_name;

public:
    Student(){}
    ~Student(){}
    void set_age(int a);
    void set_standard(int stndrd);
    void set_first_name(string str);
    void set_last_name(string str);
    int get_age();
    string get_first_name();
    string get_last_name();
    int get_standard();
    string to_string();
};


void Student::set_age(int a)
{
    age = a;
}

void Student::set_standard(int stndrd)
{
    standrd = stndrd;
}


void Student::set_first_name(string str)
{
    first_name = str;
}


void Student::set_last_name(string str)
{
    last_name = str;
}

int Student::get_age()
{
    return age;
}


string Student::get_first_name()
{
    return first_name;
}


string Student::get_last_name()
{
    return last_name;
}

int Student::get_standard()
{
    return standrd;
}

string Student::to_string()
{
    stringstream ss;
    string tmp, str;
    ss << age;
    ss >> tmp;
    str += tmp + "," + first_name + "," + last_name + ",";
    ss.clear();
    ss << standrd;
    ss >> tmp;
    str += tmp;
    return str;  
}


int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}