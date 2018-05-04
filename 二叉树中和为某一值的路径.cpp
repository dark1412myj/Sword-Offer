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
    vector<int> V;
    void dfs(TreeNode* root,int expectNumber,vector<vector<int> >& ans)
    {
        if(!root->left&&!root->right)
        {
            if(expectNumber == root->val)
                ans.push_back(V);
            return ;
        }
        if(root->left)
        {
            V.push_back(root->left->val);
            dfs(root->left,expectNumber - root->val,ans);
            V.pop_back();
        }
        if(root->right)
        {
            V.push_back(root->right->val);
            dfs(root->right,expectNumber-root->val,ans);
            V.pop_back();
        }
    }
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int> > ans;
        if(!root)
            return ans;
        V.push_back(root->val);
        dfs(root,expectNumber,ans);
        return ans;
    }
};