// Lambda functions
#include <iostream>
#include <functional>
using namespace std;

// Auto type deduction
void call(int arg, function<void(int)> func)
{
    func(arg);
}


void call(function<void()> func)
{
    func();
}

int main()
{
    auto sum = [](int x, int y) -> int
    {
        return x + y;
    };
    cout << sum(2, 3); // "5"

    auto printSquare = [](int x)
    {
        cout << x*x;
    };
    call(2, printSquare); // "4"

    int i = 2;
    auto printSquar = [i]()
    {
        cout << i*i;
    };
    call(printSquar); // "4"

    int a = 1;
    [&a](int x)
    {
        a += x;
    }
    (2);
    cout << a; // "3"

    int z = 1, b = 1;
    [&, b]() mutable { b++; z += b; }();
    cout << z << b; // "31"
    int x = 1;
    [&, b = 2]()
    {
        x += b;
    }
    ();
    cout << x; // "3"
}
