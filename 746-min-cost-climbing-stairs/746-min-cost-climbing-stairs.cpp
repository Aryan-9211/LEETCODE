class Solution {
public:
    int cal(vector<int>& cost, int n){
        vector<int> dp(n + 1, 0);
        dp[n] = cost[n - 1]; dp[n - 1] = cost[n - 2];
        for(int i = n - 2; i>=1; i--){
            dp[i] = min(dp[i + 1], dp[i + 2]) + cost[i - 1];
        }
        return min(dp[1], dp[2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return cal(cost, cost.size());
    }
};