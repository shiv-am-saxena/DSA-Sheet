#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node* merge(Node* head,Node* head1)
{
    Node* ans= new Node(-1);
    Node* temp=NULL;
    while(head!=NULL && head1!=NULL)
    {
        if(head->data < head1->data)
        {
            ans->next=head;
            ans=head;
            head=head->next;
        }
        else
        {
            ans->next=head1;
            ans=head1;
            head1=head1->next;
        }
    }
    while(head!=NULL)
    {
        ans->next=head;
        ans=head;
        head=head->next; 
    }
    while(head1!=NULL)
    {
        ans->next=head1;
        ans=head1;
        head1=head1->next;
    }
    ans=ans->next;
    return ans;
}
int main()
{
    int size,low,high;
    cout<<"Enter the size of the array:";
    cin>>size;
    int* arr=new int[size];
    for(int i=0;i!=size;i++)
    {
        cout<<"Enter "<<i+1<<" element in the array:";
        cin>>arr[i];
    }
    low=0;
    high=size-1;
    return 0;
}