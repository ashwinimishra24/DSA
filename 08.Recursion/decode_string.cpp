#include <iostream>
#include <string>

using namespace std;

string decodeString(string s)
{
    // initialize an empty result string and a counter for the current position in the string
    string res = "";
    int i = 0;
    cout<<"size of s:"<<s.size()<<endl;

    // base case: if the input string is empty, return an empty string
    if (s.empty())
    {
        return "";
    }

    // find the letter inside a [] in the string
    while (i < s.size() && !isdigit(s[i]))
    {
        res += s[i];
        i++;
        cout<<"res1: "<<res<<endl;
    }
    
    // if there are no more letters inside a [], return the result
    if (i == s.size())
    {
        return res;
    }
    
    // find the number of repetitions
    int num = 0;
    while (i < s.size() && isdigit(s[i]))
    {
        num = num * 10 + (s[i] - '0');
        i++;
        cout<<"num: "<<num<<endl;
    }
    
    // find the start and end indices of the encoded string
    int start = i + 1;
    int end = start;
    int count = 1;
    while (end < s.size() && count > 0)
    {
        if (s[end] == '[')
        {
            count++;
        }
        else if (s[end] == ']')
        {
            count--;
        }
        end++;
    }
    end--;
    cout<<"start: "<<start<<endl;
    cout<<"end: "<<end<<endl;
    cout<<"count: "<<count<<endl;
    
    // decode the encoded string and repeat it
    string repeated_str = decodeString(s.substr(start, end-start));
    for (int j = 0; j < num; j++)
    {
        res += repeated_str;
        cout<<"res2: "<<res<<endl;
    }
    
    // continue decoding the rest of the string
    res += decodeString(s.substr(end+1));
    cout<<"res3: "<<res<<endl;
    
    return res;
}

int main() 
{
    string s = "3[a]2[bc]";
    cout<<decodeString(s);

    return 0;
}