class Solution
{
    public:
        string minRemoveToMakeValid(string s)
        {
            stack<char> st;
            string ans = "";
            int c1 = 0;
            int c2 = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(') st.push(s[i]);
                if (s[i] == ')' && !st.empty())
                {
                    if (st.top() == '(') st.pop();
                }
                else if (s[i] == ')' && st.empty()) c2++;
            }
            c1 = st.size();
            cout << c1 << c2;
            for (int i = 0; i < s.size(); i++)
            {
                if (c2)
                {
                    if (s[i] != ')') ans += s[i];
                    else c2--;
                }
                else
                {
                    ans += s[i];
                }
            }
            string ans2 = "";
            for (int i = ans.size() - 1; i >= 0; i--)
            {
                if (c1)
                {
                    if (ans[i] != '(') ans2 += ans[i];
                    else c1--;
                }
                else
                {
                    ans2 += ans[i];
                }
            }
            reverse(ans2.begin(), ans2.end());
            return ans2;
        }
};