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
     int maxdepth(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        if(root->left == NULL && root->right== NULL)
            return 1;
        
        int l=maxdepth(root->left);
        int r=maxdepth(root->right);
        return max(l,r)+1;
    }
class Solution {
public:

    int maxDepth(TreeNode* root) {
        int ans = maxdepth(root);
        return ans;
    }
};