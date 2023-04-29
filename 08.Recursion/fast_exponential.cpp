#include<iostream>
using namespace std;

int fast_exponential(double num, int power)
{
    // Base case
    if(power == 0)
    {
        return 1;
    }

    // Recursive call
    double ans = fast_exponential(num, power/2);

    // Processing Statements
    //for odd number
    if(power&1)
    {
        return ans * ans * num;
    }
    //for even number
    else
    {
        return ans * ans;
    }
}

int main()
{
    cout<<"Exponential power value: "<<fast_exponential(2, 3)<<endl;

    return 0;
}