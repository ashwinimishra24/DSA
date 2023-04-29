#include<iostream>
using namespace std;

void PowerSet(string input, string output, int index)
{
    // Base condition
    if(index == input.length())
    {
        cout<<output<<endl;
        return;
    }

    char ch = input[index];


    // Exclude ch
    // PowerSet(input, output, index+1);

    // Include ch
    // output.push_back(ch);
    // PowerSet(input, output, index+1);


    // Include ch
    output.push_back(ch);
    PowerSet(input, output, index+1);

    // Exclude ch
    output.pop_back();
    PowerSet(input, output, index+1);
}

int main()
{
    string input;
    cout<<"Enter the string: "<<endl;
    cin>>input;
    cout<<endl;

    string output = "";

    PowerSet(input, output, 0);

    return 0;
}