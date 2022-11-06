class Solution {
public:
    int recur(int i, int j, int m, int n, vector<vector<int>>& o, vector<vector<int>>& dp){
        if(i >= m || j >= n) return 0;
        if(o[i][j] == 1) return 0;
        if(i == m - 1 && j == n - 1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        dp[i][j] = recur(i + 1, j, m, n, o, dp) + recur(i, j + 1, m, n, o, dp);
        return dp[i][j];
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return recur(0, 0, m, n, obstacleGrid, dp);
    }
};