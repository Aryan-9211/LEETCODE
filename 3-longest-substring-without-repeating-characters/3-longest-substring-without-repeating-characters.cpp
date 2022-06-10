class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int max = 0;
            map<char, int> m;
            int ct = 0;
            int n = s.size();
            int j = 0;
            for (int i = 0; i < n; i++)
            {
                if (m[s[i]] == 0)
                {
                    ct++;
                    m[s[i]]++;
                    if (ct > max) max = ct;
                }
                else
                {
                    for (; j < i; j++)
                    {
                        if (s[j] == s[i]) break;
                        else
                        {
                            m[s[j]] = 0;
                            ct--;
                        }
                    }
                    j = j + 1;
                }
                cout << j << " " << s[i] << " " << ct << " " << max << endl;
            }
            return max;
        }
};