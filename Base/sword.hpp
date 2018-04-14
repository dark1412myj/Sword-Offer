#include<iostream>
#include<vector>
using namespace std;
#define USE_LIST  // 使用单链表结构

template<typename T>
void show(vector<T> V)
{
    cout<<"{";
    for(int i=0;i<V.size();++i)
    {
        cout<<V[i];
        if(i<V.size()-1)
            cout<<",";
    }
    cout<<"}"<<endl;
}

#ifdef USE_LIST
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

void add(ListNode* &l,int val)
{
    if(!l)
    {
        l=new ListNode(val);
    }else
    {
        ListNode* p = l;
        while(p->next)
            p=p->next;
        p->next=new ListNode(val);
    }
}

void show(ListNode* l)
{
    cout<<"{";
    while(l)
    {
        cout<<l->val;
        if(l->next)
            cout<<",";
        l=l->next;
    }
    cout<<"}"<<endl;
}
#endif
