#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, c;
    string x;
    map<string, int> m;
    map<string, int>::iterator it;
    cin >> a;
    

    for(int i=0; i<a;i++)
    {
        cin >> b;
        switch(b)
        {
            case 1:
                cin>>x;
                cin>>c;
                m[x] += c;
            break;

            case 2:
                cin>>x;
                m.erase(x);
            break;

            case 3:
                cin>>x;
                it = m.find(x);
                if(it != m.end())
                    cout << m[x] << endl;
                else
                    cout << 0 << endl;
            break;
        }    
    }
    return 0;
}