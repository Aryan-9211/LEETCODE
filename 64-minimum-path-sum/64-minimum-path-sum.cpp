class Solution {
public:
    int cost(vector<vector<int>> &grid,int i, int j, vector<vector<int>> &dp, int n, int m){
        if(i == n - 1 && j == m - 1) return grid[n - 1][m - 1];
        if(i > n - 1 ||  j > m - 1) return INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        dp[i][j] = grid[i][j] + min(cost(grid, i + 1, j, dp, n, m), cost(grid, i, j + 1, dp, n, m));
        return dp[i][j];
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return cost(grid, 0, 0, dp, n, m);
    }
};