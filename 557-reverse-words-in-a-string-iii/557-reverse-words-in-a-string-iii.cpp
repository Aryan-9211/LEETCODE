class Solution
{
    public:
        string reverseWords(string s)
        {
            vector<string> v;
            string h;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == ' ')
                {
                    reverse(h.begin(), h.end());
                    v.push_back(h);
                    h = "";
                    continue;
                }
                h += s[i];
            }
             reverse(h.begin(), h.end());
             v.push_back(h);
            h = "";
            for(int i = 0; i < v.size() - 1; i++) {
                h += v[i];
                h += " ";
            }
            h += v[v.size() - 1];
            return h;
        }
};