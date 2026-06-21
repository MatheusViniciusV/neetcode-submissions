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
    bool rec(TreeNode* r, int min, int max) {
        if(r == nullptr) return true;
        if(r->val <= min or r->val >= max) return false;
        return rec(r->left, min, r->val) and rec(r->right, r->val, max);
    }
    bool isValidBST(TreeNode* root) {
        return rec(root, -1001, 1001);
    }
};
