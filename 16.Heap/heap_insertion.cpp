#include<iostream>
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
        size = size+1;
        int index = size;

        arr[index] = val;

        // taking val to its right position
        while(index > 1)
        {
            int parentIndex = index/2;

            if(arr[parentIndex] < arr[index])
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
        for(int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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

    maxHeap.print();

    return 0;
}