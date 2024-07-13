// Queue

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int v;
    node *nxt;
};
node *root=NULL;
void push(int n)
{
    if(root==NULL)
    {
        root=new node();
        root->v=n;
        root->nxt=NULL;
    }
    else
    {
        node *new_node=new node();
        new_node->v=root->v;
        new_node->nxt=root->nxt;
        root->nxt=new_node;
        root->v=n;
    }
}
void pop()
{
    if(root==NULL)
    {
        cout<<"\nUnderflow."<<endl;
        return;
    }
    cout<<"\nPop up Successful."<<endl;
    if(root->nxt==NULL)
    {
        root=NULL;
        return;
    }
    node *current_node=root;
    while(current_node->nxt->nxt!=NULL)
    {
        current_node=current_node->nxt;
    }
    current_node->nxt=NULL;
}
void print()
{
    if(root==NULL)
    {
        cout<<"Queue : Empty"<<endl;
        return;
    }
    cout<<"Queue : "<<endl;
    node *current_node=root;
    while(current_node->nxt!=NULL)
    {
        cout<<"\t"<<current_node->v<<endl;
        current_node=current_node->nxt;
    }
    cout<<"\t"<<current_node->v<<endl;
}
int main()
{
    int n,x;
    while(1)
    {
        print();
        cout<<"\nPress >> "<<endl;
        cout<<"\t 1. For Push "<<endl;
        cout<<"\t 2. For Pop  "<<endl;
        cout<<"\t 3. For Exit"<<endl;
        cout<<"\nEnter Choice : ";
        cin>>x;
        if(x==1)
        {
            cout<<"\nEnter Value to Push Back : ";
            cin>>n;
            push(n);
        }
        else if(x==2)
        {
            pop();
        }
        else if(x==3)
        {
            cout<<"\nProgram Finished."<<endl;
            break;
        }
        cout<<endl;
    }
    return 0;
}

