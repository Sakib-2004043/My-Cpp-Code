#include <bits/stdc++.h>
using namespace std;

struct node{
    int info;
    node *next;
};

node *root = NULL;

void create(int x)
{
    if(root==NULL)
        {
        root = new node();
        root->info = x;
        root->next = NULL;
    }
    else
    {
        node *current_node = root;
        while(current_node->next!=NULL)
        {
            current_node = current_node->next;
        }
        node *new_node = new node();
        new_node->info = x;
        new_node->next = NULL;
        current_node->next = new_node;
    }
}
void print(){
    node *current_node = root;
    while(current_node->next!=NULL){
        cout << current_node->info << " ";
        current_node = current_node->next;
    }
    cout << current_node->info << endl;
}

void insert_at_fst(int x)
{
    node *new_node = new node();
    new_node->info = x;
    new_node->next = root;
    root = new_node;
}
main (){
    for(int i=1; i<=5; i++){
        //int x; cin >> x;
        create(i);
    }
    //print();
    insert_at_fst(43);
    print();
    //insert_at_fst(57);
    //print();
}
