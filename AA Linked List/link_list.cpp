// LINKED LIST
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
void print()
{
    node* current_node=root;
    while(current_node->next!=NULL)
    {
        cout<<current_node->val<<endl;
        current_node=current_node->next;
    }
    cout<<current_node->val<<" ";
}
int main()
{
    int i,n;
    for(i=1;i<=250;i+=3)
    {
        create(i);
    }
    print();
    return 0;
}
