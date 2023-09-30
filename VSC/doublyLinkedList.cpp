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
    while(ptr->next!= nullptr)
    {
        cout<<"Elements:"<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<"Elements:"<<ptr->data<<endl;
    cout<<"Traversing Backward"<<endl;
    while(ptr!=nullptr)
    {
        cout<<"Element:"<<ptr->data<<endl;
        ptr=ptr->prev;
    }
}
struct Node* insertAtFirst(struct Node* head, int data)
{
    struct Node* ptr= new struct Node;
    struct Node* p= head;
    ptr->data=data;
    ptr->prev=p->prev;
    p->prev=ptr;
    ptr->next=p;
    head=ptr;
    return head;
}
struct Node* insertAtEnd(struct Node* head, int data)
{
    struct Node* ptr= new struct Node;
    struct Node* p = head;
    while(p->next!=nullptr)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    ptr->prev=p;
    return head;
}
struct Node* insertAtIndex(struct Node* head, int data, int index)
{
    struct Node* ptr = new struct Node;
    struct Node *p = head;
    struct Node *q = p->next;
    ptr->data=data;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    ptr->prev=p;
    p->next=ptr;
    ptr->next=q;
    q->prev=ptr;

    return head;
}
struct Node* insertAfterNode(struct Node* head, int data, struct Node* prevNode)
{
    struct Node* ptr = new struct Node;
    struct Node *q = prevNode->next;
    ptr->data=data;
    ptr->prev=prevNode;
    prevNode->next=ptr;
    ptr->next=q;
    q->prev=ptr;

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

    cout<<"List before Insertion"<<endl;
    listTraversal(head);
    cout<<"List after Insertion"<<endl;
    head= insertAtFirst(head, 4);
    listTraversal(head);
    cout<<endl;
    head= insertAtEnd(head,9);
    listTraversal(head);
    cout<<endl;
    head= insertAtIndex(head,12,4);
    listTraversal(head);
    cout<<endl;
    head= insertAfterNode(head,15,third);
    listTraversal(head);
    cout<<endl;
    return 0;
}