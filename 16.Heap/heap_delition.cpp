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

    void inserIntoHeap(int val)
    {
        size = size + 1;
        int index = size;

        arr[index] = val;

        // taking val to its right position
        while (index > 1)
        {
            int parentIndex = index / 2;

            if (arr[parentIndex] < arr[index])
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "heap is already empty" << endl;
            return;
        }

        // step1:
        swap(arr[1], arr[size]);

        // step2:
        size--;

        // step3:
        int index = 1;

        while (index <= size)
        {
            int largest = index;
            int left = 2 * index;
            int right = 2 * index + 1;

            if (left <= size && arr[left] > arr[largest])
            {
                swap(arr[left], arr[largest]);
                largest = left;
            }
            else if (right <= size && arr[right] > arr[largest])
            {
                swap(arr[right], arr[largest]);
                largest = right;
            }
            else
            {
                return;
            }
        }
    }
};

int main()
{
    Heap maxHeap;

    maxHeap.inserIntoHeap(2);
    maxHeap.inserIntoHeap(6);
    maxHeap.inserIntoHeap(8);
    maxHeap.inserIntoHeap(3);
    maxHeap.inserIntoHeap(7);

    cout<<"Printing Heap: "<<endl;
    maxHeap.print();

    maxHeap.deleteFromHeap();
    cout<<"Printing Heap after calling deleteFromHeap: "<<endl;
    maxHeap.print();

    maxHeap.deleteFromHeap();
    cout<<"Printing Heap after calling deleteFromHeap: "<<endl;
    maxHeap.print();

    return 0;
}