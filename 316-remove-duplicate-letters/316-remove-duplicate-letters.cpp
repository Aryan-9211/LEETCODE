class Solution
{
    public:
        string removeDuplicateLetters(string s)
        {

            stack<char> st;
            int fre[26] = { 0 };
            int mark[26] = { 0 };
            int n = s.size();
            for (int i = 0; i < n; i++)
            {
                fre[s[i] - 'a']++;
            }

            for (int i = 0; i < n; i++)
            {
                fre[s[i] - 'a']--;
                if (mark[s[i] - 'a'])
                    continue;
                while ((st.size() > 0) && (st.top() > s[i]) && (fre[st.top() - 'a'] > 0))
                {
                    mark[st.top() - 'a'] = 0;
                    st.pop();
                }
                st.push(s[i]);
                mark[s[i] - 'a'] = 1;
            }
            string ans;
            while (!st.empty())
            {
                ans += st.top();
                st.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
};