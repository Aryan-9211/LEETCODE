class Solution
{
    public:
        string removeDuplicateLetters(string s)
        {
            stack<char> sta;
            map<char, int> m;
            set<char> st;
            for (int i = 0; i < s.size(); i++)
            {
                m[s[i]]++;
            }

            for (int i = 0; i < s.size(); i++)
            {
                m[s[i]]--;
                if (st.find(s[i]) != st.end()) continue;
                while ((sta.size() > 0) && (sta.top() > s[i]) && (m[sta.top()] > 0))
                {
                    st.erase(sta.top());
                    sta.pop();
                }
                sta.push(s[i]);
                st.insert(s[i]);
            }
            
            string ans;
            while(sta.size() > 0){
                ans += sta.top();
                sta.pop();
            }
            
            reverse(ans.begin(), ans.end());
            return ans;
        }
};