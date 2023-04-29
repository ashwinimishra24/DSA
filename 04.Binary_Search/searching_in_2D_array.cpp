#include<iostream>
using namespace std;

bool BinarySearch(int arr[3][3], int row, int col, int target)
{
    int start = 0;
    int end = col - 1;

    while (start <= end)
    {
        int mid = (start + (end-start)/2);

        if(arr[row][mid] == target)
        {
            return true;
        }
        else if(arr[row][mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

int Searching(int arr[3][3], int row, int col, int target)
{
    int start = 0;
    int end = row - 1;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        // Cheacking the target is row = mid
        if(target >= arr[mid][0] && target <= arr[mid][col-1])
        {
            bool ans = BinarySearch(arr, mid, col, target);
            return ans;
        }

        // Checking upper part
        if(target < arr[mid][0])
        {
            end = mid - 1;
        }

        // Cheacking lower part
        if(target > arr[mid][col-1])
        {
            start = mid + 1;
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {1, 5, 9, 14, 20, 23, 30, 34, 43};

    cout<<Searching(arr, 3, 3, 43)<<endl;
    
    return 0;
}