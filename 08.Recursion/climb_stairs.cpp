#include<iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nStairs)
{
    // Base case
    if(nStairs < 0)
    {
        return 0;
    }
    if(nStairs == 0)
    {
        return 1;
    }

    // Recursive Relation
    int ans = countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);
    
    return ans;
}

int main()
{
    cout<<countDistinctWayToClimbStair(5);
    cout<<endl;

    return 0;
}