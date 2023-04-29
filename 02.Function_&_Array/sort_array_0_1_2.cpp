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

void SortArray(int arr[], int size)
{
    int count_zero = 0;
    int count_one = 0;
    int count_two = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        {
            count_zero++;
        }
        else if(arr[i] == 1)
        {
            count_one++;
        }
        else
        {
            count_two++;
        }
    }

    int i = 0;

    while(count_zero--)
    {
        arr[i] = 0;
        i++;
    }

    while(count_one--)
    {
        arr[i] = 1;
        i++;
    }

    while(count_two--)
    {
        arr[i] = 2;
        i++;
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
    cout << "Enter "<<n<<" numbers: "<< endl;

    //  store input from user to array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout<<"Printing the elements entered in array: "<<endl;
    PrintArray(arr, n);

    cout<<"Sorted array of 0's, 1's & 2's: "<<endl;
    SortArray(arr, n);
}