class Solution {
public:
    int recur(string s, int i , int j, vector<vector<int>>& dp){
        if(i >= j) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = (s[i] == s[j]) ? recur(s, i + 1, j - 1, dp) : 0;
    }
    int countSubstrings(string s) {
        int ans = 0;
        int n = s.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                ans += recur(s, i, j, dp);
            }
        }
        return ans;
    }
};