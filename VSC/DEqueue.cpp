#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int* arr;
};
int isEmpty(struct Queue* que)
{
    if(que->rear==que->front)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Queue* que)
{
    if(que->rear==que->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueueF(struct Queue* que, int value) {
    if (isFull(que)) {
        cout << "Queue overflow" << endl;
    }
    else
    {
        if(que->front == -1 && que->rear==-1)
        {
            que->arr[que->front+1]= value;
        }
        else
        {
            que->arr[que->front]=value;
            que->front--;
        }
    }
}
void enqueueR(struct Queue* que, int value)
{
    if(isFull(que))
    {
        cout<<"Queue overflow"<<endl;
    }
    else
    {
        que->rear++;
        que->arr[que->rear]= value;
    }
}
int dequeueF(struct Queue* que)
{
    if(isEmpty(que))
    {
        cout<<"Empty"<<endl;
        return -1;
    }
    else
    {
        int i=que->arr[que->front+1];
        que->arr[que->front+1]=NULL;
        que->front++;
        return i;
    }
}
int dequeueR(struct Queue* que)
{
    if(isEmpty(que))
    {
        cout<<"Empty"<<endl;
        return -1;
    }
    else
    {
        int i= que->arr[que->rear];
        que->arr[que->rear]=NULL;
        que->rear--;
        return i;
    }
}
int first(struct Queue* que)
{
    return que->arr[que->front+1];
}
int rear(struct Queue* que)
{
    return que->arr[que->rear];
}
int main()
{
    struct Queue* que= new struct Queue;
    que->size=10;
    que->front=-1;
    que->rear=-1;
    que->arr=new int[que->size];
    enqueueR(que,69);
    enqueueF(que,96);
    cout<<first(que)<<endl;
    cout<<rear(que)<<endl;
    dequeueF(que);
    dequeueR(que);
    cout<<first(que)<<endl;
    cout<<rear(que)<<endl;
    return 0;
}