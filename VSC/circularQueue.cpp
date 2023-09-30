#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int size;
    int fInd;
    int bInd;
    int* arr;
};
int isEmpty(struct Queue* que)
{
    if(que->bInd==que->fInd)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Queue* que)
{
    if(((que->bInd+1)%que->size)==que->fInd)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct Queue* que, int value)
{
    if(isFull(que))
    {
        cout<<"Queue Overflow"<<endl;
    }
    else
    {
        que->bInd=((que->bInd+1)%que->size);
        que->arr[que->bInd]=value;
    }
}
int dequeue(struct Queue* que)
{
    if(isEmpty(que))
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        que->fInd=((que->fInd+1)%que->size);
        int i= que->arr[que->bInd];
        return i;
    }
}
int fElement(struct Queue* que)
{
    return que->arr[que->fInd+1];
}
int bElement(struct Queue* que)
{
    return que->arr[que->bInd];
}
int main()
{
    struct Queue* q= new struct Queue;
    q->size= 10;
    q->fInd=-1;
    q->bInd=-1;
    q->arr= new int[q->size * sizeof(int)];
    dequeue(q);
    enqueue(q,69);
    enqueue(q,96);
    cout<<fElement(q)<<endl;
    cout<<bElement(q)<<endl;
    return 0;
}