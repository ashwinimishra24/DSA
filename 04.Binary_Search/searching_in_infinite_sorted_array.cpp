#include<iostream>
using namespace std;

int BinarySearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = (start + (end-start)/2);

        if(arr[mid] == target)
        {
            cout<<"Index: "<<mid<<endl;
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

int SearchInfinite(int arr[], int key)
{
    int start = 0;
    int end = 1;

    while(arr[end] < key)
    {
        start = end;
        end = 2 * end;
    }
    return BinarySearch(arr, start, end, key);
}

int main()
{
    int arr[] = {1, 3, 7, 12, 58, 72, 96};
    cout<<SearchInfinite(arr, 1);
    return 0;
}