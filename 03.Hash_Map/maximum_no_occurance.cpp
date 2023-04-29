#include<iostream>
#include<iterator>
#include<map>
#include<unordered_map>
using namespace std;

void MaximumNoOccurance(int arr[], int size)
{
    unordered_map<int, int> count;
    int maxi = INT_MIN;
    int ans = 0;

    for(int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    for(auto i:count)
    {
        if(i.second > maxi)
        {
            maxi = i.second;
            ans = i.first;
        }
    }
    cout<<ans;
}

int main()
{
    int arr[] = {1, 2, 3, 9, 9, 1, 5, 7, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    MaximumNoOccurance(arr, size);
}