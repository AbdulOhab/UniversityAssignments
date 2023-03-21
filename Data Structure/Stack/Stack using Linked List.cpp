//Stack using Linked List
#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cstdio>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{
    struct Node *t;
    t= new Node;
    if(t==NULL)
        printf("is full\n");
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop()
{
    struct Node *t;
    int x=-1;
    if(top==NULL)
        printf("Stack is Empty\n");
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p;
    p=top;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    Display();
    printf("%d ",pop());
    return 0;
}
