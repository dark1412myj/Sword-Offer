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
class Solution
{
public:
    vector<vector<int> > Print(TreeNode* pRoot)
    {
        vector<vector<int> > V;
        if(!pRoot)
            return V;
        queue<TreeNode*> Q;
        Q.push(pRoot);
        int sz = 1;
        while(!Q.empty())
        {
            vector<int> T;
            int cnt  = 0;
            while(sz--)
            {
                TreeNode* p = Q.front();
                T.push_back(p->val);
                Q.pop();
                if(p->left)
                {
                    cnt++;
                    Q.push(p->left);
                }
                if(p->right)
                {
                    cnt++;
                    Q.push(p->right);
                }
            }
            V.push_back(T);
            sz = cnt;
        }
        return V;
    }

};
