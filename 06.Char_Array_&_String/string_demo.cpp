#include<iostream>
using namespace std;

int main()
{
    // Creating String
    string name;

    // Taking I/P from user
    cout<<"Enter Strings: ";
    //cin>>name;
    getline(cin, name);         // function to include string after spaces

    // Printing output to the user
    cout<<"String is: "<<name<<endl;
}