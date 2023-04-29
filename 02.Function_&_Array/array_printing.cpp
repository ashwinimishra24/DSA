#include<iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5] = {3, 6, 9, 18, 2};
    PrintArray(arr, 5);
}