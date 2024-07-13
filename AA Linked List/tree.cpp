#include<bits/stdc++.h>
using namespace std;

struct node
{
    int v,cnt=0;
    node *left;
    node *right;
};

node *root=NULL;

// Making Node
void make(int x)
{
    if(root==NULL)
    {
        root=new node();
        root->left=NULL;
        root->right=NULL;
        root->v=x;
    }
    else
    {
        node *current_node=root;
        while(1)
        {
            if(x == current_node->v)return;
            if(x < current_node->v && current_node->left==NULL)
            {
                node *new_node=new node();
                new_node->left=NULL;
                new_node->right=NULL;
                new_node->v=x;
                current_node->left=new_node;
                return;
            }
            else if(x < current_node->v && current_node->left!=NULL)
            {
                current_node=current_node->left;
            }
            else if(x > current_node->v && current_node->right==NULL)
            {
                node *new_node=new node();
                new_node->left=NULL;
                new_node->right=NULL;
                new_node->v=x;
                current_node->right=new_node;
                return;
            }
            else if(x > current_node->v && current_node->right!=NULL)
            {
                current_node=current_node->right;
            }
        }
    }
}

// Pre-order Traversal
void preorder_traversal(node *current_node)
{
    if (current_node == NULL)return;

    preorder_traversal(current_node->left);
    preorder_traversal(current_node->right);
    cout << current_node->v <<" ";
}

// In-order Traversal
void inorder_traversal(node *current_node)
{
    if (current_node == NULL)return;
    inorder_traversal(current_node->left);
    cout << current_node->v << " ";
    inorder_traversal(current_node->right);
}

// Post-Order Traversal
void postorder_traversal(node *current_node)
{
    if(current_node == NULL)return;
    postorder_traversal(current_node->left);
    postorder_traversal(current_node->right);
    cout << current_node->v << " ";
}
int main()
{
    int i,n,e;
    cout<<"Enter N : ";
    cin>>n;
    cout<<"\nEnter Element : ";
    for(i=1;i<=n;i++)
    {
        cin>>e;
        make(i*e);
    }
    cout<<"\nPre order  Traversal : ";
    preorder_traversal(root);
    cout<<endl;
    cout<<"\nIn  order  Traversal : ";
    inorder_traversal(root);
    cout<<endl;
    cout<<"\nPost order Traversal : ";
    postorder_traversal(root);
    cout<<endl;
    return 0;
}
