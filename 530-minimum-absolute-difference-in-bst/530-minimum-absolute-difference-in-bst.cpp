/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<int> inOrder;
    void inorder(TreeNode *root)
    {
        if (!root)
            return;
        inorder(root->left);
        inOrder.push_back(root->val);
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode *root)
    {
        inorder(root);
        for (auto i: inOrder)
        {
            cout << i << " ";
        }
        int n = inOrder.size();
        int minDiff = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            minDiff = min(minDiff, abs(inOrder[i] - inOrder[i - 1]));
        }

        return minDiff;
    }
};