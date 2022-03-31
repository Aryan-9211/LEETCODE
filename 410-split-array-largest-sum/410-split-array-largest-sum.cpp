class Solution
{
    public:
        bool isPossible(vector<int> nums, int mid, int m)
        {
            int count = 1;
            int sum = 0;
            for (auto num: nums)
            {
                sum += num;
                if (sum > mid)
                {
                    count++;
                    sum = num;
                }
            }
            if (count <= m) return true;
            else return false;
        }

    int splitArray(vector<int> &nums, int m)
    {
        int l = 0, r = 0;
        for (auto num: nums)
        {
            l = max(l, num);
            r += num;
        }
        if(m == nums.size()) return l;
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isPossible(nums, mid, m))
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};