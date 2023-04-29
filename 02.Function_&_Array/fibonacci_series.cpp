#include<iostream>
using namespace std;

int PrintFibonacciSeries(int n)
{
    int first_no = -1;
    int second_no = 1;
    //cout<<"0, 1, ";
    int ans;

    for(int i = 1; i <= n; i++)
    {
        ans = first_no + second_no;
        cout<<ans<<", ";
        first_no = second_no;
        second_no = ans;
    }

    return ans;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    PrintFibonacciSeries(n);
} 