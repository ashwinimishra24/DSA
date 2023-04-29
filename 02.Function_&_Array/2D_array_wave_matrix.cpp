#include <iostream>
#include <vector>
using namespace std;

void wavePrint(int matrix[4][4], int Row_size, int Col_size)
{
    vector<int> ans;

    for (int col = 0; col < Col_size; col++)
    {
        if (col & 1)
        {
            // odd Index -> Bottom to top
            for (int row = Row_size - 1; row >= 0; row--)
            {
                ans.push_back(matrix[row][col]);
            }
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for (int row = 0; row < Row_size; row++)
            {
                ans.push_back(matrix[row][col]);
            }
        }
    }
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    wavePrint(matrix, 4, 4);
}