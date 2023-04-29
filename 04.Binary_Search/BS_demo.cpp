#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

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

int main()
{
    int arr[] = {2, 4, 6, 8, 9, 11, 23};

    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    if(BinarySearch(arr, size, target))
    {
        cout<<"Element found" << endl;
    }
    else
    {
        cout<<"Element not found" << endl;
    }

    return 0;
}