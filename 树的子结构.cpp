/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    
    bool cmp(TreeNode* pRoot1,TreeNode* pRoot2)
    {
        if(pRoot1&&pRoot2&&pRoot1->val==pRoot2->val)
            return cmp(pRoot1->left,pRoot2->left)&&cmp(pRoot1->right,pRoot2->right);
        if(!pRoot2)
            return true;
        return false;
    }
    
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(!pRoot1||!pRoot2)
        {
            return false;
        }
        if(cmp(pRoot1,pRoot2))
            return true;
        return HasSubtree(pRoot1->left,pRoot2)||HasSubtree(pRoot1->right,pRoot2);
    }
};