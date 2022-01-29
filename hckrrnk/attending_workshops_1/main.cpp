// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
typedef pair<int, int> p;
typedef vector<p> Available_Workshops;

Available_Workshops *initialize(int *start_time, int *duration, int n)
{
    auto temp = new Available_Workshops(n);

    for (int i = 0; i < n; i++)
    {
        temp->at(i).first = start_time[i];
        temp->at(i).second = start_time[i] + duration[i];
    }

    return temp;
}

int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    sort(ptr->begin(), ptr->end(), [](const p &a, p &b) { return a.second < b.second; });
    int f = 0, res = 0;
    for(int i=0; i<ptr->size(); i++)
    {
        if(ptr->at(i).first >= f )
        {
            res++;
            f = ptr->at(i).second;
        }
    }
    return res;
}

int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}