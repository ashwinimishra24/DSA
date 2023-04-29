#include<iostream>
using namespace std;

void RecursiveBubbleSort(int* arr, int size)
{
    // Base case - already sorted
    if(size == 0 || size == 1)
    {
        return ;
    }

    // Processing statement
    for(int i=0; i<size-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }

    //Recursive Call
    RecursiveBubbleSort(arr, size-1);
}

int main()
{
    int arr[] = {8, 6, 3, 2, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    RecursiveBubbleSort(arr, size);

    // Printing elements
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}