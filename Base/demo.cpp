#include<iostream>
#include<vector>
using namespace std;
#include"sword.hpp"
int main()
{
    //���������
    ListNode* root=NULL;
    add(root,3);
    add(root,3);
    add(root,4);
    add(root,5);
    show(root);
    return 0;
}
