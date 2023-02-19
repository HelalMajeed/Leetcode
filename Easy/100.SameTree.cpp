class Solution {
public:
    bool ans = true;
    void pre_order(TreeNode* p, TreeNode* q) {
        if ((p == NULL && q != NULL) || (q == NULL && p != NULL))
            ans = false;
        if (p == NULL || q == NULL)
            return;
        pre_order(p->left, q->left);
        if ((p->val != q->val) || (p == NULL && q != NULL) || (q == NULL && p != NULL))
            ans = false;
        pre_order(p->right, q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        pre_order(p, q);
        return ans;
    }
};
