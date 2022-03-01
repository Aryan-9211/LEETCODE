class Solution
{
    public:
        vector<int> countBits(int n)
        {
            int count;
            vector<int> ans;
            for (int i = 0; i <= n; i++)
            {
                int temp = i;
                count = 0;
                while (temp > 0)
                {
                    temp = temp &(temp - 1);
                    count++;
                }
                ans.push_back(count);
            }
            return ans;
        }
};