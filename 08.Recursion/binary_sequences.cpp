#include<iostream>
using namespace std;

void findSequences(int left_sum, int right_sum, char* output, int start, int end)
{
    //Base case
    if(start>end)
    {
        if(left_sum == right_sum)
        {
            cout<<output<<endl;
        }
        return;
    }

    //Put 0,0
    output[start] = '0';
    output[end] = '0';
    findSequences(left_sum, right_sum, output, start+1, end-1);

    //Put 0,1
    output[start] = '0';
    output[end] = '1';
    findSequences(left_sum, right_sum+1, output, start+1, end-1);

    //Put 1,0
    output[start] = '1';
    output[end] = '0';
    findSequences(left_sum+1, right_sum, output, start+1, end-1);

    //Put 1,1
    output[start] = '1';
    output[end] = '1';
    findSequences(left_sum+1, right_sum+1, output, start+1, end-1);
}

int main()
{
    cout<<"Enter the value of n: "<<endl;
    int n;
    cin>>n;

    char* arr = new char[2*n];

    findSequences(0, 0, arr, 0, 2*n-1);

    return 0;
}