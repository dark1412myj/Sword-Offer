/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(!pHead)
            return NULL;
        RandomListNode *p = pHead;
        for(;p;p=p->next)
        {
            RandomListNode* w = new RandomListNode(p->label);
            w->next=p->next;
            p->next=w;
            p = w;
        }
        RandomListNode* w=NULL;
        p=pHead;
        for(;p;p=p->next)
        {
            w=p->next;
            if(p->random==NULL)
                w->random=NULL;
            else
                w->random=p->random->next;
            p = w;
        }
        RandomListNode* ansroot=pHead->next,*tmp = ansroot;
        pHead->next=tmp->next;
        p=tmp->next;
        for(;p;p=p->next)
        {
            w=p->next;
            tmp->next=w;
            tmp = w;
            p->next=w->next;
        }
        return ansroot;
    }
};