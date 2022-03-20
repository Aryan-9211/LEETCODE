class Solution
{
    public:
        int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
        {
            int arr[7] = { 0 };
            for (int i = 0; i < tops.size(); i++) arr[tops[i]]++;
            for (int i = 0; i < bottoms.size(); i++) arr[bottoms[i]]++;
            int max = 0;
            int num = 0;
            for (int i = 1; i <= 6; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                    num = i;
                }
            }
            int count1 = 0;
            int x = 0;
            for (int i = 0; i < tops.size(); i++)
            {
                if (tops[i] == num) continue;
                if (bottoms[i] == num) count1++;
                else
                {
                    x = 1;
                    break;
                }
            }
            if (x) return -1;
            int count2 = 0;
            for (int i = 0; i < tops.size(); i++)
            {
                if (bottoms[i] == num) continue;
                if (tops[i] == num) count2++;
            }
            int m = min(count1, count2);
            return m;
        }
};