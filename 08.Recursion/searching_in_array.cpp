#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k )
{
    //base case
    if(size == 0)
    { 
        return false;
    }

    if(arr[0] == k) 
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr+1, size-1, k );
        return remainingPart;
    }
}

int main()
{
    int arr[] = {4, 2, 6, 9, 1, 0, 12};

    cout<<linearSearch(arr, 7, 4)<<endl;

    return 0;
}