#include<iostream>
using namespace std;

int maxi(int arr[], int size)
{
    // Base case
    if (size == 1)
    {
        return arr[0];
    }

    // Processing Statement & recursive call
    int ans = max(arr[size], maxi(arr, size - 1));
    return ans;
}

int main()
{
    int arr[] = {4, 2, 6, 9, 1, 20, 12};

    cout<<maxi(arr, 6)<<endl;

    return 0;
}