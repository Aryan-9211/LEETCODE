class Solution
{
    public:
    int m, n;
        bool dfs(int i, int j, int id, vector<vector < char>> &board, string word, vector<vector<int>>& dp)
        {
            if(id == word.size()) return true;
            if(i >= m || j >= n || i < 0 || j < 0) return false;
            if(board[i][j] != word[id]) return false;
            if(dp[i][j] != 0) return false;
            
            dp[i][j] = 1;
            
            if(dfs(i + 1, j, id + 1, board, word, dp)) return true;
            if(dfs(i - 1, j, id + 1, board, word, dp)) return true;
            if(dfs(i, j + 1, id + 1, board, word, dp)) return true;
            if(dfs(i, j - 1, id + 1, board, word, dp)) return true;
            
            dp[i][j] = 0;
            
            return false;
        }

    bool exist(vector<vector < char>> &board, string word)
    {
        m = board.size();
        n = board[0].size();
        
        vector<vector<int>> dp( m + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == word[0])
                {
                    if (dfs(i, j, 0, board, word, dp)) return true;//Function to find the maximum number of meetings that can
                }
            }
        }

        return false;
    }
};