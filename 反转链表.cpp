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
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* p=pHead;
        ListNode* last = NULL;
        ListNode* tmp=NULL;
        while(p)
        {
            tmp = p->next;
            p->next=last;
            last = p;
            p=tmp;
        }
        return last;
    }
};