#include<iostream>
using namespace std;

void PrintName(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout<<"My Name Is ASHWINI!"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    PrintName(n);
}