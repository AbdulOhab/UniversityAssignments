#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto i = 5;     // int
    auto d = 3.14;  // double
    auto b = false; // bool

    int& iRef = i;
    auto myAuto = iRef; // int

    const auto& myRef = iRef; // const int&

    int i = 1;
    auto&& a = i; // int& (lvalue reference)
    auto&& b = 2; // int&& (rvalue reference)

    // Since C++11
    vector<int> myVector { 1, 2, 3 };
    for (auto& x : myVector)
    {
        cout << x;    // "123"
    }

    // Prior to C++11
    for(vector<int>::size_type i = 0; i != myVector.size(); i++)
    {
        cout << myVector[i]; // "123"
    }

    // Decltype
    int i = 1;
    int& myRef = i;
    auto a = myRef; // int
    decltype(myRef) b = myRef; // int&

    decltype(auto) c = myRef; // int&
    decltype(5) getFive()
    {
        return 5;    // int
    }

    // C++11
    auto getValue(int x) -> decltype(x)
    {
        return x;    // int
    }

    // C++14
    auto getValue(int x)
    {
        return x;    // int
    }
    decltype(auto) getRef(int& x)
    {
        return x;    // int&
    }
}
