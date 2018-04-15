class Solution {
public:
    int getMaxDis(TreeNode* pRoot,int& ans)
    {
        if(!pRoot)
            return 0;
        int l = getMaxDis(pRoot->left,ans)+1;
        int r = getMaxDis(pRoot->right,ans)+1;
        if( abs(l-r) > 1 )
            ans = 0;
        return max(l,r);
    }

    bool IsBalanced_Solution(TreeNode* pRoot) {
        int ans = 1;
        getMaxDis(pRoot,ans);
        if(ans)return true;
        return false;
    }
};
