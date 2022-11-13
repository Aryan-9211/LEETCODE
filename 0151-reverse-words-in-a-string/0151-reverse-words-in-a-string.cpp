class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string t;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(t.size() != 0){v.push_back(t);}
                t = "";
                continue;
            }
            t += s[i];
        }
        if(t.size() != 0){v.push_back(t);}
        reverse(v.begin(), v.end());
        string ans;
        for(auto i : v) {
            ans += i;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};