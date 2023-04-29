#include<iostream>
using namespace std;

void update(int** ptr2)
{
    // ptr2 = ptr2 + 1;

    // *ptr2 = *ptr2 + 1;

    **ptr2 = **ptr2 + 1;
}

int main()
{
    int i = 5;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;

    cout<<endl;
    cout<<"Address of i: "<<&i<<endl;
    cout<<"Address of ptr1: "<<&ptr1<<endl;
    cout<<"Address of ptr2: "<<&ptr2<<endl;
    cout<<endl;
    cout<<"Address inside ptr1: "<<ptr1<<endl;
    cout<<"Address inside ptr2: "<<ptr2<<endl;
    cout<<endl;
    cout<<"Value of *ptr1: "<<*ptr1<<endl;
    cout<<"Value of *ptr2: "<<*ptr2<<endl;
    cout<<"Value of **ptr2: "<<**ptr2<<endl;
    cout<<endl;
    cout<<"Before i: "<<i<<endl;
    cout<<"Before ptr1: "<<ptr1<<endl;
    cout<<"Before ptr2: "<<ptr2<<endl;
    cout<<endl;
    update(ptr2);
    cout<<"After i: "<<i<<endl;
    cout<<"After ptr1: "<<ptr1<<endl;
    cout<<"After ptr2: "<<ptr2<<endl;


    return 0;
}