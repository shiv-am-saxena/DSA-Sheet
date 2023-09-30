#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
int isEmpty(struct Node* head)
{
    if(head==nullptr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct Node* head)
{
    struct Node* stk=new struct Node;
    if(stk==nullptr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct Node* push(struct Node* head, int value)
{
    if(isFull(head))
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        struct Node* ptr= new struct Node;
        ptr->data=value;
        ptr->next=head;
        head=ptr;
        return head;
    }
}
struct Node* pop(struct Node* head)
{
    if(isEmpty(head))
    {
        cout<<"Stack Empty"<<endl;
    }
    else
    {
        struct Node* ptr=head;
        cout<<"popping out"<<ptr->data<<endl;
        head=ptr->next;
        free(ptr);
        return head;
    }
}
void peek(struct Node* head)
{
    cout<<"The topmost element is "<<head->data<<endl;
}
int main()
{
    struct Node* head = nullptr;
    if(isFull(head))
    {
        cout<<"Empty";
    }
    else
    {
        cout<<"not Empty";
    }
    head = pop(head);
//    peek(head);
     return 0;
}