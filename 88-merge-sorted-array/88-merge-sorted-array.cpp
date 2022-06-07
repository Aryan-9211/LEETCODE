class Solution
{
    public:
        void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
        {
            int i = 0, j = 0, k = 0;
            vector<int> h(m + n);
            while (k < (m + n))
            {
                if ((i < m) && (j < n) && (nums1[i] < nums2[j]))
                {
                    h[k] = nums1[i];
                    k++;
                    i++;
                }
                else if ((i < m) && (j < n) && (nums1[i] > nums2[j]))
                {
                    h[k] = nums2[j];
                    k++;
                    j++;
                }
                else if ((i < m) && (j < n) && (nums1[i] == nums2[j]))
                {
                    h[k] = nums1[i];
                    k++;
                    i++;
                    h[k] = nums2[j];
                    k++;
                    j++;
                }
                else if ((i < m) && (j == n))
                {
                    while (i < m)
                    {
                        h[k] = nums1[i];
                        k++;
                        i++;
                    }
                }
                else if ((i == m) && (j < n))
                {
                    while (j < n)
                    {
                        h[k] = nums2[j];
                        k++;
                        j++;
                    }
                }
            }
            nums1 = h;
        }
};