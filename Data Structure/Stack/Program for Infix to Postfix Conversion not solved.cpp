#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include<cstring>
using namespace std;

int pre(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    else if(x == '^')
        return 3;
    else
        return 0;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}
char InToPost(string infix)
{
    stack<char> stk;

    int i=0,j=0;
    string postfix;
    int len=infix.length();
    postfix=new char[len+2];

    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
            postfix[j++]=infix[i++];
        else
        {
            if(pre(infix[i])>pre(stk.top()))
                stk.push(infix[i++]);
            else
            {
                postfix[j++]=stk.top(); ;
                stk.pop();
            }
        }
    }
    while(stk.top()!=NULL)
    {
        postfix[j++]=stk.top(); ;
        stk.pop();
        postfix[j]='\0';
    }
}

int main()
{
    string infix = "x^y/(5*z)+2";
    cout << "Postfix Form Is: "<< endl;
    InToPost(infix);
}
