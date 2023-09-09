#include <iostream>
using namespace std;

class Heap
{
    public:
    int arr[250];
    int size;

    Heap()
    {
        size = 0;
    }
};

void heapify(int arr[], int size, int index)
{
    int largest = index;
    int left = 2 * index;
    int right = 2 * index + 1;

    if (left <= size && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= size && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != index)
    {
        swap(arr[index], arr[largest]);
        heapify(arr, size, largest);
    }
}

int main()
{
    Heap maxHeap;

    int arr[] = {-1, 2, 6, 8, 3, 7};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n = 5;

    // build heap
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr, n, i);
    }

    cout << "Printing heap: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}