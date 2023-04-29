// Printing Hollow Half Parymid (Inverted)

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
        // for row 1st & last becz of no spaces
        if(row == 1 || row == n)        
        {
            // loop for printing stars = n - row + 1
            for(int col = 1; col <= n - row + 1; col++)
            {
                cout<<"*";
            }
        }
        // for remaining rows in between 
        else
        {
            // loop for printing star in first column of each row
            cout<<"*";

            // loop for printing space in between stars = n - row - 1
            for(int col = 1; col <= n - row - 1; col++)
            {
                cout<<" ";
            }

            // loop for printing star in last column of each row
            cout<<"*";
        }
        // new line
        cout<<endl;

    }
}