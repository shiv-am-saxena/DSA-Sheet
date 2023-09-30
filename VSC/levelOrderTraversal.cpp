#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
vector<vector<int>> levelOrder(Node* root)
{
    vector<vector<int>> res;
    if(root==NULL)
    {
        return res;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int> level;
        for(int i=0; i<size;i++)
        {
            Node* temp= q.front();
            q.pop();
            if(temp->left != NULL)
            {
                q.push(temp->left);
            }
            if(temp->right != NULL)
            {
                q.push(temp->right);
            }
            level.push_back(temp->data);
        }
        res.push_back(level);
    }
    return res;
}
Node* buildTree(Node* root)
{
    int x;
    cin>>x;
    root=new Node(x);
    if(x==-1)
    {
        return NULL;
    }
    cout<<"Enter the left node:";
    root->left=buildTree(root->left);
    cout<<"Enter the right node:";
    root->right=buildTree(root->right);
    return root;
}
int main()
{
    cout<<"You are going to build a binary tree. So, first draw it on the paper and then only give input to the commands."<<endl;
    cout<<"Enter -1 for NULL."<<endl;
    Node* root=buildTree(root);
    vector<vector<int>> res = levelOrder(root);
    for(int i=0; i<res.size(); i++)
    {
        for(int j=0; j<res[i].size(); j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}