//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        int moves1 = 0, moves2 = 0;
        int a1 = A, b1 = B;
        
        while(A > C){
            A = A/2;
            moves1++;
        }
        while(B > D){
            B = B/2;
            moves1++;
        }
        
        A = b1;
        B = a1;
        
        while(A > C){
            A = A/2;
            moves2++;
        }
        while(B > D){
            B = B/2;
            moves2++;
        }
        return min(moves1, moves2);
    }
    
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends
