
// Returning multiple values
#include <tuple>
#include <iostream>
using namespace std;

auto getTuple()
{
  return make_tuple(5, 1.2, 'b');
}

int main()
{
  auto mytuple = getTuple();
  cout << get<0>(mytuple); // "5"

  int i;
  double d;

  // Unpack tuple into variables
  tie(i, d, ignore) = getTuple();
  cout << i << " " << d; // "5 1.2"
}