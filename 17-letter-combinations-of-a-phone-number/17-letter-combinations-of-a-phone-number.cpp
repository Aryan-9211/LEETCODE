class Solution
{
    public:
         vector<string> keypad = { "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz" };

    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
        {
            vector<string> v;
            return v;
        }
        string s = keypad[(digits[0] - '0') - 2];
        string t = digits.substr(1);
        vector<string> res = letterCombinations(t);
        if(res.size() == 0){
            res.push_back("");
        }
        vector<string> ans;
        for (int i = 0; i < s.size(); i++)
        {
            for (auto j: res)
            {
                ans.push_back(s[i] + j);
            }
        }
        return ans;
    }
};