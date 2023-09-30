#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val=x;
        next = NULL;
    }
};
class Solution
{
    public:
    ListNode* cp(ListNode* head)
    {
        ListNode* temp = head;
        ListNode* newhead = new ListNode(0);
        ListNode* newtemp = newhead;
        while(temp!=NULL)
        {
            newtemp->next = new ListNode(temp->val);
            newtemp = newtemp->next;
            temp = temp->next;
        }
        return newhead->next;
    }
    ListNode* mrgList(ListNode* head1, ListNode* head2)
    {
        ListNode* bsdk= head1;
        ListNode* fuck= head2;
        ListNode* head=NULL, *tail=NULL;
        head=new ListNode(-1);
        tail=head;
        while(bsdk!=NULL && fuck!=NULL)
        {
            if(bsdk->val < fuck->val)
            {
                tail->next=bsdk;
                tail=bsdk;
                bsdk=bsdk->next;
            }
            else
            {                
                tail->next=fuck;
                tail=fuck;
                fuck=fuck->next;
            }
        }
        while(bsdk!=NULL)
        {
            tail->next=bsdk;
            tail=bsdk;
            bsdk=bsdk->next;
        }
        while(fuck!=NULL)
        {
            tail->next=fuck;
            tail=fuck;
            fuck=fuck->next;
        }
        head=head->next;
        cout<<"Result=";
        while(head!=NULL)
        {
            cout<<head->val<<" ";
            head=head->next;
        }
    }
};
int main()
{
    cout<<"Enter the number of testcases:";
    int t;
    cin>>t;
    while(t--)
    {
        // first linked list creation
        cout<<"Enter the size of first linked list:";
        int f;
        cin>>f;
        ListNode *head1 = NULL, *tail1 = NULL;
        int l;
        cin >> l;
        head1 = new ListNode(l);
        tail1 = head1;
        for (int i = 0; i < f - 1; i++)
        {
            cin >> l;
            tail1->next = new ListNode(l);
            tail1 = tail1->next;
        }
        // second linked list creation
        cout<<"Enter the size of second linked list:";
        int s;
        cin>>s;
        ListNode *head2 = NULL, *tail2 = NULL;
        int m;
        cin >> m;
        head2 = new ListNode(m);
        tail2 = head2;
        for (int i = 0; i < s - 1; i++)
        {
            cin >> m;
            tail2->next = new ListNode(m);
            tail2 = tail2->next;
        }
        Solution sol;
        sol.mrgList(head1,head2);
    }
  return 0;
}