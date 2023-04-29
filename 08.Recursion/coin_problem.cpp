#include<iostream>
using namespace std;

int ways(int coins[], int size, int amount, int current_coin)
{
    // Base case
    if(amount == 0)
    {
        return 1;
    }
    if(amount < 0)
    {
        return 0;
    }

    // Processing statements and Recursive call
    int ans = 0;
    for(int i = current_coin; i < size; i++)
    {
        ans = ans + ways(coins, size, amount - coins[i], i);
    }

    return ans;
}

int main()
{
    int coins[] = {1, 2, 5};
    int size = 3;
    int amount = 11;
    int current_coin = 0;

    cout<<"No of Ways: "<<ways(coins, size, amount, current_coin)<<endl;

    return 0;
}