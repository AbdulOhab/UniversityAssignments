#include <iostream>
#include <queue>

using namespace std;

void Display(queue <int> q)
{
    queue <int> g = q;
    while (!g.empty())
    {
        cout << '\n' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    queue <int> Q;

    Q.push(10);
    Q.push(20);
    Q.push(30);

    cout << "The queue is : ";
    Display(Q);

    cout << "\nQ.size() : " << Q.size();
    cout << "\nQ.front() : " << Q.front();
    cout << "\nQ.back() : " << Q.back();

    cout << "\nQ.pop() : ";
    Q.pop();
    Display(Q);

    return 0;
}
