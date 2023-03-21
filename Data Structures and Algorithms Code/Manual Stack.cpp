///Name:Abdul Ohab
///ID:2019000000061
///Final Assignment
///Question Implementation of delete in singly linked list.

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node* delete_head(Node* head)
{
    if (head == NULL)
        return NULL;
    Node* temp = head;
    head = head->next;
    delete temp;
     return head;
}

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

void delete_node(Node* head, int index)
{
    Node *current = new Node;
    Node *pre = new Node;
    current=head;
    for(int i=1;i<index;i++)
    {
        pre=current;
        current=current->next;
    }
     pre->next=current->next;
}
void delete_tail(Node* head, Node*tail)
{
    Node *current=new Node;
    Node *pre=new Node;
    current=head;
    while(current->next!=NULL)
    {
        pre=current;
        current=current->next;
    }
    tail=pre;
    pre->next=NULL;
    delete current;
}
int main()
{
    Node* head = NULL;

    push(&head, 6);
    push(&head, 4);
    push(&head, 5);
    push(&head, 7);
    push(&head, 9);
    push(&head, 3);
    printList(head);
    cout<<endl;

   head=delete_head(head);
   for (Node* temp = head; temp != NULL; temp = temp->next)
   cout << temp->data << " ";
   cout<<endl;

   delete_node(head, 4);
   printList(head);
   cout<<endl;

   delete_tail(head,NULL);
   printList(head);
   cout<<endl;

    return 0;
}
