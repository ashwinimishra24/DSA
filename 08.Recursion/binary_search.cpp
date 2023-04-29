#include<iostream>
using namespace std;

bool binarysearch(int *arr, int start, int end, int target)
{
    int mid = start + (end - start)/2;

    // Base Case
    if(start > end)
    {
        return false;
    }
    if(arr[mid] == target)
    {
        return true;
    }

    if(arr[mid] < target)
    {
        return binarysearch(arr, mid+1, end, target);
    }
    else
    {
        return binarysearch(arr, start, mid-1, target);
    }
}

int main()
{
    int arr[5] = {2,4,9,11,17};
    int start = 0;
    int end = 5;
    int target = 11;

    cout<<binarysearch(arr, start, end, target);
    
    return 0;
}