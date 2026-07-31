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
    int diameterOfBinaryTree(TreeNode* root) {
                    // if(!root)return 0;
                    int res=0;
                    dia(root,res);
                    return res;

    }


    int dia(TreeNode* root,int& x){
        if(!root)return 0;

        int l=dia(root->left,x);
        int r=dia(root->right,x);

        x=max(l+r,x);
        return 1+max(l,r);


    }



};
