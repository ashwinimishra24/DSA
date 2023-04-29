// Selection Sort is not stable because the order or duplicate doesn't preserved after sorting
#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
    int i, j, min_idx;

    for (i = 0; i < size - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
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

    SelectionSort(arr, size);

    return 0;
}