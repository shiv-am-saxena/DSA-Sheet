 #include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *arr;
};
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
int peek(struct Stack* str, int &count)
{
    cout<<"1. Traverse Full Stack"<<endl;
    cout<<"2. Only One Element of stack"<<endl;
    cout<<"3. Re-Run this funtion"<<endl;
    int opt;
    cout<<"Enter your choice:";
    cin>>opt;
    switch(opt)
    {
        case 1:
        {
            if(isEmpty(str))
            {
                cout<<"Nothing to traverse in this stack"<<endl;
            }
            int i=0;
            while(i!=str->top)
            {
                cout<<str->arr[i]<<endl;
                i++;
            }
            break;
        }
        case 2:
        {
            int index;
            cout<<"Enter the index of the specific element:";
            cin>>index;
            if(index<=str->top)
            {
                cout << str->arr[index];
            }
            else
            {
                cout<<"Not a valid index"<<endl;
            }
            break;
        }
        case 3:
        {
            ++count;
            if(count!=3)
            {
                peek(str, count);
            }
            break;
        }
        default:
        {
            cout<<"Incorrect option"<<endl;
        }

    }
}
void push(struct Stack* str,int value)
{
    if(isFull(str))
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        str->top++;
        str->arr[str->top]=value;
    }

}
int pop(struct Stack* str)
{
    if(isEmpty(str))
    {
        cout<<"Empty"<<endl;
        return 0;
    }
    int value = str->arr[str->top];
    str->arr[str->top]=NULL;
    str->top--;

    return value;
}
int main()
{
//    struct Stack st;
    struct Stack* s= new struct Stack;
    s->size=8;
    s->top=-1;
    s->arr= new int[s->size * sizeof(int)];
    int count=0;
    push(s,69);
    push(s,96);
    push(s,22);
    push(s,12);
    pop(s);
    cout<<s->top<<endl;
    peek(s,count);
    return 0;
}