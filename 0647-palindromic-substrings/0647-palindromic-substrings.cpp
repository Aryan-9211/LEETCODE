class Solution {
public:
    int ispali(string s, int i, int j, vector<vector<int>>& dp){
        if(i <= j) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = (s[i] == s[j]) ? ispali(s, i - 1, j + 1, dp) : 0;
    }
    
    int countSubstrings(string s) {
        int n = s.size();
        int ans = 0;
        vector<vector<int>> dp(n, vector<int>(n, -1));
        for(int i= 0; i < n; i++){
            for(int j = i; j >= 0; j--){
                ans += ispali(s, i, j, dp);
                // cout << i << " " << j << " " << ans << endl;
            }
        }
        return ans;
    } 
};