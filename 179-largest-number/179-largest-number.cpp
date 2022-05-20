class Solution
{
    public:
        bool check(string &s1, string &s2)
        {
            return (s2 + s1) > (s1 + s2);
        }

    string largestNumber(vector<int> &nums)
    {
        int n = nums.size();
        vector<string> vs(n);
        for (int i = 0; i < n; i++)
        {
            string help = to_string(nums[i]);
            vs[i] = help;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (check(vs[i], vs[j]))
                {
                    swap(vs[i], vs[j]);
                }
            }
        }
        string ans = "";
        for (auto i: vs) ans += i;
        if (ans[0] == '0') return "0";
        return ans;
    }
};