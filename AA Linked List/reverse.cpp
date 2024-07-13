// REVERSE
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    node* next;
    node* prev;
};


node *root=NULL;

void make(int n)
{
    if(root==NULL)
    {
        root=new node();
        root->x=n;
        root->next=NULL;
        root->prev=NULL;
    }
    else
    {
        node *current_node=root;
        while(current_node->next!=NULL)
        {
            current_node=current_node->next;
        }
        node *new_node=new node();
        new_node->x=n;
        new_node->next=NULL;
        new_node->prev=current_node;
        current_node->next=new_node;
    }
}

void print()
{
    node *current_node=root;
    while(current_node->next!=NULL)
    {
        cout<<current_node->x<<" ";
        current_node=current_node->next;
    }
    cout<<current_node->x<<endl<<endl;
    while(current_node->prev!=NULL)
    {
        cout<<current_node->x<<" ";
        current_node=current_node->prev;
    }
    cout<<current_node->x<<endl<<endl;

}
int main()
{
    for(int i=1;i<=5;i++)
    {
        make(i);
    }
    print();
    return 0;
}
