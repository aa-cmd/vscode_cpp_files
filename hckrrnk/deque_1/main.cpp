#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    //Write your code here.
    deque<int> temp(k);
    int i;

    for (i = 0; i < k; i++)
    {
        while ((!temp.empty()) && (arr[i] >= arr[temp.back()]))
            temp.pop_back();
        temp.push_back(i);
    }

    for (; i < n; i++)
    {
        cout << arr[temp.front()] << " ";
        while ((!temp.empty()) && (temp.front() <= i - k))
            temp.pop_front();
        while((!temp.empty()) && (arr[i] >= arr[temp.back()]))
            temp.pop_back();
        temp.push_back(i);
    }
    cout << arr[temp.front()] << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}