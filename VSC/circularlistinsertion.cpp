#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node * next;
};
void listTraversal(struct Node * head)
{
    struct Node * ptr= head;
do
{
    cout<<"Element:"<<ptr->data<<endl;
    ptr=ptr->next;
}while(ptr!=head);
}
struct Node* insertAtFirst(struct Node* head, int data)
{
    struct Node* ptr=new struct Node;
    struct Node* p=head->next;
    ptr->data=data;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
struct Node* insertAtIndex(struct Node* head, int data , int index)
{
    struct Node* ptr = new struct Node;
    struct Node* p=head->next;
    ptr->data=data;
    for(int i=1;i!=index-1;i++)
    {
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node* insertAtEnd(struct Node* head, int data)
{
    struct Node* ptr = new struct Node;
    struct Node* p=head->next;
    ptr->data=data;
    while(p->next!=head)
    {
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node * insertAfterNode(struct Node* head, int data, struct Node* prevNode)
{
    struct Node * ptr= new struct Node;
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
int main()
{
    struct Node* head = new struct Node;
    struct Node* second = new struct Node;
    struct Node* third = new struct Node;
    struct Node* fourth = new struct Node;
    struct Node* fifth = new struct Node;
    struct Node* sixth = new struct Node;
    struct Node* seventh = new struct Node;
    struct Node* eight = new struct Node;

    head->data=5;
    head->next=second;

    second->data=6;
    second->next=third;

    third->data= 7;
    third->next=fourth;

    fourth -> data= 8;
    fourth -> next= fifth;

    fifth->data=9;
    fifth->next=sixth;

    sixth->data=10;
    sixth->next=seventh;

    seventh->data= 11;
    seventh->next=eight;

    eight -> data= 12;
    eight -> next= head;

    cout<<"Linked List before deletion"<<endl;
    listTraversal(head);
    cout<<"Linked List after insertion"<<endl;
    head= insertAtFirst(head,4);
    listTraversal(head);
    cout<<endl;
    head= insertAtIndex(head,13,3);
    listTraversal(head);
    cout<<endl;
    head= insertAtEnd(head,14);
    listTraversal(head);
    cout<<endl;
    head= insertAfterNode(head,15,fourth);
    listTraversal(head);
    return 0;
}