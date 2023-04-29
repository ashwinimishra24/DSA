#include <iostream>
using namespace std;

void func(int *p)
{
    *p = *p + 1;
}

void dummy(int *arr)
{
    cout <<"Size of arr:" << sizeof(arr) << endl;
}

int main()
{
    // int a = 5;

    // create a pointer
    // int *p = &a;
    // cout << *p << endl;

    // cout << sizeof(p) << endl;

    // int *ptr = 0;
    // cout << *ptr << endl;

    // int a = 5;
    // int *p = &a;

    // cout << "Before " << p << endl;
    // cout << "Before " << *p << endl;
    // func(p);
    // cout << "after " << p << endl;
    // cout << "after " << *p << endl;


    // Arrays & pointer
    // int arr[] = {11, 22, 33, 44, 55};
    // int *p = arr;
    // cout << "Address of 1st memory block is: " << arr << endl;
    // cout << "Address of 1st memory block is: " << &arr[0] << endl;
    // cout << "Address of 1st memory block is: " << &arr << endl;
    // cout << "Adress inside pointer is: " << p << endl;
    // cout << "Adress of pointer is: " << &p << endl;
    // cout << "Accessing the first indexed value of arr: " << *p << endl;
    // cout << "Accessing the first indexed value of arr: " << *arr << endl;
    // cout << "Accessing the first indexed value of arr: " << *(arr + 0)<< endl;
    // cout << "Accessing the second indexed value of arr: " << *(arr + 1) << endl;
    // cout << "Accessing the third indexed value of arr: " << *(arr + 2) << endl;
    // cout << "Accessing the fourth indexed value of arr: " << *(arr + 3) << endl;
    // cout << "Accessing the fifth indexed value of arr: " << *(arr + 4) << endl;
    // int i = 3;
    // cout <<"Another way of accessing the data: "<< i[arr] << endl;


    // Char array & pointer
    // char ch[5] = "abcd";
    // char *ptr = ch;
    // cout <<"Printing the entire array: " << ptr << endl;
    // cout <<"Printing the first element of array: " << *ptr << endl;
    // cout <<"Address of ptr: " << &ptr << endl;
    // char charac = 'B';
    // char *ctr = &charac;
    // cout << ctr << endl;

    // int arr[] = {11, 22, 33, 44, 55};
    // dummy(arr);

    // Q1
    // int *p1;
    // cout << p1 << endl;
    // cout << *p1 << endl;
    // cout << &p1 << endl;

    // Q2
    // int *p2 = 0;
    // cout << p2 << endl;
    // cout << *p2 << endl;
    // cout << &p2 << endl;

    // Q3
    //  char sentence[] = "My name is Gabbar";
    //  char *ptr = sentence;
    //  cout << ptr << endl;
    //  cout << *ptr << endl;
    //  cout << &ptr << endl;

    return 0;
}