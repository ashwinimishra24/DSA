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

void heapSort(int arr[], int n)
{
    int size = n;

    while(size > 1)
    {
        swap(arr[1], arr[size]);
        size--;

        heapify(arr, size, 1);
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

    // printing heap
    cout << "Printing heap: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    // heap sort
    heapSort(arr, n);

    // printing heap
    cout << "Printing heap after sorting: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}