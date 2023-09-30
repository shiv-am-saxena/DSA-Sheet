#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

int main()
{
    Node* head=new Node(10);
    head->next=new Node(9);
    head->next->next=new Node(8);
    head->next->next->next=new Node(7);
    head->next->next->next->next=new Node(6);
    
    Node* temp=head->next;
    Node* last=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        last=last->next;
    }

    temp->next=head;
    head=temp;
    last->next=NULL;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
  return 0;
}