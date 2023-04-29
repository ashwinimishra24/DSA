#include<iostream>
using namespace std;

void SpiralMatrix(int arr[3][4], int row, int col)
{
    int starting_row = 0;
    int ending_row = row - 1;
    int starting_col = 0;
    int ending_col = col -1;

    int count = 0;
    int total = row*col;

    while(count < total)
    {
        // Print the first row from the remaining rows
        for(int i = starting_col; count < total && i <= ending_col; i++)
        {
            cout<<arr[starting_row][i]<<" ";
            count++;
        }
        starting_row++;

        // Print the last column from the remaining columns
        for(int i = starting_row; count < total && i <= ending_row; i++)
        {
            cout<<arr[i][ending_col]<<" ";
            count++;
        }
        ending_col--;

        // Print the last row from the remaining rows
        for(int i = ending_col; count < total && i >= starting_col; i--)
        {
            cout<<arr[ending_row][i]<<" ";
            count++;
        }
        ending_row--;

        // Print the first column from the remaining columns
        for(int i = ending_row; count < total && i >= starting_row; i--)
        {
            cout<<arr[i][starting_col]<<" ";
            count++;
        }
        starting_col++;
    }
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    SpiralMatrix(arr, 3, 4);
}