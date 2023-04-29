#include<iostream>
using namespace std;

int getLength(string name)
{
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    string name;

    cout<<"Enter your name: "<<endl;
    getline(cin, name);

    cout<<"Entered name is: "<<name<<endl;

    cout<<"Length of your name is: "<<getLength(name);

    return 0;
}