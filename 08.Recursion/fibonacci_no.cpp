#include<iostream>
using namespace std;

int fibonacci(int n)
{
    // Base case
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }

    // Recursive call
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}

int main()
{
    cout<<fibonacci(8);
    cout<<endl;

    return 0;
}