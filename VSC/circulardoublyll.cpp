#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* listTraversal(struct node* head)
{
    struct node* ptr= head;
    do
    {
        cout<<"Element:"<<ptr->data<<endl;
        ptr=ptr->next;
    }
    while(ptr!=head);
}
struct node* insertAtFirst(struct node* head, int data)
{
    struct node* ptr= new struct node;
    struct node* end=head->prev;
    ptr->data=data;
    ptr->prev= end;
    ptr->next=head;
    head->prev=ptr;
    end->next=ptr;
    head=ptr;
    return head;
}
struct node* insertAtEnd(struct node* head, int data)
{
    struct node* ptr= new struct node;
    struct node* end=head->next;
    while(end->next!=head)
    {
        end=end->next;
    }
    ptr->data=data;
    ptr->prev=end;
    ptr->next=head;
    head->prev=ptr;
    end->next=ptr;
    return head;
}
struct node* insertAtIndex(struct node* head, int data, int index)
{
    struct node* ptr=new struct node;
    ptr->data=data;
    struct node* start= head->next;
    int i=0;
    while(i!=index-1)
    {
        start=start->next;
        i++;
    }
    struct node* end= start->next;
    start->next=ptr;
    ptr->prev=start;
    ptr->next=end;
    end->prev=ptr;
    return head;
}
struct node* insertAfterNode(struct node* head, int data, struct node* prevNode)
{
    struct node* ptr = new struct node;
    struct node *q = prevNode->next;
    ptr->data=data;
    ptr->prev=prevNode;
    prevNode->next=ptr;
    ptr->next=q;
    q->prev=ptr;

    return head;
}
int main() {
    struct node *head = new struct node;
    struct node *second = new struct node;
    struct node *third = new struct node;
    struct node *fourth = new struct node;

    head->data = 5;
    head->prev = fourth;
    head->next = second;

    second->data = 6;
    second->prev = head;
    second->next=third;

    third->data=7;
    third->prev=second;
    third->next=fourth;

    fourth->data= 8;
    fourth->prev=third;
    fourth->next=head;

    cout<<"List before insertion"<<endl;
    listTraversal(head);
    cout<<endl;
    cout<<"List after insertion"<<endl;
    head= insertAtFirst(head,4);
    listTraversal(head);
    cout<<endl;
    head= insertAtEnd(head,9);
    listTraversal(head);
    cout<<endl;
    head= insertAtIndex(head,3,2);
    listTraversal(head);
    cout<<endl;
    head= insertAfterNode(head,3,fourth);
    listTraversal(head);
    cout<<endl;
    return 0;
}