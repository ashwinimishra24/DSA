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

void AlternateSwaped(int arr[], int size)
{
    int i = 0;
    int j = i + 1;

    while (j < size)
    {
        swap(arr[i], arr[j]);
        i = i + 2;
        j = j + 2;
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

    cout<<"Printing alternate swaped elements of the array: "<<endl;
    AlternateSwaped(arr, n);
}