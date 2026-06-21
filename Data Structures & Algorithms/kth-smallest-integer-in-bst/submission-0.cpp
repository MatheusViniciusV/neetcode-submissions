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
    void rec(vector<int>& aux, TreeNode* r) {
        if(r == nullptr) return;
        aux.push_back(r->val);
        rec(aux,r->left); rec(aux,r->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> aux;
        rec(aux, root);
        sort(aux.begin(), aux.end());
        return aux[k-1];
    }
};
