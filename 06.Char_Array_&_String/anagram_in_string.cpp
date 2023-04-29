#include<iostream>
#include<map>
using namespace std;

/*
// Using freq array of size 26
bool CheckAnagram(string a, string b)
{
    int freq[26] = {0};

    // increment the count of string a in freq
    for(int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        int index = ch - 'a';
        freq[index]++;
    }

    // decrement the count of string b in freq
    for(int i = 0; i <b.length(); i++)
    {
        char ch = b[i];
        int index = ch - 'a';
        freq[index]--;
    }

    // check the value = 0 in freq
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            return false;
        }
    }
    return true;

}
*/

// Using map
bool CheckAnagram(string a, string b)
{
    map<char, int> m;

    // increment the count of string a in map 'm'
    for(int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        m[ch]++;
    }

    // decrement the count of string b in map 'm'
    for(int i = 0; i <b.length(); i++)
    {
        char ch = b[i];
        m[ch]--;
    }

    // check the value = 0 in map 'm'
    for(auto i:m)
    {
        if(i.second != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a = "luck";
    string b = "cukl";

    cout<<"Answer is: "<<CheckAnagram(a, b)<<endl;
}