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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot)return true;
        if(!root)return false;
        if(root->val==subRoot->val){
        if(check(root,subRoot)) return true;
        }       
return isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
 

    }
    bool check(TreeNode* r, TreeNode* s){
        if(!r and !s)return true;
        else if((!r and s) or (!s and r ))return false;
        else if(r->val!=s->val)return false;

        return check(r->left ,s->left) and check(r->right,s->right);
            return false;
    }
};
