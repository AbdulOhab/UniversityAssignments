#include <iostream>
using namespace std;

int main()
{
  int x = 5;
  int& r = x; // r is an alias to x
  int &s = x; // alternative syntax
  r = 10; // assigns value to r/x
  int* ptr = &x; // ptr assigned address to x

  int&& ref = 1 + 2; // rvalue reference
  ref += 3;
  cout << ref; // "6"
}