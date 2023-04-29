// Minimum swaps required to bring all elements less & equals to k together
// Sliding Windows

#include<iostream>
using namespace std;

void MinSwaps(int arr[], int size, int key)
{
    // Counting the number of elements less then & equals to key for creating windows
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] <= key)
        {
            count++;
        }
    }

    // Creating first window
    int bad_int = 0;
    for(int i = 0; i < count; i++)
    {
        if(arr[i] > key)
        {
            bad_int++;
        }
    }

    // Initalizing the value of bad_int to ans
    int ans = bad_int;

    // Checking for remaining windows
    for(int i = 0, j = count; j < size; i++, j++)
    {
        // Checking Old element of window
        if(arr[i] > key)
        {
            bad_int--;
        }
        // Ckecking for new element of window
        if(arr[j] > key)
        {
            bad_int++;
        }
    }

    ans = min(ans, bad_int);
    cout<<ans;
}

int main()
{
    int arr[5] = {2, 1, 5, 6, 3};

    MinSwaps(arr, 5, 2);

    return 0;
}