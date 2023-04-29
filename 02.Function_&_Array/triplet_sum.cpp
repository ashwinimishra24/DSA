// triplet that sum to given number

#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void TripletSum(int arr[], int size, int target)
{
    sort(arr, arr + size);

    for (int m = 0; m < size - 2; m++)
    {
        int first = arr[m];
        int new_target = target - first;

        int i = m + 1;
        int j = size - 1;

        while (i < j)
        {
            if (arr[i] + arr[j] == new_target)
            {
                cout << "Triplet value 1: " << arr[m] << endl;
                cout << "Triplet value 2: " << arr[i] << endl;
                cout << "Triplet value 3: " << arr[j] << endl;
                i++;
                j--;
            }
            else if (arr[i] + arr[j] > new_target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
    }
}

int main()
{
    int n;
    int target;

    // taking the size of the array from user
    cout << "Enter the size of Array: " << endl;
    cin >> n;

    int arr[n];

    // taking elements as a input from user
    cout << "Enter " << n << " numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter Triplet sum value: " << endl;
    cin >> target;

    cout << "Printing the elements entered in array: " << endl;
    PrintArray(arr, n);

    TripletSum(arr, n, target);
}