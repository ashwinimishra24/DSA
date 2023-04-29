// Find first repeating element in array

#include<iostream>
#include<iterator>
#include<map>
#include<unordered_map>
using namespace std;

int FirstRepeating(int arr[], int size)
{
    unordered_map<int, int> count;

    // Store count of numbers
    for(int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    // Traverse array & find the first repeating number
    for(int i = 0; i < size; i++)
    {
        if(count[arr[i]] > 1)
        {
            cout<<arr[i];
            break;
        }
    }
    return 0;
}

int main()
{
    int arr[7] = {10, 5, 3, 4, 3, 5, 6};

    FirstRepeating(arr, 7);
}