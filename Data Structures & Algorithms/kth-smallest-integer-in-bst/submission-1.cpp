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
int a=0;
                vector<int >in;
    int kthSmallest(TreeNode* root, int k) {
                dfs(root);
                return in[k-1];

    }
    void dfs(TreeNode* r){
        if(!r)return;
        dfs(r->left);
        in.push_back(r->val);
        dfs(r->right);
    }
};
