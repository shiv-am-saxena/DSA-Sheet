#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};
void listTraversal(struct Node* head)
{
    struct Node * ptr= head;
    cout<<"Traversing Forward"<<endl;
    while(ptr!= nullptr)
    {
        cout<<"Elements:"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct Node* deleteFirst(struct Node* head)
{
    struct Node* ptr= head;
    head=ptr->next;
    head->prev=nullptr;
    free(ptr);
    return head;
}
struct Node* deleteEnd(struct Node* head)
{
    struct Node* ptr= head;
    while(ptr->next!=nullptr)
    {
        ptr=ptr->next;
    }
    struct Node* p=ptr->prev;
    p->next=nullptr;
    free(ptr);
    return head;
}
struct Node* deleteAtIndex(struct Node* head, int index)
{
    struct Node* p = head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    struct Node* q = p->next;
    struct Node* r = p->prev;
    q->prev=p->prev;
    r->next=p->next;
    free(p);
    return head;
}
struct Node* deleteAtValue(struct Node* head, int value)
{
    struct Node* ptr= head;
    while(ptr->data!=value && ptr->next!=nullptr)
    {
        ptr=ptr->next;
    }
    if( ptr->data == value)
    {
        struct Node* q= ptr->next;
        struct Node* r= ptr->prev;
        q->prev=ptr->prev;
        r->next=ptr->next;
        free(ptr);
    }
    else
    {
        cout<<"element not found";
    }
    return head;
}
int main()
{
    struct Node* head= new struct Node;
    struct Node* second= new struct Node;
    struct Node* third= new struct Node;
    struct Node* fourth= new struct Node;


    head->data=5;
    head->prev= nullptr;
    head->next=second;

    second->data=6;
    second->prev= head;
    second->next=third;

    third->data=7;
    third->prev= second;
    third->next=fourth;

    fourth->data=8;
    fourth->prev= third;
    fourth->next= nullptr;

    cout<<"List before Deletion"<<endl;
    listTraversal(head);
    cout<<endl;
    cout<<"List after Deletion"<<endl;
    head= deleteFirst(head);
    listTraversal(head);
    cout<<endl;
    head= deleteEnd(head);
    listTraversal(head);
    cout<<endl;
    head= deleteAtIndex(head,3);
    listTraversal(head);
    cout<<endl;
    head= deleteAtValue(head,85);
    listTraversal(head);
    cout<<endl;
    return 0;
}