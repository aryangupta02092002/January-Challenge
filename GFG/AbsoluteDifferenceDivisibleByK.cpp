//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        int a[n];
        map<int, int> m;
        for(int i=0; i<n; i++){
            a[i] = (arr[i] + k) % k;
            m[a[i]]++;
        }
        
        long long int ans = 0;
        for(auto i=m.begin(); i!=m.end(); i++){
            int tmp = i->second;
            ans = ans + (tmp*(tmp-1)/2);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends
