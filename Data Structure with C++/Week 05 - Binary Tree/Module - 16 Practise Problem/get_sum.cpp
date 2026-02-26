// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */

 void getsum(TreeNode * root,int &sum)
 {
    if(root == NULL)
        return;
    if(root->left == NULL && root->right == NULL)
        return;
    
    if(root->left != NULL)
    {
        if(root->left->left== NULL && root->left->right==NULL)
            sum+=root->left->val;
    }
    getsum(root->left,sum);
    getsum(root->right,sum);
   
 }
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        getsum(root,sum);
        return sum;
    }
};



//__________________pias vai er code_____________  


class Solution {
public:
    int sum = 0;
    void getsum(TreeNode* root) {
        if (root == NULL)
            return;
        if (root->left != NULL) {
            if (root->left->left == NULL && root->left->right == NULL)
                sum += root->left->val;
        }
        getsum(root->left);
        getsum(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {

        getsum(root);
        return sum;
    }
};