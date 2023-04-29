// Largest sub array

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

void KadanesAlgorithm(int arr[], int size)
{
    int maxi = INT_MIN;
    int sum =  0;

    int start = 0;
    int end = 0;
    int s = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];

        // maxi = max(maxi, sum);
        if (sum > maxi)
        {
            maxi = sum;
            start = s;
            end = i;
        }

        if(sum < 0)
        {
            sum = 0;
            s = i + 1;
        }
    }
    cout<<maxi<<endl;
    cout<<"Starting Index of Largest sub array: "<<start<<endl;
    cout<<"Ending Index of Largest sub array: "<<end;
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

    cout<<"sum of Largest Sub Array is: ";
    KadanesAlgorithm(arr, n);
}