#include<iostream>
using namespace std;

int PrintFactorialNo(int n)
{
    int ans = 1;

    for(int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    return ans;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int fact = PrintFactorialNo(n);
    cout<<fact;
}