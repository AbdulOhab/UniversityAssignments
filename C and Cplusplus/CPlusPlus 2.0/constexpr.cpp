#include<iostream>
using namespace std;
constexpr int product(int x, int y)
{
    return (x * y);
}
  
int main()
{
    const int x = product(10, 20);
    cout << x;
    return 0;
}
// constexpr is a feature added in C++ 11. 
// The main idea is performance improvement 
// of programs by doing computations at compile 
// time rather than run time