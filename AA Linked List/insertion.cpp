// INSERTION
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node* next;
};
node* root=NULL;
void create(int n)
{
    if(root==NULL)
    {
        root = new node();
        root->val=n;
        root->next=NULL;
    }
    else
    {
        node* current_node = root;
        while(current_node->next!=NULL)
        {
            current_node=current_node->next;
        }
        node* new_node=new node();
        new_node->val=n;
        new_node->next=NULL;
        current_node->next=new_node;
    }
}
void insert_1st(int n)
{
    node* new_node = new node();
    new_node->val=root->val;
    new_node->next=root->next;
    root->val=n;
    root->next=new_node;
}

void insert_at_k_position(int n,int k)
{
    int x=0;
    node* current_node=root;
    while(current_node->next!=NULL)
    {
        x++;
        if(x==k)
        {
            cout<<"\nInsertion successful at "<<k<<"-th position.\n";
            node* new_node=new node();
            new_node->next=current_node->next;
            current_node->next=new_node;
            new_node->val=n;
            return;
        }
        current_node=current_node->next;
    }
    cout<<"\nInsertion unsuccessful at "<<k<<"-th position.\n";
}
void insert_last(int n)
{
    node* current_node=root;
    while(current_node->next!=NULL)
    {
        current_node=current_node->next;
    }
    node* new_node=new node();
    current_node->next=new_node;
    new_node->val=n;
    new_node->next=NULL;
}
void print()
{
    node* current_node=root;
    cout<<"\nOutput >>\t";
    while(current_node->next!=NULL)
    {
        cout<<current_node->val<<" ";
        current_node=current_node->next;
    }
    cout<<current_node->val<<" ";
}
int main()
{
    int i,n;
    for(i=15;i<=36;i+=2)
    {
        create(i);
    }
    insert_1st(0);
    insert_1st(-1);
    insert_at_k_position(8000,5);
    insert_at_k_position(8000,50);
    insert_last(-1);
    print();
    cout<<endl;
    return 0;
}
