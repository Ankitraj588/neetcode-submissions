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

    // TreeNode* fi_a(TreeNode* root, TreeNode* p, TreeNode* q){
    // if(!root)return root;
    //   if(root->left->val==p->val and root->right->val==q->val)return root;
    //   if(root->val==p->val and root->left->val==q->val)return root;
    //   if(root->val==p->val and root->right->val==q->val)return root;
    //   return (root->left)
    // }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      if(!root or root==p or root==q)return root;
      TreeNode* left = lowestCommonAncestor(root->left, p, q);

      TreeNode* right = lowestCommonAncestor(root->right, p, q);

      if(left and right)return root;
      if(left)return left;
      return right;
    }
};
