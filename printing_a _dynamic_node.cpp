#include<bits/stdc++.h>
using namespace std;
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
int main()
{
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=NULL;
    node* temp=head;
    // while(head!=NULL)
    // {
    //     cout<<head->val<<endl;   moving head is a crime.
    //     head=head->next;
    // }
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    return 0;
}
