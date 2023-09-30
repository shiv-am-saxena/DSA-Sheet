#include<bits/stdc++.h>
using namespace std;
struct Node
{
    char data;
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
struct Node* push(struct Node* head, char value)
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
char pop(struct Node* head)
{
    if(isEmpty(head))
    {
        cout<<"Stack Empty"<<endl;
        return 0;
    }
    struct Node* ptr=head;
    char i =ptr->data;
    head=ptr->next;
    free(ptr);
    return i;
}
int match(char a, char b)
{
    if(a=='(' && b==')')
    {
        return 1;
    }
    if(a=='{' && b=='}')
    {
        return 1;
    }
    if(a=='[' && b==']')
    {
        return 1;
    }
    return 0;
}
int parenthesisMatch(string exp)
{
    struct Node* head= nullptr;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            head = push(head,exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(isEmpty(head))
            {
                return 0;
            }
            else
            {
                char popped =pop(head);
                if(!match(popped,exp[i]))
                {
                    return 0;
                }
            }
        }
    }
    if(!isEmpty(head))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string exp;
    cout<<"Enter the expression: ";
    cin>>exp;
    if(parenthesisMatch(exp))
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Unbalanced"<<endl;
    }
    return 0;
}