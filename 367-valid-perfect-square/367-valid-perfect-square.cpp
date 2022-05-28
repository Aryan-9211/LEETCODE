class Solution
{
    public:
        bool isPerfectSquare(int num)
        {
            long long lo = 1, hi = num, mid;
            while (hi - lo > 1)
            {
                mid = (lo + hi) / 2;
                if (mid * mid < num)
                {
                    lo = mid;
                }
                else
                {
                    hi = mid;
                }
            }
            if ((lo *lo) == num) return true;
            if ((hi * hi) == num) return true;
            return false;
        }
};