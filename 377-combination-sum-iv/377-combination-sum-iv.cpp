class Solution
{
    public:
        int count(vector<int> &nums, int n, vector<int> &dp)
        {
            if (n == 0) return 1;
            if (n < 0) return 0;
            if (dp[n] != -1) return dp[n];
            int sum = 0;
            for (auto &i: nums)
            {
                sum += count(nums, n - i, dp);
            }
            dp[n] = sum;
            return sum;
        }
    int combinationSum4(vector<int> &nums, int target)
    {
        vector<int> dp(target + 1, -1);
        return count(nums, target, dp);
    }
};