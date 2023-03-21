#include <iostream>
using namespace std;
int main ()
{
//    std::cout.setf ( std::ios::hex, std::ios::basefield );  // set hex as the basefield
//    std::cout.setf ( std::ios::showbase );                  // activate showbase
//    std::cout << 100 << '\n';

//
//    cout << 100.02 <<endl;;
//    cout.setf(std::ios::scientific);
//    cout << 100.02<<endl ;
//    std::cout.unsetf ( std::ios::scientific);
//    cout << 100.02<<endl ;
//
//    std::cout.unsetf ( std::ios::basefield);
//    std::cout.setf ( std::ios::hex);
//    std::cout << 100 <<endl;
//
//    std::cout.setf ( std::ios::showbase );                  // activate showbase
//    std::cout << 100 << '\n';

   ios::fmtflags f;
    f=( ios::showpos | ios::showbase);
    cout.flags(f);
    cout<<100.1<<endl;
    return 0;
}
