#include <iostream>
#include <queue>

using namespace std;

void display(priority_queue <int> a)
{
    priority_queue <int> c = a;
    while (!c.empty())
    {
        cout << '\t' << c.top();
        c.pop();
    }
    cout << '\n';
}

int main ()
{
    priority_queue <int> a;
    a.push(10);
    a.push(30);
    a.push(20);
    a.push(5);
    a.push(1);

    cout << "The priority queue a is : ";
    display(a);

    cout << "a.size() : \n" << a.size();
    cout << "a.top() : \n" << a.top();


    cout << "a.pop() : \n";
    a.pop();
    display(a);

    return 0;
}
