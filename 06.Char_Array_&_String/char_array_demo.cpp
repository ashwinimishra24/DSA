#include<iostream>
using namespace std;

int getLength(char arr[])
{
    int length = 0;
    int index = 0;

    while(arr[index] != '\0')
    {
        length++;
        index++;
    }
    return length;
}

int main()
{
    char name[20];
    char name_1[20] = "Ashwini";
    char name_2[20] = "Mishra";

    // Input from user
    cout<<"Enter your Name: ";
    cin>> name;

    // Printing the name
    cout<<"Name is: "<<name<<endl;

    // Printing the length of the charter array
    cout<<"Length of the array is: "<<getLength(name)<<endl;

    // Pre-defined functions
    cout<<"Length of the array using Pre-defined function is: "<<strlen(name)<<endl;
    cout<<"Compering the two char array: "<<strcmp(name_1, name_2)<<endl;
    cout<<"Coping the 2nd array into the 1st array: "<<strcpy(name_1, name_2)<<endl;
     
}