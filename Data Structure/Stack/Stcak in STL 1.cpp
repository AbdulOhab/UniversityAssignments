#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

void Display(stack <int> s)
{
    while (!s.empty())
    {
        cout << ' ' << s.top();
        s.pop();
    }
    cout << '\n';
}

int main ()
{
    stack <int> s;

    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);
    s.push(40);
    s.push(77);
    s.push(108);
    s.push(30);

    cout<<s.size()<<endl;
    cout << s.top()<<endl;
    Display(s);

    cout << "\npop() : ";
    s.pop();


    while (!s.empty())
    {
        cout << ' ' << s.top();
        s.pop();
    }

    return 0;
}
