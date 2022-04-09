class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
            sort(nums.begin(), nums.end());
            vector<pair<int, int>> vp;
            int count = 1;
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] == nums[i - 1]) count++;
                else
                {
                    vp.push_back({ count,
                        nums[i - 1] });
                    count = 1;
                }
            }
            vp.push_back({ count,
                nums[nums.size() - 1] });
            sort(vp.rbegin(), vp.rend());
            vector<int> ans;
            for (int i = 0; i < k; i++)
            {
                cout << vp[i].first << " " << vp[i].second << endl;
                ans.push_back(vp[i].second);
            }
            return ans;
        }
};