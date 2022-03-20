class Solution
{
    public:
        int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
        {
            int arr[7] = { 0 };
            int n = tops.size();
            for (int i = 0; i < n; i++)
            {
                arr[tops[i]]++;
                arr[bottoms[i]]++;
            }
            int max = 0;
            for (int i = 1; i <= 6; i++)
            {
                if (arr[i] > arr[max])
                {
                    max = i;
                }
            }
            int count1 = 0;
            int x = 0;
            for (int i = 0; i < n; i++)
            {
                if (tops[i] == max)
                    continue;
                if (bottoms[i] == max)
                    count1++;
                else
                {
                    x = 1;
                    break;
                }
            }
            if (x)
                return -1;
            int count2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (bottoms[i] == max)
                    continue;
                if (tops[i] == max)
                    count2++;
            }
            int m = min(count1, count2);
            return m;
        }
};