class Solution
{
    public:
        string getSmallestString(int n, int k)
        {
            string original = "aabcdefghijklmnopqrstuvwxyz";
            string ans;
            for (int i = 0; i < n; i++)
            {
                ans += 'a';
            }
            k -= n;
            for(int i = n - 1; i >= 0; i--){
                if(k>=25){
                    ans[i] = 'z';
                    k -= 25;
                }
                else {
                    ans[i] = original[k + 1];
                    k -= k;
                }
            }
            return ans;
        }
};