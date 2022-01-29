#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> createAndInsert()
{
    vector<string> coll;
    coll.reserve(3);
    string s = "data";

    coll.push_back(s);
    coll.push_back(s+s);
    coll.push_back(s);
    cout << s;

    return coll;
}

vector<string> createAndInsert2()
{
    vector<string> coll;
    coll.reserve(3);
    string s = "data";

    coll.push_back(s);
    coll.push_back(s+s);
    coll.push_back(move(s));
    cout << s;

    return coll;
}

int main(){
    vector<string> v;
    v = createAndInsert();
    // v = createAndInsert2();
}