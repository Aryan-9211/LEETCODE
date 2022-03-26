class Solution
{
    public:
        int search(vector<int> &nums, int target)
        {
            int l = 0;
            int n = nums.size() - 1;
            while (l <= n)
            {
                int mid = (l + n) / 2;
                if (target < nums[mid])
                {
                    n = mid - 1;
                }
                else if (target > nums[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    return mid;
                }
            }
            return -1;
        }
};