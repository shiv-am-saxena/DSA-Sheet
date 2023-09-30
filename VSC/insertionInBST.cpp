#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int key)
{
    struct node *ptr = new struct node;
    ptr->data = key;
    ptr->left = nullptr;
    ptr->right = nullptr;
    return ptr;
}
void insertion(struct node *root, int key)
{
    struct node *prev = nullptr;
    struct node *ptr = createnode(key);
    while (root != nullptr)
    {
        prev = root;
        if (root->data == key)
        {
            cout << "The key is already present in the BST, it can't be inserted" << endl;
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    if (key < prev->data)
    {
        prev->left = ptr;
    }
    else
    {
        prev->right = ptr;
    }
}
void inOrder(struct node *root)
{
    struct node *ptr = root;
    if (ptr != nullptr)
    {
        inOrder(ptr->left);
        cout << ptr->data;
        inOrder(ptr->right);
    }
}
struct node *iter(struct node *root, int key)
{
    while (root != nullptr)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return nullptr;
}
void deletion(struct node *root, int key)
{
    struct node *ptr = root;
    if (ptr == nullptr)
    {
        cout << "The key is not present in the BST, it can't be deleted" << endl;
        return;
    }
    struct node *prev = nullptr;
    while (root != nullptr)
    {
        if (root->data == key)
        {
            break;
        }
        else if (key < root->data)
        {
            prev = root;
            root = root->left;
        }
        else
        {
            prev = root;
            root = root->right;
        }
    }
    if (root->left == nullptr && root->right == nullptr)
    {
        if (prev->left == root)
        {
            prev->left = nullptr;
        }
        else
        {
            prev->right = nullptr;
        }
        delete root;
    }
    else if (root->left == nullptr || root->right == nullptr)
    {
        if (root->left == nullptr)
        {
            if (prev->left == root)
            {
                prev->left = root->right;
            }
            else
            {
                prev->right = root->right;
            }
        }
        else
        {
            if (prev->left == root)
            {
                prev->left = root->left;
            }
            else
            {
                prev->right = root->left;
            }
        }
        delete root;
    }
    else
    {
        struct node *temp = root->right;
        struct node *prev = nullptr;
        while (temp->left != nullptr)
        {
            prev = temp;
            temp = temp->left;
        }
        root->data = temp->data;
        if (prev == nullptr)
        {
            root->right = temp->right;
        }
        else
        {
            prev->left = temp->right;
        }
        delete temp;
    }
}
struct node *levelOrder(struct node *root)
{
    struct node *ptr = root;
    if (ptr == nullptr)
    {
        return nullptr;
    }
    queue<struct node *> q;
    q.push(ptr);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            struct node *temp = q.front();
            q.pop();
            if (temp->left != nullptr)
            {
                q.push(temp->left);
            }
            if (temp->right != nullptr)
            {
                q.push(temp->right);
            }
            cout << temp->data << " ";
        }
        cout << endl;
    }
    return ptr;
}
int main()
{
    struct node *root = createnode(65);
    struct node *p1 = createnode(50);
    struct node *p2 = createnode(80);
    struct node *p3 = createnode(10);
    struct node *p4 = createnode(60);
    struct node *p5 = createnode(70);
    struct node *p6 = createnode(90);
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    int key = 9;
    insertion(root, key);
    struct node *n = iter(root, key);
    cout << n->data;
    deletion(root, 50);
    root = levelOrder(root);
    return 0;
}