#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, c;
    vector<int>::iterator it;
    cin >> a;
    vector<int> b(a, 0);
    for (int i = 0; i < a; i++)
       cin >> b[i];

    cin >> c;
    vector<int> d(c,0);
    for(int i=0; i<c; i++)
        cin >> d[i]; 


    for(int i=0; i<d.size();i++)
    {
        it = lower_bound(b.begin(), b.end(), d[i]); 
        if(b[it - b.begin()] == d[i])
            cout << "Yes " << (it - b.begin() + 1) << endl;
        else
            cout << "No " << (it - b.begin() + 1) << endl;
    }
    return 0;
}


