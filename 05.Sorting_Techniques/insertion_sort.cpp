#include<iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
    int i, j;

    for(i = 1; i < size; i++)
    {
        cout<<"i: "<<i<<endl;
        int temp = arr[i];
        for(j = i - 1; j >= 0; j--)
        {
            cout<<"j: "<<j<<endl;
            if(arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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

    InsertionSort(arr, size);

    return 0;
}