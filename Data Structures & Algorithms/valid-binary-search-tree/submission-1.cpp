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

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return c(root,INT_MIN,INT_MAX   );
    }
    bool c(TreeNode* root,int l,int h){
        if(!root)return true;
        if(l>=root->val or h<=root->val)return false;
        return c(root->left,l,root->val) and c(root->right,root->val,h);
        // return false;
    }
};
