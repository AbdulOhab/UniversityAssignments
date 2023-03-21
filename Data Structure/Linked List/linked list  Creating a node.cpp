#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef struct node node;
struct node
{
    int data;
    node *next;
};

node *Create_node(int item, node *next)
{
    node *new_node= new node;
    if(new_node == NULL)
    {
        cout<<"ERROR!"<<endl;
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;

    return new_node;

};

int main()
{
    node *n;
    n=Create_node(10,NULL);
    cout<<n->data;
    return 0;
}
