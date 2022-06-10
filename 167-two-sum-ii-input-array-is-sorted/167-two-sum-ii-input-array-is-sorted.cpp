class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int t)
        {
            int i = 0;
            int j = nums.size() - 1;
            while (i < j)
            {
                if (nums[i] + nums[j] < t) i++;
                else if (nums[i] + nums[j] > t) j--;
                else
                {
                   return {i + 1, j + 1};
                    break;
                }
            }
            return {0, 0};
        }
};