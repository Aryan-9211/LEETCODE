class Solution
{
    public:
        void solve(vector<vector < int>> &v, int idx, vector< int > &nums, vector< int > &subset)
        {
            if (idx == nums.size())
            {
                v.push_back(subset);
                return;
            }
            solve(v, idx + 1, nums, subset);
            subset.push_back(nums[idx]);
            solve(v, idx + 1, nums, subset);
            subset.pop_back();
        }

    vector<vector < int>> subsets(vector<int> &nums)
    {
        vector<vector < int>> ans;
        vector<int> subset;
        solve(ans, 0, nums, subset);
        return ans;
    }
};