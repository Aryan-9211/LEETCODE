class Solution
{
    public:
        vector<vector < int>> shiftGrid(vector<vector < int>> &grid, int k)
        {
            int m = grid.size();
            int n = grid[0].size();
            cout << m << " " << n << endl;
            vector<vector < int>> v(m);
            for (int i = 0; i < m; i++)
            {
                v[i].resize(n);
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    int y = (j + k);
                    int x = i + (y / n);
                    y = y % n;
                    x = x % m;
                    v[x][y] = grid[i][j];
                }
            }

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << v[i][j] << " ";
                }
            }
            return v;
        }
};