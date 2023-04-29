#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-1-i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }    
    cout << endl;
}

int main()
{
    int arr[] = {8, 6, 3, 2, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, size);

    return 0;
}