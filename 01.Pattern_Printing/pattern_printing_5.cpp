// Printing Triangular Pattern - 2 (Reverse Order)

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
        // loop for printing space = row - 1
        for(int col = 1; col <= row - 1; col++)
        {
            cout<<" ";
        }

        // loop for printing star = n - row + 1
        for(int col = 1; col <= n - row + 1; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}