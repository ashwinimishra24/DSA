#include <iostream>
#include <vector>

using namespace std;

int findTheWinner(vector<int> v, int k, int i)
{
    int n = v.size();

    // cout<<"n: "<<n<<endl;
    // cout<<"Vecor is: ";
    // for(int i = 0; i <= n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // Base case
    if (n == 1)
    {
        return v[0];
    }

    // cout<<"i: "<<i<<endl;
    // cout<<"k: "<<k<<endl;

    int nxt = (i + k - 1) % n;

    // cout<<"nxt: "<<nxt<<endl;
    
    v.erase(v.begin() + nxt);

    return findTheWinner(v, k, nxt);
}

int main()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
    {
        v.push_back(i);
    }

    cout<<findTheWinner(v, 2, 0);

    return 0;
}