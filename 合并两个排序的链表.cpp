/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* root=NULL;
        if(!pHead1)
            return pHead2;
        if(!pHead2)
            return pHead1;
        if(pHead1->val < pHead2->val)
        {
            root = pHead1;
            pHead1=pHead1->next;
        }else
        {
            root = pHead2;
            pHead2=pHead2->next;
        }
        ListNode* now=root;
        while(pHead1&&pHead2)
        {
            if(pHead1->val < pHead2->val)
            {
                now->next=pHead1;
                pHead1=pHead1->next;
            }else
            {
                now->next=pHead2;
                pHead2=pHead2->next;
            }
            now = now->next;
        }
        if(pHead1)
            now->next=pHead1;
        else
            now->next=pHead2;
        return root;
    }
};