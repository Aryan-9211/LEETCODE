class Solution
{
    public:
        int maxArea(vector<int> &height)
        {
            int n = height.size();
            int max = INT_MIN;
            int i = 0;
            int j = n - 1;
            while (i < j)
            {
                int m = min(height[i], height[j]);
                int wid = j - i;
                if (max < m *wid) max = m * wid;
                if(height[i] < height[j]) i++;
                else j--;
            }
            return max;
        }
};