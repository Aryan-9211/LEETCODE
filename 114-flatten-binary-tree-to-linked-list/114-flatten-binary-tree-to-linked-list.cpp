/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void preorder(TreeNode *root, TreeNode *r)
        {
            if (r != NULL)
            {
                root->right = r;
                preorder(root->right, r->left);
                preorder(root->right, r->right);
            }
        }

    void flatten(TreeNode *root)
    {
        if (root == NULL) return;

        TreeNode *l = root->left;
        TreeNode *r = root->right;

        flatten(l);
        flatten(r);

        root->left = NULL;
        root->right = l;
        TreeNode *curr = root;
        while (curr->right != NULL) curr = curr->right;
        curr->right = r;
    }
};