class Solution {
public:
    bool check(int i , int j, int n){
        if(i >= 0 && i < n && j >= 0 && j < n) return true;
        return false; 
    }

    int f(int i, int j, vector<vector<int>>& m, vector<vector<int>>& dp, int n){
         if(i == (n - 1)) { return m[i][j]; }
         if(dp[i][j] != -1) return dp[i][j];
         int ans = INT_MAX;
         if(check(i + 1, j, n)) ans = min(ans, f(i + 1, j , m, dp, n) + m[i][j]);
         if(check(i + 1, j + 1, n)) ans = min(ans, f(i + 1, j + 1, m, dp, n) + m[i][j]);
         if(check(i + 1, j - 1, n)) ans = min(ans, f(i + 1, j - 1, m, dp, n) + m[i][j]);
         return dp[i][j] = ans;
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int ans = INT_MAX;
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        for(int i = 0; i < n; i++){
            ans = min(ans, f(0, i, matrix, dp, n));
        }
        return ans;
    }
};