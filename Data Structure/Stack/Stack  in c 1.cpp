#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cstdio>
#include <stdio.h>
using namespace std;


int MAXSIZE = 8;
int Stack[8];
int top = -1;

int isempty()
{

    if(top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{

    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

int peek()
{
    return Stack[top];
}

int pop()
{
    int data;

    if(!isempty())
    {
        data = Stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Stack is empty.\n");
    }
}

int push(int data)
{

    if(!isfull())
    {
        top = top + 1;
        Stack[top] = data;
    }
    else
    {
        printf("Stack is full.\n");
    }
}

int main()
{
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    push(25);
    push(302);
    push(23);
    push(3);

    printf("top of the stack: %d\n",peek());
    printf("Elements: \n");

    while(!isempty())
    {
        int data = pop();
        printf("%d\n",data);
    }

    printf("Stack full: %s\n", isfull()? "true":"false");
    printf("Stack empty: %s\n", isempty()? "true":"false");

    return 0;
}
