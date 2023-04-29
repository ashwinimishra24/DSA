#include<iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void ReverseArray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    PrintArray(arr, size);
}


int main()
{
    int n;

    cout<< "Enter the size of Array: "<<endl;
    cin>>n;

    int arr[n];

    cout << "Enter "<<n<<" numbers: "<< endl;

    //  store input from user to array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout<<"Printing the elements entered in array: "<<endl;
    PrintArray(arr, n);

    cout<<"Printing elements in the reverse order: "<<endl;
    ReverseArray(arr, n);
}