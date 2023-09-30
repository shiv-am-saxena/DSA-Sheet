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
int isBST(struct node* root)
{
    static struct node* ptr= nullptr;
    if(ptr!=nullptr)
    {
        if(!isBST(ptr->left))
        {
            return 0;
        }
        if(ptr!=nullptr && root->data <= ptr->data)
        {
            return 0;
        }
        ptr=root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}
struct node* search(struct node* root , int key)
{
    if(root==nullptr)
    {
        return nullptr;
    }
    if(root->data == key)
    {
        return root;
    }
    else if(root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right,key);
    }
}
int main()
{
    struct node* root= createNode(65);
    struct node* p1= createNode(50);
    struct node* p2= createNode(80);
    struct node* p3= createNode(10);
    struct node* p4= createNode(60);
    struct node* p5= createNode(70);
    struct node* p6= createNode(90);
    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    inorder(root);
    cout<<endl;
    cout<<isBST(root);
    cout<<endl;
    int key=90;
    struct node* n=search(root,key);
    cout<<n->data;
    return 0;
}