#include<iostream>
using namespace std;

int GetPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] >= arr[0])
        {
            start = mid+1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

bool BinarySearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = (start + (end-start)/2);

        if(arr[mid] == target)
        {
            cout<<"Element Found at index: "<<mid<<endl;
            return true;
        }
        else if(target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

int Position(int arr[], int size, int k)
{
    int pivot = GetPivot(arr, size);

    if(k >= arr[pivot] && k <= arr[size - 1])
    {
        return BinarySearch(arr, pivot, size - 1, k);
    }
    else
    {
        return BinarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 2;

    cout<<"0 -- Stand for false"<<endl;
    cout<<"1 -- Stand for true"<<endl;
    cout<<Position(arr, size, target)<<endl;

    return 0;
}