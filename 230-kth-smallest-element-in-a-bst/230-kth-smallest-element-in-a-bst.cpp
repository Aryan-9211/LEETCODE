/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{
    int findSmallest( TreeNode* node, int& k )
    {
        if( node == nullptr )
            return -1;
        
        const int l = findSmallest( node->left, k );
        int curr = k-- == 1 ? node->val : -1;
        const int r = findSmallest( node->right, k );
        
        return max( { l, curr, r} );
    }
public:
    int kthSmallest(TreeNode* root, int k) 
    {
        return findSmallest( root, k );   
    }
};