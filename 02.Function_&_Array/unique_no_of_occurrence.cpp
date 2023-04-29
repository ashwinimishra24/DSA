#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

bool checkUniqueFrequency(int arr[], int n)
{
	unordered_map<int, int> freq;

	// Store the frequency of each element from the array into the unordered_map
	for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
	}
    for(auto i : freq)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }

	unordered_set<int> uniqueFreq;

	// Check whether frequency of any two or more elements are same or not. If yes, return false
	for (auto i : freq)
    {
		if(uniqueFreq.count(i.second) > 0)
			return false;
		else
			uniqueFreq.insert(i.second);
	}

	// Return true if each frequency is unique
	return true;
}


int main()
{
	int arr[] = {1, 2, 2, 1, 1, 3};
	int n = sizeof arr / sizeof arr[0];

	bool res = checkUniqueFrequency(arr, n);

	// Print the result
	if(res)
		cout << "Yes, unique number of occurences" << endl;
	else
		cout << "No, duplicate number of occurences" << endl;
	return 0;
}