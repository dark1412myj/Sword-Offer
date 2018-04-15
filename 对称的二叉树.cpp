/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:

    bool isSame(TreeNode* left,TreeNode* right)
    {
        if(!left&&!right)
            return true;
        if(left&&!right)
            return false;
        if(right&&!left)
            return false;
        if(left->val!=right->val)
            return false;
        if(isSame(left->left,right->right)&&isSame(left->right,right->left))
            return true;
        return false;
    }

    bool isSymmetrical(TreeNode* pRoot)
    {
        if(!pRoot)
            return true;
        if(isSame(pRoot->left,pRoot->right))
            return true;
        return false;
    }

};
