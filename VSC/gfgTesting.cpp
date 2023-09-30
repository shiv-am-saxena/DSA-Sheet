#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node* Duplicate(Node *head)
{
    Node* pre=head;
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    for(pre=head;pre!=NULL;pre=pre->next)
    {
        Node* nxt=NULL;
        for(nxt=pre;nxt!=NULL;nxt=nxt->next)
        {
            if(pre->data==nxt->data)
            {
                pre->next=nxt->next;
            }
        }
    }
    return head;
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n;
        Node *head = NULL, *tail = NULL;
        cin >> l;
        head = new Node(l);
        tail = head;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        head= Duplicate(head);
        printList(head);
    }
    return 0;
}