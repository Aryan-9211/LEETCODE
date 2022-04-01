// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int rooms(int N, int M){
        // code here
        int x = __gcd(N, M);
        int ans = N / x + M / x;
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        
        Solution ob;
        cout<<ob.rooms(N, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends