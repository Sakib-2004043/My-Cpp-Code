// Deletion

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int v;
    node *left;
    node *right;
    node *par;
};

node *root=NULL;
node *successor=new node();
node *delet_node=new node();
node *temp=new node();
int y=1;

// Making Node
void make(int x)
{
    if(root==NULL)
    {
        root=new node();
        root->left=NULL;
        root->right=NULL;
        root->par=NULL;
        root->v=x;
    }
    else
    {
        node *current_node=root;
        while(1)
        {
            if(x < current_node->v && current_node->left==NULL)
            {
                node *new_node=new node();
                new_node->left=NULL;
                new_node->right=NULL;
                new_node->v=x;
                new_node->par=current_node;
                current_node->left=new_node;
                return;
            }
            else if(x < current_node->v && current_node->left!=NULL)
            {
                current_node=current_node->left;
            }
            else if(x >= current_node->v && current_node->right==NULL)
            {
                node *new_node=new node();
                new_node->left=NULL;
                new_node->right=NULL;
                new_node->v=x;
                new_node->par=current_node;
                current_node->right=new_node;
                return;
            }
            else if(x >= current_node->v && current_node->right!=NULL)
            {
                current_node=current_node->right;
            }
        }
    }
}


// In-order Traversal
void inorder_traversal(node *current_node)
{
    if (current_node == NULL)return;
    inorder_traversal(current_node->left);

    if(current_node->left==NULL && current_node->right==NULL)
    {
        cout <<" "<< current_node->v <<" ";
    }
    else if(current_node->left==NULL)
    {
        cout <<" "<< current_node->v <<". ";
    }
    else if(current_node->right==NULL)
    {
        cout <<" ."<< current_node->v <<" ";
    }
    else cout <<" ."<< current_node->v <<". ";
    if(current_node==root)cout<<"<-(root)";

    inorder_traversal(current_node->right);
}

//
void find_successor(node *current_node,int x)
{
    if (current_node == NULL)return;
    find_successor(current_node->left,x);
    if(y && current_node->v==x)
    {
        y=0;
        delet_node=current_node;
        successor=temp;
    }
    temp=current_node;
    find_successor(current_node->right,x);
}

void delet(int x)
{
    node *current_node=root;
    if(root->v==x)return;
    while(current_node->v!=x)
    {
        if(x < current_node->v)
        {
            if(current_node->left!=NULL)current_node=current_node->left;
            else return;
        }
        else
        {
            if(current_node->right!=NULL)current_node=current_node->right;
            else return;
        }
    }
    if(current_node->left==NULL && current_node->right==NULL)
    {
        if(current_node->par->left==current_node)current_node->par->left=NULL;
        else current_node->par->right=NULL;
    }
    else if(current_node->right==NULL)
    {
        if(current_node->par->left==current_node)
        {
            current_node->par->left=current_node->left;
            current_node->left->par=current_node->par;
        }
        else
        {
            current_node->par->right=current_node->left;
            current_node->left->par=current_node->par;
        }
    }

    else if(current_node->left==NULL)
    {
        if(current_node->par->left==current_node)
        {
            current_node->par->left=current_node->right;
            current_node->right->par=current_node->par;
        }
        else
        {
            current_node->par->right=current_node->right;
            current_node->right->par=current_node->par;
        }
    }
    else
    {
        find_successor(root,x);
        delet_node->v=successor->v;
        if(successor->par->left==successor)
        {
            if(successor->right==NULL&&successor->left==NULL)
            {
                successor->par->left=NULL;
            }
            else if(successor->right!=NULL)successor->par->left=successor->right;
            else successor->par->left=successor->left;
        }
        else
        {
            if(successor->right==NULL&&successor->left==NULL)
            {
                successor->par->right=NULL;
            }
            else if(successor->right!=NULL)successor->par->right=successor->right;
            else successor->par->right=successor->left;
        }
    }
}
int main()
{
    int i,n,e;
    cout<<"Enter N : ";
    cin>>n;
    cout<<"\nEnter the Elements : ";
    for(i=1;i<=n;i++)
    {
        e=rand()%50+rand()%999;
        //cin>>e;
        make(e);
        cout<<e<<" ";
    }
    cout<<endl;

    cout<<"\nIn order Traversal : ";
    inorder_traversal(root);
    cout<<endl;
    aa:
    cout<<"\nEnter N to  delete : ";
    cin>>n;
    y=1;
    delet(n);

    cout<<"\nIn order Traversal : ";
    inorder_traversal(root);
    cout<<endl;
    goto aa;

    return 0;
}

// Deletion

