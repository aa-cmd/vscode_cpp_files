#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    vector<int> b(2,0);
    set<int> s;
    set<int>::iterator it;
    cin >> a;

    for(int i = 0; i<a; i++)
    {
        for(int j=0;j<2;j++)
            cin >> b[j];
        
        switch (b[0])
        {
        case 1:
            s.insert(b[1]);    
        break;
        case 2:
            s.erase(b[1]);
        break;
        case 3:
            it = s.find(b[1]);
            if(it != s.end())
                cout << "Yes"<<endl;
            else
                cout << "No"<< endl;
        break;
        default:
            break;
        }

    }

    return 0;
}