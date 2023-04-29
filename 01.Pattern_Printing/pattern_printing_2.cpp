// Printing Triangular Pattern - 1

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // loop for n rows
    for(int row = 1; row <= n; row++)
    {
        // loop for printing stars equal to row number
        for(int col = 1; col <= row; col++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}