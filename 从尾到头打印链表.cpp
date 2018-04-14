
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    void print(ListNode* head,vector<int>& V)
    {
        if(!head)
            return ;
        print(head->next,V);
        V.push_back(head->val);
    }
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> V;
        print(head,V);
        return V;
    }
};
