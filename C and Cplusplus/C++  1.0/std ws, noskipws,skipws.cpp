#include <iostream>     // std::ws, std::skipws, std::noskipws
#include <sstream>
using namespace std;
int main () {
  char a[10], b[10],c;

  std::istringstream iss ("one \n \t two");
  iss >> std::noskipws;
  iss >> a >> std::ws >> b;
  std::cout << a << ", " << b << '\n';
//  //char a, b, c;
//
//  std::istringstream iss ("  123");
//  iss >> std::skipws >> a >> b >> c;
//  std::cout << a << b << c << '\n';
//
//  iss.seekg(0);
//  iss >> std::noskipws >> a >> b >> c;
//  std::cout << a << b << c << '\n';
//  //char a, b, c;
//
//  std::istringstream iss ("  123");
//  iss >> std::skipws >> a >> b >> c;
//  std::cout << a << b << c << '\n';
//
//  iss.seekg(0);
//  iss >> std::noskipws >> a >> b >> c;
//  std::cout << a << b << c << '\n';

  return 0;
}
