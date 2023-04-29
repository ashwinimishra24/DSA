#include<iostream>
using namespace std;

int optimalstrategy(int arr[], int i, int j)
{
    //Base case
    if(i > j)
    {
        return 0;
    }

    //Recursive calls & Processing Statements
    int choice1 = arr[i] + min(optimalstrategy(arr, i+2, j), optimalstrategy(arr, i+1, j-1));
    int choice2 = arr[j] + min(optimalstrategy(arr, i+1, j-1), optimalstrategy(arr, i, j-2));

    int ans = max(choice1, choice2);

    return ans;
}

int main()
{
    int arr[] = {20,30,2,2,2,10};
    int i = 0;
    int j = 5;

    cout<<"Maximum is: "<<optimalstrategy(arr, i, j)<<endl;

    return 0;
}