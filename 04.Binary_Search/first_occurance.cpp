#include<iostream>
using namespace std;

void FirstOccurance(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + (end-start)/2);

        if(arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    cout<<ans;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 5, 5, 5, 8, 12, 19};

    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    FirstOccurance(arr, size, target);

    return 0;
}