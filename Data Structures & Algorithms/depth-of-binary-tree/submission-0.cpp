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
private:
    int rec(TreeNode* root, int depth) {
        if(root == nullptr) return depth;
        return max(rec(root->left, depth + 1), rec(root->right, depth + 1));
    }
public:
    int maxDepth(TreeNode* root) {
        return rec(root, 0);
    }
};
