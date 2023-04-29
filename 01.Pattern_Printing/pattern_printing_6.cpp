// Printing Full Parymid

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
        // loop for printing space = n - row
        for(int col = 1; col <= n - row; col++)
        {
            cout<<" ";
        }

        // loop for printing stars = row
        for(int col = 1; col <= row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}