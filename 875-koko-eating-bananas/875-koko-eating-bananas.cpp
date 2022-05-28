class Solution
{
    public:

        bool check(vector<int> &v, int &h, int &x)
        {
            int count = 0;
            for (int i = 0; i < v.size(); i++)
            {
                count += v[i] / x;
                if (v[i] % x != 0) count++;
            }
            return count <= h;
        }

    int minEatingSpeed(vector<int> &v, int h)
    {
        int lo = 1, hi = 1e9, mid;
        while (hi - lo >= 1)
        {
            mid = lo + (hi - lo) / 2;
            if (check(v, h, mid))
            {
                hi = mid;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return hi;
    }
};