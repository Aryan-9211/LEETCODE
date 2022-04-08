class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {
            vector<vector < int>> ans;
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++)
            {
                if(i > 0 && nums[i] == nums[i - 1]) continue;
                int target = -nums[i];
                int x = i + 1;
                int y = nums.size() - 1;
                while (x < y)
                {
                    int sum = nums[x] + nums[y];
                    if (sum < target) x++;
                    else if (sum > target) y--;
                    else
                    {
                        vector<int> help = { nums[i],
                            nums[x],
                            nums[y]
                        };
                        ans.push_back(help);
                        while (x < y && nums[x] == help[1]) x++;
                        while (x < y && nums[y] == help[2]) y--;
                    }
                }
            }
            return ans;
        }
};