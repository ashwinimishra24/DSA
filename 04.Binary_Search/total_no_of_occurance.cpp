#include<iostream>
using namespace std;

int ans1 = -1;
int ans2 = -1;

void FirstOccurance(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + (end-start)/2);

        if(arr[mid] == target)
        {
            ans1 = mid;
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
    cout<<"First Occurance: "<<ans1<<endl;
}

void LastOccurance(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + (end-start)/2);

        if(arr[mid] == target)
        {
            ans2 = mid;
            start = mid + 1;
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
    cout<<"Last Occurence: "<<ans2<<endl;
}

void TotalOccurance()
{
    cout<<"Total Occurence: "<<(ans2-ans1)+1<<endl;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 5, 5, 5, 8, 12, 19};

    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    FirstOccurance(arr, size, target);
    LastOccurance(arr, size, target);
    TotalOccurance();

    return 0;
}