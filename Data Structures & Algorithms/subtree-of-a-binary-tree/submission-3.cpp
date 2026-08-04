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

bool isq(TreeNode* a, TreeNode* b){
    if(!a and !b)return true;

    if(!a or !b)return false;
    if(a->val!=b->val)return false;
    return isq(a->left,b->left) and isq(a->right ,b->right);
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // if(!root and !subRoot) return true;
        if(!root) return false;
        if(isq(root,subRoot))return true;
        return isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
    }
};
