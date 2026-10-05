#include<bits/stdc++.h>
using namespace std;
int main()
{
    class node
    {
        public:
        int val;
        node* next;
        node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
    };
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    return 0;
}