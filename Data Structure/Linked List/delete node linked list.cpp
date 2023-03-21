#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef struct node Node;
struct node{

    int data;
    node *next;
};

Node *remove_node(Node *head,Node *node)
{
    if(node==head){
       head==node->next;
       free(node);
       return head;
    }
    Node *current_node=head ;
    while(current_node!=NULL)
    {
        if(current_node->next==node)
            break;
    }
        if(current_node == NULL)
        {
           return head;

        }

        current_node->next=node->next;
        free(node);
        return head;
}
int main()
{
    return 0;
}
