#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, num;
    cin >> n; 
    vector<int> b(n,0);
    for(int i=0;i<n;i++)
        cin >> b[i];

    sort(b.begin(), b.end());   
    
    for(int i=0;i<n;i++) cout << b[i] << " ";
    return 0;
}