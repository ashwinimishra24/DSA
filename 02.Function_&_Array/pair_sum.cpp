// pair that sum to given number

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

void PairSum(int arr[], int size, int target)
{
    int i = 0;
    int j = size - 1;

    sort(arr, arr + size);

    while(i < j)
    {
        if(arr[i] + arr[j] == target)
        {
            cout<<"Pair value 1: "<<arr[i]<<endl;
            cout<<"Pair value 2: "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    int target;

    // taking the size of the array from user
    cout<<"Enter the size of Array: "<<endl;
    cin>>n;

    int arr[n];

    // taking elements as a input from user
    cout << "Enter "<<n<<" numbers: "<< endl;

    //  store input from user to array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"Enter pair sum value: "<<endl;
    cin>>target;
    
    cout<<"Printing the elements entered in array: "<<endl;
    PrintArray(arr, n);

    PairSum(arr, n, target);
}