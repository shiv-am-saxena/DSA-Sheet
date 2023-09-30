#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
void listTraversal(struct Node* ptr)
{
    while(ptr!=nullptr)
    {
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct Node* deleteAtFirst(struct Node* head)
{
    struct Node* ptr=head;
    head= head->next;
    free(ptr);
    return head;
}
struct Node* deleteAtIndex(struct Node* head, int index)
{
    struct Node* ptr = head;
    struct Node*q= ptr->next;
    for(int i=0; i!=index-1;i++)//    while(q->next != index)
    {
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=q->next;
    free(q);
    return head;
}
struct Node* deleteAtEnd(struct Node*head)
{
    struct Node* ptr = head;
    struct Node*p=ptr->next;
    while(p->next!= nullptr)
    {
        p=p->next;
        ptr=ptr->next;
    }
    ptr->next=nullptr;
    free(p);
    return head;
}
struct Node * deleteAtValue(struct Node* head, int data)
{
    struct Node * ptr= head;
    struct Node* q=head->next;
    while(q->data != data && q->next== nullptr)
    {
        ptr=ptr->next;
        q=q->next;
    }
    if(q->data==data)
    {
        ptr->next=q->next;
        free(q);
    }
    else
    {
        cout<<"Value not found"<<endl;
    }
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
    eight -> next= nullptr;

    cout<<"Linked List before deletion"<<endl;
    listTraversal(head);
    cout<<"Linked List after deletion"<<endl;
    head= deleteAtFirst(head);
    listTraversal(head);
    cout<<endl;
    head= deleteAtIndex(head,3);
    listTraversal(head);
    cout<<endl;
    head= deleteAtEnd(head);
    listTraversal(head);
    cout<<endl;
    head = deleteAtValue(head,7);
    listTraversal(head);
    cout<<endl;
    head= deleteAtValue(head,2);

    return 0;
}