///stack::empty
#include <iostream>
#include <stack>
using namespace std;
int main ()
{
    stack<int> mystack;
    mystack.push(1);
    if (mystack.empty())
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

//    stack<string> mystack;
//    mystack.emplace ("First sentence");
//    mystack.emplace ("Second sentence");
//    cout << "mystack contains:\n";
//    while (!mystack.empty())
//    {
//        std::cout << mystack.top() << '\n';
//        mystack.pop();
//    }
    return 0;
}
