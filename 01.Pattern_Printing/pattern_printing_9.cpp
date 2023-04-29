// Printing Pascal's Triangle

#include<iostream>
using namespace std;

// Factorial Function
int fact(int n)
{
    long long int factorial = 1;
    for(int i=1; i<=n; i++)
    {
        factorial = factorial*i;

    }
    return factorial;
}

// NcR Function
int ncr(int n, int r)
{
    int value_1 = fact(n);
    int value_2 = fact(n - r);
    int value_3 = fact(r);

    int ans = value_1/(value_2 * value_3);
    
    return ans;
}

// Main Function
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // loop for n rows
    for(int rows = 0; rows <= n; rows++)
    {
        // loop for print Pascal's value in col
        for(int col = 0; col <= rows; col++)
        {
            cout<<ncr(rows, col)<<" ";
        }
        // new line
        cout<<endl;
    }
    return 0;
}