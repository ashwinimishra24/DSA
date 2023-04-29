#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int ll;
using namespace std;

bool isValid(vector<ll> rank, ll paranthe, int time)
{
    ll sum = 0;

    // this loop will give no. of paratha made in the specified time
    for (ll i = 0; i < rank.size(); i++)
    {
        int t = time;
        int count = 0;
        int k=1;

        while (t>0)
        {
            t = t - k * rank[i];
            if (t >= 0)
            {
                count++;
                k++;
            }
        }
        sum += count;
        // cout <<"count: "<< count << endl;
    }

    // cout << "parathas made " << sum << endl;
    if (sum < paranthe)
        return false;
    return true;
}

ll check_ans(vector<ll> rank, ll paranthe)
{
    // we can consider the maximum time to cook all the parathas are when it will be cooked by the first cook only
    ll end = (rank[0] * paranthe*(paranthe + 1)) / 2;
    ll start = 0;
    ll mid = (start + end) / 2;
    ll ans;

    while(start <= end)
    {
        if (isValid(rank, paranthe, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    ll paranthe, no_of_cook;

    cout<<"Enter the total number of Paranthe required: "<<endl;
    cin>>paranthe;

    cout<<"Enter the total number of Cook: "<<endl;
    cin>>no_of_cook;

    vector<ll> rank;
    cout<<"Now enter the rank of Cook: "<<endl;
    while (no_of_cook--)
    {
        int d;
        cin >> d;
        rank.push_back(d);
    }

    sort(rank.begin(), rank.end());
    ll ans = check_ans(rank, paranthe);
    cout<<"Total time: "<<ans<<endl;

    return 0;
}