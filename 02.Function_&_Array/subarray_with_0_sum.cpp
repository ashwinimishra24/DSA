#include <iostream>
#include <unordered_map>
using namespace std;

bool subArrayExists(int arr[], int n)
{
    unordered_map<int, int> freq;
    int sum = 0;
    // find prefix sum
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        freq[sum]++;
    }

    // printing map
    // for (auto x : freq)
    // {
    //     cout << x.first << " " <<x.second << endl;
    // }

    // serching for the subarray
    for (auto x : freq)
    {
        if (x.first == 0)
        {
            return true;
        }
        if (x.second > 1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {4, 2, -3, 1, 6};
    int n = 5;

    cout<<subArrayExists(arr, n)<<endl;

    return 0;
}