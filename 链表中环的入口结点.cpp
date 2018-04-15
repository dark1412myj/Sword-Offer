/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution
{
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(pHead==NULL)
            return pHead;
        ListNode* nor = pHead,* db = pHead;
        int cnt = 0;
        do
        {
            nor = nor->next;
            if(!nor)
                return NULL;
            db = db->next;
            if(!db)
                return NULL;
            db = db->next;
            if(!db)
                return NULL;
        }
        while(db!=nor);

        do
        {
            nor = nor->next;
            cnt++;
        }
        while(db!=nor);

        nor = pHead;
        db = pHead;
        while(cnt--)
            nor = nor->next;
        while(db!=nor)
        {
            nor = nor->next;
            db = db->next;
        }
        return db;
    }
};
