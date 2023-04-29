#include<iostream>
using namespace std;

void getreverse(int num)
{
    //Base case
    if(num == 0)
    {
        return;
    }

    //Processing Statements
    int digit = num % 10;
    //cout<<"digit is: "<<digit<<endl;
    num = num / 10;
    //cout<<"num is: "<<num<<endl;
    cout<<digit;

    //Recursive Call
    getreverse(num);
    cout<<endl;
}

int main()
{
    int num = 123456;

    getreverse(num);

    return 0;
}