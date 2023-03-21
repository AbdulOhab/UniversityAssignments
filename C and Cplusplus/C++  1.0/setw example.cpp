// setw example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw

int main () {
  std::cout << std::setw(10);
  std::cout << 77 << std::endl;
  std::cout << std::setfill ('x') << std::setw (10);
  std::cout << 77 << std::endl;
  // std::cout, std::internal, std::left, std::right
  int n=-77;
  std::cout.width(6); std::cout << std::internal << n << '\n';
  std::cout.width(6); std::cout << std::left << n << '\n';
  std::cout.width(6); std::cout << std::right << n << '\n';
  return 0;
}
