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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        int cnt = 0;
        for(auto p = pListHead;p;p=p->next)cnt++;
        if(cnt<k)
            return NULL;
        cnt-=k;
        while(cnt--)
        {
            pListHead=pListHead->next;
        }
   
        return pListHead;
    }
};