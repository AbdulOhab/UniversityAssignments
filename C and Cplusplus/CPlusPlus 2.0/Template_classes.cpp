#include <iostream>
#include <iomanip>
#include <functional>
#include <string>
#include <unordered_set>
#include <initializer_list>
///Class Template Specialization
template<class T>
class MyBox
{
public:
    T a;
    void print()
    {
        std::cout << (a ? "true\n" : "false\n");
    }
};
//Variable Templates
template<class T>
constexpr T pi = T(3.1415926535897932384626433L);

//Variadic Templates
int sum(initializer_list<int> numbers)
{
    int total = 0;
    for(auto& i : numbers)
    {
        total += i;
    }
    return total;
}
int main()
{
    MyBox<bool> box { true };
    box.print(); // "true"
    int i = pi<int>; // 3
    long double f = pi<float>; // 3.14...
    std::cout<<f<<std::endl;

    std::cout << sum( { 1, 2, 3 } ); // "6"
    //Fold Expressin
}
