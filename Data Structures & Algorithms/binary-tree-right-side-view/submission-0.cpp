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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        rightViewDFS(root,0,v);
        return v;
    }
    void rightViewDFS(TreeNode* root, int level, vector<int>& res) {
    if (!root) return;

    if (level == res.size())     // first node from right at this level
        res.push_back(root->val);

    rightViewDFS(root->right, level + 1, res);
    rightViewDFS(root->left,  level + 1, res);
}

};
