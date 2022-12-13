class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        
        int n = arr.size();
        vector<int> dp(n + 1, 0);
        
        //dp[i] stores maximum sum till ith element satisfying the condition
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            mx = max(mx, arr[i]);
            dp[i] = (mx * (i + 1));
        }
        
        for(int i = k ; i < n; i++){
            dp[i] = arr[i] + dp[i - 1];
            int maxi = arr[i];
            
            for(int j = i - 1; j > (i - k); j--){
                 maxi = max(maxi, arr[j]);
                dp[i] = max(dp[i], ((i - j + 1) * maxi) + dp[j - 1]);
            }
        }
        return dp[n - 1];
    }
};