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
    void rec(TreeNode* root, vector<vector<int>>& r, int level) {

        if(root == nullptr) return;

        if(level >= r.size())
        {
            vector<int> aux;
            r.push_back(aux);
        }

        r[level].push_back(root->val);

        rec(root->left, r, level + 1);
        rec(root->right, r, level + 1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> r;
        rec(root, r, 0);
        return r;
    }
};
