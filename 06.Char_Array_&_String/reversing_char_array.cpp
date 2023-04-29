#include<iostream>
using namespace std;

void Reverse(char name[])
{
    int start = 0;
    int end = strlen(name) - 1;

    while(start<=end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main()
{
    char name[10] = "ashwini";
    Reverse(name);
    cout<<"Reverse name is: "<<name<<endl;
}