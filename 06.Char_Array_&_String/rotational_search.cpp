#include<iostream>
using namespace std;

bool search(string temp, string target)
{
    if(temp.find(target) == string::npos)
    {
        return false;
        //cout<<"false"<<endl;
    }
    //cout<<"true"<<endl;
    return true;
}

int concatenate(string a, string b)
{
    if(a.length() != b.length())
    {
        return false;
    }
    string temp = a + a;
    //cout<<"Temp String is: "<<temp<<endl;
    return search(temp, b);
}

int main()
{
    string a = "babbar";
    string b = "bbarba";

    cout<<concatenate(a, b);
    return 0;
}