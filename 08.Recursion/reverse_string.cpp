#include<iostream>
using namespace std;

void getreverse(string& str, int i, int j)
{
    cout << "call recieved for: " << str << endl;

    // Base case
    if(i>j)
    {
        return;
    }

    // Processing Statements
    swap(str[i], str[j]);

    // Recursive call
    getreverse(str, i+1, j-1);
}

int main()
{
    string name = "abcde";

    getreverse(name, 0, name.length()-1);

    cout<<name;
    cout<<endl;

    return 0;
}