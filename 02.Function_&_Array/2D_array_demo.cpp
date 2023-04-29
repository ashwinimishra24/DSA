#include<iostream>
using namespace std;

int main()
{
    int r;
    int c;

    cout<<"Enter the size of row for 2D Array: "<<endl;
    cin>>r;
    cout<<"Enter the size of column for 2D Array: "<<endl;
    cin>>c;

    int arr[r][c];
    //int size = max(r, c);

    //Input
    cout<<"Enter elements in 2D Array of size: "<<r<<"*"<<c<<endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }

    //Output
    cout<<"2D Array is: "<<endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
} 