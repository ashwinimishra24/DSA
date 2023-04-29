// Printing Square Pattern

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
        // loop for print n stars for each row or we have n col
        for(int col = 1; col <= n; col++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}