class Solution {
public:
    bool isSame(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) {
            return true;
        }
        if(p == NULL || q == NULL) {
            return false;
        }

        if(p->val == q->val &&
           isSame(p->left, q->left) &&
           isSame(p->right, q->right)) {
            return true;
        }
        return false;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isSame(p, q);
    }
};
