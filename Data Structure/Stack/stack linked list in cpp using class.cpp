#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;
public:
    Stack()
    {
        top=NULL;
    }
    void push(int x);
    int pop();
    void Display();
};

void Stack::push(int x)
{
    Node *t=new Node();
    t->data=x;
    t->next=top;
    top= t;
}

int Stack::pop()
{
    int x=-1;
    x=top->data;
    Node *t=top;
    top=top->next;
    delete t;

    //return x;
}


void Stack::Display()
{
    Node *p=top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.Display();

    cout<<s.pop();
    return 0;
}
