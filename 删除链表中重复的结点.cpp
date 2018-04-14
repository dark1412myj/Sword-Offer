#include<iostream>
using namespace std;
#include"base/sword.hpp"

class Solution
{
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead==NULL||pHead->next==NULL)
            return pHead;
        ListNode* pre = NULL;
        ListNode* now = pHead;
        while(now)
        {
            if(!now->next)break;
            if(now->next&&now->next->val!=now->val)
            {
                pre = now;
                now = now->next;
            }
            else// if(now->next)
            {
                int val = now->val;
                while( now && now->val==val)
                {
                    ListNode* nxt = now->next;
                    delete now;
                    now=nxt;
                }
                if( pre==NULL )
                {
                    pHead = now;
                }
                else
                {
                    pre->next = now;
                }
            }
        }
        return pHead;
    }
};

int main()
{
    Solution solution;
    ListNode* root=NULL;
    add(root,3);
    add(root,3);
    add(root,4);
    add(root,5);
    root = solution.deleteDuplication(root);
    show(root);
    return 0;
}

