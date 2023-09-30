#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct que
{
    struct node* first= NULL;
    struct node* rear = NULL;
};
int isEmpty(struct que * q)
{
    if(q->first == NULL && q->rear == NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(struct que* q)
{
    struct node* n= new struct node;
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue( struct que* q, int value)
{
    if(isFull(q))
    {
        cout<<"Queue Overflow"<<endl;
    }
    else
    {
        struct node* ptr = new struct node;
        ptr->data= value;
        ptr->next=NULL;
        if(isEmpty(q))
        {
            q->first=q->rear=ptr;
        }
        else
        {
            q->rear->next=ptr;
            q->rear=ptr;
        }
    }
}
int dequeue(struct que* q)
{
    if(isEmpty(q))
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        int i= -1;
        struct node* pop= q->first;
        i= q->first->data;
        q->first= pop->next;
        free(pop);
        return i;
    }
}
int first(struct que* q)
{
    return q->first->data;
}
int rear(struct que* q)
{
    return q->rear->data;
}
int main()
{
//    struct que q1;
    struct que* q=new struct que;
    enqueue(q,69);
    enqueue(q,96);
    enqueue(q,22);
    cout<<first(q)<<endl;
    cout<<rear(q)<<endl;
    dequeue(q);
    cout<<dequeue(q);
    return 0;
}