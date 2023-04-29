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

void SortNegPos(int arr[], int size)
{
    int i,j; 
    i=j=0;

    for(int n = 0; n < size; n++)
    {
        if(arr[j] > 0)
        {
            j++;
        }
        else
        {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
    }
    PrintArray(arr, size);
}

int main()
{
    int n;

    // taking the size of the array from user
    cout<< "Enter the size of Array: "<<endl;
    cin>>n;

    int arr[n];

    // taking elements as a input from user
    cout << "Enter "<<n<<" combition of -ve & +ve numbers: "<< endl;

    //  store input from user to array
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout<<"Printing the elements entered in array: "<<endl;
    PrintArray(arr, n);

    cout<<"Printing -ve numbers to left & +ve numbers to right: "<<endl;
    SortNegPos(arr, n);
}