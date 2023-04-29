#include<iostream>
using namespace std;

void PrintSquareNo(int n)
{
    for(int i = 1; i <= n; i++)
    {
        int ans = i * i;
        cout<<ans<<", ";
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    PrintSquareNo(n);
}