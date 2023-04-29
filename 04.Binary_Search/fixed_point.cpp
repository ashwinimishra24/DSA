#include<iostream>
using namespace std;

int FixedPoint(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == mid)
        {
            return mid;
        }
        else if(arr[mid] > mid)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-10, -5, 0, 3, 7, 19};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<FixedPoint(arr, size)<<endl;

    return 0;
}