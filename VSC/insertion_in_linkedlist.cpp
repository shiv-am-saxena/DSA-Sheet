#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
void linkedListTraversal(struct Node* ptr)
{
    while(ptr!=nullptr)
    {
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct Node* insertAtFirst(struct Node* head, int data)
{
    struct Node* ptr = new struct Node;
    ptr->next= head;
    ptr->data=data;
    head=ptr;
    return head;
}
struct Node* insertAtIndex(struct Node* head, int data, int index)
{
    struct Node* ptr = new struct Node;
    struct Node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node* insertAtEnd(struct Node*head, int data)
{
    struct Node* ptr = new struct Node;
    ptr->data=data;
    struct Node*p=head;
    while(p->next!= nullptr)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=nullptr;
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

    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data= 9;
    third->next=fourth;

    fourth -> data= 10;
    fourth -> next= nullptr;

    cout<<"Linked List before insertion"<<endl;
    linkedListTraversal(head);
    cout<<"Linked List after insertion"<<endl;
    head= insertAtFirst(head, 6);
    cout<<endl;
    linkedListTraversal(head);
    head= insertAtIndex(head,22,3);
    cout<<endl;
    linkedListTraversal(head);
    head= insertAtEnd(head,11);
    cout<<endl;
    linkedListTraversal(head);
    head = insertAfterNode(head,4,fourth);
    cout<<endl;
    linkedListTraversal(head);

    return 0;
}