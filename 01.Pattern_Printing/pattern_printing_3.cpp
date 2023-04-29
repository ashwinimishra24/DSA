// Printing Triangular Pattern - 1 (Reverse Order)

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
        // loop for printing stars equal to (n - row no + 1)
        for(int col = 1; col <= n - row + 1; col++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}