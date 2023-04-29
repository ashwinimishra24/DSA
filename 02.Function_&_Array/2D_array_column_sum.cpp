#include<iostream>
using namespace std;

void ColumnSum(int arr[4][4], int row, int col)
{
    int sum;
    int maxi = INT_MIN;

    cout<<"Printing the sum of the each column: ";
    for(int j = 0; j < col; j++)
    {
        for(int i = 0; i < row; i++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
        maxi = max(maxi, sum);
        sum = 0;
    }
    cout<<endl;
    cout<<"Maximum sum of the column is: "<<maxi;
}

int main()
{
    int arr[4][4] = {{7, 3, 22, 9}, {1, 2, 5, 6}, {8, 12, 17, 24}, {16, 11, 15, 14}};

    ColumnSum(arr, 4, 4);
}