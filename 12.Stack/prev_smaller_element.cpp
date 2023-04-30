#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void prevSmallerElement(vector<int> &arr, int length)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(length);

    for (int i = 0; i <= length-1; i++)
    {
        int curr = arr[i];
        {
            while (s.top() >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(curr);
        }
    }

    for(auto elem : ans)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);

    prevSmallerElement(arr, arr.size());

    return 0;
}