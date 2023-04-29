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

void Duplicate(int arr[], int size)
{
    int sum_1 = 0;
    int sum_2 = (size-1)*(size)/2;

    for(int i = 0; i < size; i++)
    {
        sum_1 = sum_1 + arr[i];
    }

    int duplicate = sum_1 - sum_2;
    cout<<duplicate;
}

int main()
{
    int n;

    // taking the size of the array from user
    cout<< "Enter the size of Array: "<<endl;
    cin>>n;

    int arr[n];

    // taking elements as a input from user
    cout << "Enter "<<n<<" continious numbers starting from 1: "<< endl;

    //  store input from user to array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout<<"Printing the elements entered in array: "<<endl;
    PrintArray(arr, n);

    cout<<"Duplicate element of the array is: ";
    Duplicate(arr, n);
}