class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j >= 0; j--){
                if(i == j){
                    dp[i][j] = 1;
                }
                else if(abs(i - j) == 1){
                    dp[i][j] = (s[i] == s[j]) ? 1 : 0;
                }
                else {
                    dp[i][j] = (s[i] == s[j]) ? dp[i - 1][j + 1] : 0;
                }
                ans += dp[i][j];
            }   
        }
        return ans;
    }
};