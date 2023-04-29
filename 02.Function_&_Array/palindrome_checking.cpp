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

bool IsPalindrome(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while(i < j)
    {
        if(arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
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

    cout<<"Checking Palindrome (for false = 0 & for true = 1) : "<<IsPalindrome(arr, n);
}