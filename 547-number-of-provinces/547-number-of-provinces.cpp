class Solution
{
    public:
        void dfs(vector<int> g[], vector<int> &check, int vertex)
        {
            check[vertex] = 1;
            for (auto child: g[vertex])
            {
                if (check[child]) continue;
                dfs(g, check, child);
            }
        }
    int findCircleNum(vector<vector < int>> &isConnected)
    {
        int n = isConnected.size();
        vector<int> g[n + 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (isConnected[i][j] == 1 && i != j){g[i].push_back(j);}
            }
        }
        vector<int> check(n + 1, 0);
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (check[i]) continue;
            dfs(g, check, i);
            ct++;
        }
        return ct;
    }
};