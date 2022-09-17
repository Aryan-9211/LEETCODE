class Solution
{
    public:
        int func(vector<int> &nums, vector<int> &dp, int i)
        {   if(i == 0) return nums[0];
            if(i == 1) return max(nums[0], nums[1]);
            if (dp[i] != -1) return dp[i];
            dp[i] = max(nums[i] + func(nums, dp, i - 2), func(nums, dp, i - 1));
            return dp[i];
        }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n , -1);
        return func(nums, dp, n - 1);
    }
};