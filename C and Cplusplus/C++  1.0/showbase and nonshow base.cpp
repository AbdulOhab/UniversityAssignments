// modify showbase flag
#include <iostream>     // std::cout, std::showbase, std::noshowbase

int main () {
  int n = 20;
  std::cout << std::oct << std::showbase << n << '\n';
  std::cout << std::hex << std::noshowbase << n << '\n';
  return 0;
}
