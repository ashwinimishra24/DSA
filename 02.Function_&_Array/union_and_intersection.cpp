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

void Union(int arr1[], int arr2[], int size_1, int size_2)
{
    int i = 0;
    int j = 0;

    while(i < size_1 && j < size_2)
    {
        if(arr1[i] < arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else  // (arr1[i] > arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
    }

    // Print remaining elements of the larger array
    while(i < size_1)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j < size_2)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
    cout<<endl;
}

void Intersection(int arr1[], int arr2[], int size_1, int size_2)
{
    int i = 0;
    int j = 0;

    while(i < size_1 && j < size_2)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else  // (arr1[i] > arr2[j])
        {
            j++;
        }
    }
}

int main()
{
    // First Array
    int n;
    // taking the size of the 1st array from user
    cout<< "Enter the size of 1st Array: "<<endl;
    cin>>n;
    int arr1[n];
    // taking elements for 1st array as a input from user
    cout << "Enter "<<n<<" numbers: "<< endl;
    //  store input from user to array
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout<<"Printing the elements entered in 1st array: "<<endl;
    PrintArray(arr1, n);
    

    //Second Array
    int m;
    // taking the size of the 2nd array from user
    cout<< "Enter the size of 2nd Array: "<<endl;
    cin>>m;
    int arr2[m];
    // taking elements for 2nd array as a input from user
    cout << "Enter "<<m<<" numbers: "<< endl;
    //  store input from user to array
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout<<"Printing the elements entered in 2nd array: "<<endl;
    PrintArray(arr2, m);

    
    //Union of Array
    cout<<"Printing the Union of 1st Array and 2nd Array: "<<endl;
    Union(arr1, arr2, n, m);

    
    //Intersection of Array
    cout<<"Printing the Intersection of 1st Array and 2nd Array: "<<endl;
    Intersection(arr1, arr2, n, m);
}