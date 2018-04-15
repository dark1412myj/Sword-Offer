class Solution
{
public:
    vector<vector<int> > Print(TreeNode* pRoot)
    {
        vector<vector<int> > V;
        if(pRoot==NULL)
            return V;
        queue<TreeNode*> Q;
        Q.push(pRoot);
        int sz[2] = {0};
        int now = 0;
        sz[now]=1;
        while(!Q.empty())
        {
            vector<int> T;
            stack<int> Sta;
            while(sz[now]--)
            {
                TreeNode* p = Q.front();
                if(!now)
                    T.push_back(p->val);
                else
                    Sta.push(p->val);
                Q.pop();
                if(p->left)
                {
                    sz[now^1]++;
                    Q.push(p->left);
                }
                if(p->right)
                {
                    sz[now^1]++;
                    Q.push(p->right);
                }
            }
            if(now)
                while(Sta.size())
                {
                    T.push_back(Sta.top());
                    Sta.pop();
                }
            V.push_back(T);
            sz[now]=0;
            now^=1;
        }
        return V;
    }

};
