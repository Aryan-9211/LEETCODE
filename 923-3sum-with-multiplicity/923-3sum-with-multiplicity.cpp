class Solution
{
    public:
        int threeSumMulti(vector<int> &arr, int target)
        {
            map<long , long> m;
            int mod = 1e9 + 7;
            long sum = 0;
            for (auto i: arr) m[i]++;
            for (auto it1: m)
            {
                for (auto it2: m)
                {
                    int i = it1.first;
                    int j = it2.first;
                    int k = target - i - j;
                    if (!m[k]) continue;
                    if (i == j && j == k)
                    {
                        // if (m[k] < 3) continue;
                        sum += (m[i] *(m[i] - 1) *(m[i] - 2) / 6 ) ;
                    }
                    else if (i == j && j != k)
                    {
                        sum += m[i] *(m[i] - 1) / 2 *m[k];
                    }
                    else if (i < j && j < k)
                        sum += m[i] *m[j] *m[k];
                }
            }
            return sum % mod;
        }
};