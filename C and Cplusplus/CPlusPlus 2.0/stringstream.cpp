#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main ()
{

    std::stringstream ss;
    ss << 100 << ' ' << 200;
    int foo,bar;
    ss >> foo >> bar;
    std::cout << "foo: " << foo << '\n';
    std::cout << "bar: " << bar << '\n';
    return 0;
}
