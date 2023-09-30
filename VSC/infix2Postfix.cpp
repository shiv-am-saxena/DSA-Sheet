#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int size;
    int top;
    char *arr;
};
char stackTop(struct Stack* sp)
{
    return sp->arr[sp->top];
}
int isEmpty(struct Stack* ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Stack* ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct Stack* sp,int value)
{
    if(isFull(sp))
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        sp->top++;
        sp->arr[sp->top]=value;
    }

}
char pop(struct Stack* sp)
{
    if(isEmpty(sp))
    {
        cout<<"Empty"<<endl;
        return 0;
    }
    int value = sp->arr[sp->top];
    sp->arr[sp->top]=NULL;
    sp->top--;

    return value;
}
int precedence(char ch)
{
    if(ch=='*' || ch == '/')
    {
        return 3;
    }
    else if(ch=='-' || ch == '+')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int isOperator(char a)
{
    if(a=='+' || a=='-' || a=='/' || a=='*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char * infixToPostfix(char* infix)
{
    struct Stack* sp= new struct Stack;
    sp->size=100;
    sp->top=-1;
    sp->arr= (char*) malloc(sp->size * sizeof(char));
    char *postfix =(char*) malloc (strlen(infix)+1 * sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0')
    {
        if(!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if(precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char* infix = "a+b/c*d-e";
    cout<<"postfix  "<<infixToPostfix(infix);
    return 0;
}
