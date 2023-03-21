#include <fstream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{

    std::fstream fs;
    //fs.open ("test.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    //fs << " more lorem ipsum";
    //fs.close();
    fs.open ("Test.txt");
    if (fs.is_open())
    {
        fs << "Abdul Ohab\n";
        std::cout << "Operation successfully\n";
        //fs.close();
    }
    else
    {
        std::cout << "Error opening file";
    }
    std::fstream foo;
    std::fstream bar ("test.txt");

    swap(foo,bar);

    foo << "lorem ipsum";

    foo.close();
    return 0;
}
