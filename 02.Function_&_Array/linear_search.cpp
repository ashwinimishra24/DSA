#include<iostream>
using namespace std;

bool search(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {3, 6, 9, 18, 2};

    if(search(arr, 5, 22))
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element not Found";
    }
}