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
    void Convert_List(TreeNode* pTree,TreeNode* &pLast)
    {
        if( pTree->left )
            Convert_List( pTree->left , pLast );
        pTree->left=pLast;
        
        if(pLast)
        {
            pLast->right=pTree;
        }
        pLast = pTree;
        if(pTree->right)
            Convert_List( pTree->right , pLast );
    }
    
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(!pRootOfTree)
            return NULL;
        TreeNode* pLast = NULL;
        Convert_List( pRootOfTree , pLast );
        while( pLast->left )
            pLast=pLast->left;
        return pLast;
    }
};