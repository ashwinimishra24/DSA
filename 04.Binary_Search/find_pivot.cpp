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

int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9, 1, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Pivot index is at: "<<GetPivot(arr, size)<<endl;
}