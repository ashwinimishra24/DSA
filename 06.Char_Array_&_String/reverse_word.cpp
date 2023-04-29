/*
186 Leetcode Premium Problem. Reverse Words in a String II.
Given a character array s, reverse the order of the words.
A word is defined as a sequence of non-space characters.
The words in s will be separated by a sinale space.
Your code must solve the problem in-place, i.e. without allocating extra space.
*/

#include<iostream>
using namespace std;

string reverseword(string s)
{
    // Reverse the entire sentence
    reverse(s.begin(), s.end());

    // Reverse the word of sentence one by one
    int i = 0;
    for (int j = 0; j < s.length(); j++)
    {
        if (s[j] == ' ')
        {
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }
    }
    // Reverse the last word of sentence
    reverse(s.begin() + i, s.end());
    return s;
}

int main()
{
    string s = "Let's take LeetCode contest";

    cout<<"Reversed sentence by word is: "<<reverseword(s)<<endl;

    return 0;
}