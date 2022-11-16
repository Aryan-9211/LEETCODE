class Solution {
public:
     int recur(string& s, string& t, int n, int m, vector<vector<int>> &dp)
                {
                    if (n == 0 || m == 0) return 0;
                    if (dp[n][m] != -1) return dp[n][m];
                    if (s[n - 1] == t[m - 1])
                    {
                        return dp[n][m] = recur(s, t, n - 1, m - 1, dp) + 1;
                    }
                    else
                    {
                        return dp[n][m] = max(recur(s, t, n, m - 1, dp), recur(s, t, n - 1, m, dp));
                    }
                }

            int longestCommonSubsequence(string text1, string text2)
            {
                int n = text1.size();
                int m = text2.size();
                vector<vector < int>> dp(n + 1, vector<int> (m + 1, -1));
                return recur(text1, text2, n, m, dp);
            }
};