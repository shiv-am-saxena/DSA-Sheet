#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data=x;
        prev=NULL;
        next=NULL;
    }
};
// struct node *createNode(int n)
// {
//     struct node *ptr = new struct node;
//     ptr->data = n;
//     ptr->next = NULL;
//     ptr->prev = NULL;
//     return ptr;
// }
void traversal(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int isCheck(node *head)
{
    int flen = 0, blen = 0;
    while (head->next != NULL)
    {
        head = head->next;
        flen++;
    }
    while (head->prev != NULL)
    {
        head = head->prev;
        blen++;
    }
    if (flen == blen)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *insertion(struct node *head, int x)
{
    node *ptr = head->next;
    node *shiv = new node(x);
    if (head->data >= x)
    {
        shiv->next = head;
        head->prev = shiv;
        head = shiv;
        return head;
    }
    while (ptr->next != NULL)
    {
        if (ptr->data >= x)
        {
            break;
        }
        ptr = ptr->next;
    }
    if (ptr->next == NULL)
    {
        shiv->prev = ptr;
        ptr->next = shiv;
        return head;
    }
    else
    {
        node *pre = ptr->prev;
        pre->next = shiv;
        ptr->prev = shiv;
        shiv->prev = pre;
        shiv->next = ptr;
        return head;
    }
}
// int delNthfromlast(node* head, int x)
// {
//     int count=0;
//     node* ptr=head;
//     while(ptr!=NULL)
//     {
//         count++;
//         ptr=ptr->next;
//     }
//     if(count<x)
//     {
//         return -1;
//     }
//     else
//     {
//         ptr=head->next;
//         int nth=count-x;
//         node* pre= head;
//         while(nth-- >0)
//         {
//             ptr=ptr->next;
//             pre=pre->next;
//         }
//         if(nth == count-1)
//         {
//             pre->next=NULL;
//             return head->data;
//         }
//         else
//         {
//             // Node* next=ptr->next;
//             pre->next=ptr->next;
//             return ptr->data;
//         }

//     }
// }
int delNthfromlast(node *head, int x)
{
    int count = 0;
    node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    if (count < x)
    {
        return -1;
    }
    else
    {
        ptr = head->next;
        int nth = count - x;
        node *pre = head;
        while (nth-- > 0)
        {
            ptr = ptr->next;
            pre = pre->next;
        }
        if (nth == count - 1)
        {
            pre->next = NULL;
            return head->data;
        }
        else
        {
            // Node* next=ptr->next;
            pre->next = ptr->next;
            return ptr->data;
        }
    }
}
int main()
{
    int t;
    cout << "Enter the number of test cases:";
    cin >> t;
    while (t--)
    {
        node *head = NULL;
        node *tail = NULL;
        int n, x;
        cout << "Enter the size of linked list:";
        cin >> n;
        cout << "Start entering the elements one by one in sorted order:" << endl;
        cin >> x;
        head = new node(x);
        tail = head;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            node *temp = new node(x);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        // cout << endl<< "Enter the node to be inserted:";
        // cin >> x;
        // head = insertion(head, x);
        cout<<endl<<"Enter the node to be deleted:";
        cin>>x;
        cout<<delNthfromlast(head,x);
        if (isCheck(head))
        {
            cout << "The linked list is:";
            traversal(head);
            cout << endl;
            cout << endl;
        }
        else
        {
            cout << "Recheck the linking, it seems to be wrong somewhere." << endl;
        }
    }
    return 0;
}