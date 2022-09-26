class Solution
{
    public:
        vector<int> goodIndices(vector<int> &nums, int k)
        {
            multiset<int> smin;
            multiset<int> smax;
            vector<int> ans;
            if (2 * k >= nums.size()) return ans;
            for (int i = 0;
                (k + i + 1) < nums.size(); i++)
            {
                smin.insert(nums[i]);
                smax.insert(nums[k + i + 1]);
                if (*smin.begin() != nums[i] || *(--smax.end()) != nums[k + i + 1])
                {
                    smin.clear();
                    smax.clear();
                    smin.insert(nums[i]);
                    smax.insert(nums[k + i + 1]);
                }
                if (smin.size() == k)
                {
                    ans.push_back(i + 1);
                    smin.erase(smin.find(*(--smin.end())));
                    smax.erase(smax.find(*smax.begin()));
                }
            }
            return ans;
        }
};