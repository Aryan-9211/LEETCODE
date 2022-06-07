class Solution
{
    public:
        void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
        {
            vector<int> h;
            for (int i = 0; i < m; i++)
            {
                h.push_back(nums1[i]);
            }
            for (int i = 0; i < n; i++)
            {
                h.push_back(nums2[i]);
            }
            sort(h.begin(), h.end());
            nums1 = h;
        }
};