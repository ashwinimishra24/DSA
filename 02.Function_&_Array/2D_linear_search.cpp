#include<iostream>
using namespace std;

bool search(int arr[4][4], int row, int col, int target)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[4][4] = {{7, 3, 22, 9}, {1, 2, 5, 6}, {8, 12, 17, 24}, {16, 11, 15, 14}};

    if(search(arr, 4, 4, 24))
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element not Found";
    }
}