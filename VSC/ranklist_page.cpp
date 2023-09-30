#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
void print(node* head)
{
    node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

node* removeDuplicate(node* head)
{
    node* curr=head, *prev=NULL, *ptr=head->next;
    while(ptr!=NULL)
    {
        if(curr->data==ptr->data)
        {
            curr->next=ptr->next;
            ptr=ptr->next;
        }
        else
        {
            curr=curr->next;
            ptr=ptr->next;
        }
    }
    return head;
}
int main()
{
    
  return 0;
}