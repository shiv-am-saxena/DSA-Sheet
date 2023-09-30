#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data)
{
    struct node* ptr= new struct node;
    ptr->data=data;
    ptr->left=nullptr;
    ptr->right=nullptr;
    return ptr;
}
void preorder(struct node* root)
{
    struct node* ptr=root;
    if(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void postorder(struct node* root)
{
    struct node* ptr=root;
    if(ptr!=nullptr)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<" ";
    }
}
void inorder(struct node* root)
{
    struct node* ptr=root;
    if(ptr!=nullptr)
    {
        inorder(ptr->left);
        cout<<ptr->data<<" ";
        inorder(ptr->right);
    }
}
int main()
{
    struct node* root= createNode(7);
    struct node* p1= createNode(8);
    struct node* p2= createNode(9);
    struct node* p3= createNode(10);
    struct node* p4= createNode(2);
    struct node* p5= createNode(1);
    struct node* p6= createNode(11);
    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    return 0;
}