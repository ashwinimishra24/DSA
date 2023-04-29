#include<iostream>
using namespace std;

void RecursiveSelectionSort(int* arr, int size, int minIndex)
{
    // Base case - already sorted
    if(size == 0 || size == 1 || minIndex == size)
    {
        return ;
    }

    // Processing Statements
    // Find the minimum element in unsorted array
    for(int i=minIndex+1;i<size;i++)
    {
        if(arr[i]<arr[minIndex])
        {
            swap(arr[minIndex], arr[i]);
        }
    }

    //Recursive Call
    RecursiveSelectionSort(arr, size, minIndex+1);
}

int main()
{
    int arr[] = {8, 6, 3, 2, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    RecursiveSelectionSort(arr, size, 0);

    // Printing elements
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}