class Solution
{
    public:
        int numSquares(int n)
        {
            int level = 0;
            queue<int> q;
            q.push(0);
            while (!q.empty())
            {
                level++;
                int s = q.size();
                for (int j = 0; j < s; j++)
                {
                    int i = 1;
                    int x = q.front();
                    q.pop();
                    while ((x) + (i * i) <= n)
                    {
                        if (x + (i *i) == n) return level;
                        else q.push(x + (i *i));
                        i++;
                    }
                }
            }
            return level;
        }
};