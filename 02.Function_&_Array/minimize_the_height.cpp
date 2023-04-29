// Minimize the Heights II -- GFG

//{ Driver Code Starts
// Initial template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k)
    {
        // Sort the array
        sort(arr, arr + n);
        
        int mini = arr[0];
        int maxi = arr[n-1];
        int ans = maxi - mini;
        
        for(int i = 1; i <= n; i++)
        {
            if (arr[i] - k < 0)
                continue;
            
            mini = min(arr[0] + k, arr[i] - k);
            maxi = max(arr[n-1] - k, arr[i-1] + k);
            ans = min(maxi - mini, ans);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cout<<"Enter any value: ";
    cin >> t;
    while (t--) {
        int n, k;
        cout<<"Enter the value of K: ";
        cin >> k;
        cout<<"Enter the value of size of array: ";
        cin >> n;
        int arr[n];
        cout<<"Enter the elements of array: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout<<"The minimum difference is: "<<ans << "\n";
    }
    return 0;
}
// } Driver Code Ends