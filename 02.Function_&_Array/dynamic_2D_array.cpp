#include<iostream>
using namespace std;

int main()
{
    int n;
    int m;

    cout<<"Enter the size of 2D_Array: "<<endl;
    cin>>m>>n;

    int **arr = new int*[m];

    for(int i = 0; i < m; i++)
    {
        // In Jagged Array
        // arr[i] = new int*[size(i)];
        arr[i] = new int[n];
    }

    cout<<"Enter the elements of 2D_array: "<<endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the 2D_array: "<<endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Deleting Array
    for(int i = 0; i < m; i++)
    {
        delete []arr[i];
    }
    delete []arr;

    cout<<"Printing the 2D_array: "<<endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}