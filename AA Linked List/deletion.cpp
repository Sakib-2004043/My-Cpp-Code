// DELETION
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    node *next;
};
node *root=NULL;
void make(int n)
{
    if(root==NULL)
    {
        root=new node();
        root->x=n;
        root->next=NULL;
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
        current_node->next=new_node;
    }
}
void delet(int n)
{
    node *current_node=root;
    while(current_node->next!=NULL)
    {
        if(root->x==n)
        {
            root->x=(root->next)->x;
            root->next=(root->next)->next;
        }
        else if((current_node->next)->x==n)
        {
            current_node->next=(current_node->next)->next;
        }
        else current_node=current_node->next;
    }
}
void delete_at(int d)
{
    if(d==1)
    {
        root->x=(root->next)->x;
        root->next=(root->next)->next;
    }
    int x=2;
    node *current_node=root;
    while(current_node->next!=NULL)
    {
        if(x++ == d)
        {
            current_node->next=(current_node->next)->next;
        }
        else current_node=current_node->next;
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
    cout<<current_node->x<<endl;
}
int main()
{
    int i,n;
    for(int i=5;i<=25;i+=2)
    {
        make(rand()%30+2);
    }
    print();
    cout<<"Enter value to delete : ";
    cin>>n;
    delet(n);
    print();
    cout<<"Enter position to delete : ";
    cin>>n;
    delete_at(n);
    print();
    return 0;
}
