#include<iostream>
using namespace std;

bool isPossibleSolution(int arr[], int mid, int size, int target)
{
    int sum = 0;
    int diff = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > mid)
        {
            diff = arr[i] - mid;

            sum = sum + diff;
        }
    }

    if(sum >= target)
    {
        return true; 
    }
    else
    {
        return false;
    }
}

int getMaxHeightOfSaw(int arr[], int size, int target)
{
    sort(arr, arr + size);
    int start = 0;
    int end = arr[size - 1];
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(isPossibleSolution(arr, mid, size, target))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {4, 42, 40, 26, 46};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 20;

    cout<<getMaxHeightOfSaw(arr, size, target);
     
    return 0;
}