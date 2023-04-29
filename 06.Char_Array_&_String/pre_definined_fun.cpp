#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str = "polestar";
    string str2 = "z";

    // Return maximum size of string
    // cout<<"Maximum size of string is:"<<str.max_size()<<endl;

    // Return length of string
    // cout<<"Length of string is: "<<str.size()<<endl;

    // Return length of string
    // cout<<"Length of string is: "<<str.length()<<endl;

    // Resize string
    // str.resize(4);
    // cout<<"Resize string: "<<str<<endl;

    // Return size of allocated storage
    // cout<<"Size of allocated storage: "<<str.capacity()<<endl;

    // Request a change in capacity
    // str.reserve(50);
    // cout<<"Request a change in capacity: "<<str.capacity()<<endl;

    // Clear string
    // str.clear();
    // cout<<"Clear string: "<<str<<endl;

    // Test if string is empty
    // cout<<"Test if string is empty: "<<str.empty()<<endl;

    // Shrink to fit
    // str.shrink_to_fit();
    // cout<<"Shrink to fit: "<<str.capacity()<<endl;

    // Compare strings
    // cout<<"Comparing strings: "<<str.compare("pole")<<endl;

    // Generate substring
    // cout<<"Generating substring: "<<str.substr(4, 4)<<endl;

    // Find non-matching character in string from the end
    //cout<<"First non-matching character in string from the end is: "<<str.find_last_not_of(str2)<<endl;

    // Find
    size_t found =  str.find(str2);
    cout<<"Finding star in polestar: "<<found<<endl;

    return 0;
}