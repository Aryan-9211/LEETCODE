//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int f(int idx, vector<int>& height, int n, int k, vector<int>& dp){
        if(idx <= 0) return 0;
        if(dp[idx] != -1) return dp[idx];
        
        int ans = INT_MAX;
        for(int i = 1; i <= k; i++){
            if(idx - i < 0) break;
            ans = min(ans, f(idx - i, height, n, k, dp) + abs(height[idx] - height[idx - i]));
        }
        return dp[idx] = ans;
        
    }
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int> dp(n, -1);
        return f(n - 1, height, n, k, dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends