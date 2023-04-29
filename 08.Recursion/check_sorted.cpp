#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // Base case
    if(size == 0 || size == 1)
    {
        return true;
    }

    // Processing Statement & Recursive call
    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}

int main()
{
    int arr[] = {2, 4, 6, 9, 111, 13};
    int size = 6;

    cout<<isSorted(arr, size);

    return 0;
}