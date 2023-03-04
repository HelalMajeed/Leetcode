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
    bool sol(TreeNode* t, TreeNode* r) {
        if (t == NULL && r == NULL) return true;
        if (t == NULL && r != NULL || t != NULL && r == NULL) return false;
        if (t->val != r->val) return false;
        bool a = sol(t->right, r->left);
        bool b = sol(r->right, t->left);
        return a && b;
    }
    bool isSymmetric(TreeNode* root) {
        return sol(root->left, root->right);
    }
};
