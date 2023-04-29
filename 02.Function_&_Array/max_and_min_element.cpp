#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void MaxElement(int arr[], int size)
{
    int Max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    cout<<Max<<endl;
}

void MinElement(int arr[], int size)
{
    int Min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    cout<<Min<<endl;
}

int main()
{
    int n;

    cout << "Enter the size of Array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing the elements entered in array: " << endl;
    PrintArray(arr, n);

    cout << "Max Element of the array: " << endl;
    MaxElement(arr, n);

    cout<<"Min Element of the array: "<<endl;
    MinElement(arr, n);
}