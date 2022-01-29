
#include <vector>

using namespace std;

int nums[4] = {15, 7, 2, 11};
int target = 9; 

class Solution {
public:
    void swap(int* a, int* b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }

    int partition(int * arr, int low, int high)
    {
        int pivot = arr[high];
        int i = (low - 1);

        for(int j = low; j <= high-1; j++)
        {
            if(arr[j] <= pivot)
            {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i+1], &arr[high]);
        return (i+1);
    }

    void quickSort(int *arr, int low, int high)
    {
        if(low < high)
        {
            int pi = partition(arr, low, high);

            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }



    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> tmp;

        return tmp;
    }
};

int main()
{
    Solution s;
    s.quickSort(nums, 0, 3);
}