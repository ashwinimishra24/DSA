#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    cout << "call recieved for: " << str << endl;

    // Base case
    if(i>j)
    {
        return true;
    }

    // Processing Statement & Recursive call
    if(str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, i+1, j-1);
    }
}

int main()
{
    string name = "BookkooB";

    cout<<checkPalindrome(name, 0, name.length()-1);

    return 0;
}