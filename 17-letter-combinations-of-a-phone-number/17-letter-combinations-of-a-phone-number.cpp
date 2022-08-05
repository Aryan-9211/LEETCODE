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
        vector<string> res = letterCombinations(digits.substr(1));
        if(res.size() == 0){
            res.push_back("");
        }
        vector<string> ans;
        for (int i = 0; i < keypad[(digits[0] - '0') - 2].size(); i++)
        {
            for (auto j: res)
            {
                ans.push_back(keypad[(digits[0] - '0') - 2][i] + j);
            }
        }
        return ans;
    }
};