class Solution
{
    public:
        void setZeroes(vector<vector < int>> &matrix)
        {
            int m = matrix.size();
            int n = matrix[0].size();
            set<int> r;
            set<int> c;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        r.insert(i);
                        c.insert(j);
                    }
                }
            }
            //  for (auto i: r)
            // {
            //    cout << "r" << " " <<  i << endl;
            // }
            //  for (auto i: c)
            // {
            //    cout << "c" << " " <<  i << endl;
            // }
            for (auto i: r)
            {
                for (int j = 0; j < n; j++)
                {
                    matrix[i][j] = 0;
                }
            }
            for (int j = 0; j < m; j++)
            {
                for (auto i: c)
                {
                    matrix[j][i] = 0;
                }
            }
        }
};