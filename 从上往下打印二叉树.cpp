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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        queue<TreeNode*> Q;
        if(root)
            Q.push(root);
        vector<int> V;
        while(!Q.empty())
        {
            TreeNode* p = Q.front();
            Q.pop();
            V.push_back(p->val);
            if(p->left)
                Q.push(p->left);
            if(p->right)
                Q.push(p->right);
        }
        return V;
    }
};