#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;


    // Insert in Unordered Map / Hash Map
    // First method
    pair<string, int> p = make_pair("Akash", 7);
    m.insert(p);
    // Second method
    pair<string, int> q("Neelesh", 5);
    m.insert(q);
    // Third method
    m["Mahendra"] = 9;
    m["Dev"] = 8;


    // Searching for known key
    cout<<"Akash: "<<m["Akash"]<<endl;
    cout<<"Mahendra: "<<m["Mahendra"]<<endl;
    cout<<"Neelesh: "<<m.at("Neelesh")<<endl;
    cout<<"Dev: "<<m.at("Dev")<<endl;
    // Searching for Unknown Key
    cout<<"Sourabh: "<<m["Sourabh"]<<endl;
    cout<<"Sourabh: "<<m.at("Sourabh")<<endl;


    // Size
    cout<<"Size of Unordered Map / Hash Table: "<<m.size()<<endl;


    // Checking Presence by using count function
    cout<<"Number of presence of Akash in Unordered Map / Hash Table: "<<m.count("Akash")<<endl;
    cout<<"Number of presence of Mahendra in Unordered Map / Hash Table: "<<m.count("Mahendra")<<endl;
    cout<<"Number of presence of Neelesh in Unordered Map / Hash Table: "<<m.count("Neelesh")<<endl;
    cout<<"Number of presence of Dev in Unordered Map / Hash Table: "<<m.count("Dev")<<endl;


    // Erase
    m.erase("Dev");
    cout<<"Size of Unordered Map / Hash Table: "<<m.size()<<endl;


    // Accessing Key & Values
    // First Method by using for loop
    for(auto i : m)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
    // Second Method by using iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end())
    {
        cout<<it->first<<" : "<<it->second<<endl;
        it++;
    }
}