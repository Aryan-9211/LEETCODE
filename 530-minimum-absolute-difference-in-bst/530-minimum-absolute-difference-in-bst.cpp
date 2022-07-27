/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<int> v;
    void inorder(TreeNode *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }

    int getMinimumDifference(TreeNode *root)
    {
        inorder(root);
        int n = v.size();
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(v[i] - v[j]) < ans) ans = abs(v[i] - v[j]);
            }
        }
        return ans;
    }
};