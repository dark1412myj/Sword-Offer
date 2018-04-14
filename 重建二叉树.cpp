/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructTree(int* preS,int* preE,int* vinS,int* vinE)
    {
        if(preS==preE)
            return NULL;

        TreeNode* now = new TreeNode(preS[0]);
        int* it;
        for(it = vinS;it<vinE&&*it!=*preS;++it);
        if(it==vinE)
            throw "error";
        int lcnt = it - vinS;

        now->left = constructTree(preS+1,preS+1+lcnt,vinS,vinS+lcnt);
        now->right = constructTree(preS+1+lcnt,preE,vinS+lcnt+1,vinE);
        return now;
    }

    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin)
    {
        return constructTree(&pre[0],&pre[pre.size()],&vin[0],&vin[0]+vin.size());
    }

};
