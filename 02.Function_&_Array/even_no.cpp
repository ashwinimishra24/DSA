#include<iostream>
using namespace std;

void PrintEvenNo(int n)
{
    for(int i = 2; i <= n; i = i + 2)
    {
        cout<<i<<", ";
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    PrintEvenNo(n);
}