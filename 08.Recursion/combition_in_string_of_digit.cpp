#include<iostream>
using namespace std;

void findCombitions(string input, string output, int index)
{
    // Base condition
    if(index == input.length())
    {
        cout<<output<<endl;
        return;
    }

    char ch = input[index];

    // No Space -- put ch without space
    output.push_back(ch);
    findCombitions(input, output, index+1);

    // With Space -- put ch with space
    output.push_back(' ');
    if(input[index+1] != '\0')
    {
        findCombitions(input, output, index+1);
    }
}

int main()
{
    string input;
    cout<<"Enter the string of digits: "<<endl;
    cin>>input;
    cout<<endl;

    string output = "";

    findCombitions(input, output, 0);

    return 0;    
}