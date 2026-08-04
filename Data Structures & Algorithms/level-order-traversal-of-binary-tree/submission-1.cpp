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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
            q.push(root);
            int i=0;
            ans.push_back({root->val});
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            while(s--){
         TreeNode* troot=q.front();q.pop();
          if(troot->left){
            v.push_back(troot->left->val);
            q.push(troot->left);
          }
          if(troot->right){
            v.push_back(troot->right->val);
            q.push(troot->right);
          }
            }
            i++;
            if(v.size())ans.push_back(v);
        }
        return ans;

    }
};
