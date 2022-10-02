int Mod = 1e9 + 7;
class Solution {
public:
    
    int fxn(int n, int k, int t, vector<vector<int>> &dp){
        if(n == 0 && t == 0) return 1;
        if(n < 0 || t < 0) return 0;
        if(dp[n][t] != -1) return dp[n][t];
        int ans = 0;
        for(int i = 1; i <= k; i++){
            ans += fxn(n - 1, k, t - i, dp);
            ans %= Mod;
        }
        return dp[n][t] = ans;
    }
    int numRollsToTarget(int n, int k, int t) {
        vector<vector<int>> dp(n + 1, vector<int>(t + 1, -1));
        return fxn(n, k, t, dp);
    }
};